void UnscaledTimeSimpleAnimation___ctor(UnscaledTimeSimpleAnimation_o *this, const MethodInfo *method)
{
  this->fields.m_UseUnscaledTime = 1;
  this->fields.m_PlayAutomatically = 1;
  this->fields.m_CullingMode = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UnscaledTimeSimpleAnimation__ApplyUpdateMode(UnscaledTimeSimpleAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Animator_o *m_Animator; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  UnityEngine_Playables_PlayableGraph_o v7; // 0:x0.16

  if ( this->fields.m_Initialized )
  {
    m_Animator = this->fields.m_Animator;
    v4 = ((__int64 (__fastcall *)(UnscaledTimeSimpleAnimation_o *, const MethodInfo *))this->klass->vtable._9_GetAnimatorUpdateMode.methodPtr)(
           this,
           this->klass->vtable._9_GetAnimatorUpdateMode.method);
    if ( !m_Animator )
      sub_1C942F0(v4, v5);
    UnityEngine_Animator__set_updateMode(m_Animator, v4, 0);
    *(_QWORD *)&v7.fields.m_Version = ((unsigned int (__fastcall *)(UnscaledTimeSimpleAnimation_o *, const MethodInfo *))this->klass->vtable._10_GetDirectorUpdateMode.methodPtr)(
                                        this,
                                        this->klass->vtable._10_GetDirectorUpdateMode.method);
    v7.fields.m_Handle = (intptr_t)&this->fields.m_Graph;
    UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode(v7, 0, v6);
  }
}


int32_t UnscaledTimeSimpleAnimation__GetAnimatorUpdateMode(
        UnscaledTimeSimpleAnimation_o *this,
        const MethodInfo *method)
{
  if ( this->fields.m_AnimatePhysics )
    return 1;
  else
    return 2 * this->fields.m_UseUnscaledTime;
}


int32_t UnscaledTimeSimpleAnimation__GetDirectorUpdateMode(
        UnscaledTimeSimpleAnimation_o *this,
        const MethodInfo *method)
{
  if ( this->fields.m_AnimatePhysics )
    return 1;
  if ( this->fields.m_UseUnscaledTime )
    return 2;
  return 1;
}


bool UnscaledTimeSimpleAnimation__get_useUnscaledTime(UnscaledTimeSimpleAnimation_o *this, const MethodInfo *method)
{
  return this->fields.m_UseUnscaledTime;
}


void UnscaledTimeSimpleAnimation__set_useUnscaledTime(
        UnscaledTimeSimpleAnimation_o *this,
        bool value,
        const MethodInfo *method)
{
  UnscaledTimeSimpleAnimation_c *klass; // x8

  klass = this->klass;
  this->fields.m_UseUnscaledTime = value;
  ((void (__fastcall *)(UnscaledTimeSimpleAnimation_o *, const MethodInfo *))klass->vtable._4_ApplyUpdateMode.methodPtr)(
    this,
    klass->vtable._4_ApplyUpdateMode.method);
}