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

  if ( (byte_4CC4B45 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC4B45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SummonEffectSceneRootComponent__beginStartUp(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *summonInstance; // x0

  if ( (byte_4CC4B46 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&StringLiteral_12329/*"START_EFFECT"*/);
    byte_4CC4B46 = 1;
  }
  SceneRootComponent__beginStartUp_41758296((SceneRootComponent_o *)this, 0);
  summonInstance = (UnityEngine_Component_o *)this->fields.summonInstance;
  if ( !summonInstance
    || (summonInstance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      summonInstance,
                                                      (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0 )
  {
    sub_1C71608(summonInstance, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInstance, (System_String_o *)StringLiteral_12329/*"START_EFFECT"*/, 0);
}