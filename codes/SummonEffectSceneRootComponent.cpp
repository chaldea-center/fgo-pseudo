void SummonEffectSceneRootComponent___ctor(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void SummonEffectSceneRootComponent__beginFinish(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonEffectSceneRootComponent__beginInitialize(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEBD56 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEBD56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SummonEffectSceneRootComponent__beginStartUp(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *summonInstance; // x0

  if ( (byte_4CEBD57 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C7BAE8(&StringLiteral_12376/*"START_EFFECT"*/);
    byte_4CEBD57 = 1;
  }
  SceneRootComponent__beginStartUp_42059656((SceneRootComponent_o *)this, 0);
  summonInstance = (UnityEngine_Component_o *)this->fields.summonInstance;
  if ( !summonInstance
    || (summonInstance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      summonInstance,
                                                      (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0 )
  {
    sub_1C7BD40(summonInstance, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInstance, (System_String_o *)StringLiteral_12376/*"START_EFFECT"*/, 0);
}