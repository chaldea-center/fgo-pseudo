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

  if ( (byte_4C4073E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C4073E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SummonEffectSceneRootComponent__beginStartUp(SummonEffectSceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *summonInstance; // x0

  if ( (byte_4C4073F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C37058(&StringLiteral_12321/*"START_EFFECT"*/);
    byte_4C4073F = 1;
  }
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
  summonInstance = (UnityEngine_Component_o *)this->fields.summonInstance;
  if ( !summonInstance
    || (summonInstance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      summonInstance,
                                                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___)) == 0 )
  {
    sub_1C372B4(summonInstance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInstance, (System_String_o *)StringLiteral_12321/*"START_EFFECT"*/, 0);
}