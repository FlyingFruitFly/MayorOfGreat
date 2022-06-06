#pragma once
#include "GameFramework/Character.h"
#include "SupportAttr.generated.h"

UCLASS(config = Game)
class USupportAttr :public UClass
{
	GENERATED_BODY()

	float m_mainstream{ 0.0f };
	float m_ethnic_minority{ 0.0f };
	float m_sexual_minority{ 0.0f };
	float m_refugee{ 0.0f };
	float m_bourgeoisie{ 0.0f };
	float m_proletariat{ 0.0f };

	// invisiable
	float m_mainstream_weight{ 0.0f };
	float m_ethnic_minority_weight{ 0.0f };
	float m_sexual_minority_weight{ 0.0f };
	float m_refugee_weight{ 0.0f };
	float m_bourgeoisie_weight{ 0.0f };
	float m_proletariat_weight{ 0.0f };

public:
	UFUNCTION(BlueprintCallable, Category = "Game")
		float getTotolSupport();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getMainstream();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getEthnicMinority();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getSexualMinority();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getRefugee();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getBourgeoisie();

	UFUNCTION(BlueprintCallable, Category = "Game")
		float getProletariat();

	void add(const USupportAttr& other);
};

