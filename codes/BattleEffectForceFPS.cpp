void BattleEffectForceFPS___ctor(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  this->fields.targetFps = 30.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleEffectForceFPS__LateUpdate(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_array *targetAnimations; // x8
  struct SimpleAnimation_array *v4; // x8
  float progressDeltaTime; // s8
  UnityEngine_AnimationClip_o *m_Clip; // x0
  __int64 v7; // x1
  float deltaTime; // s0
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  il2cpp_array_size_t v10; // x9
  unsigned int v11; // w23
  SimpleAnimation_o *v12; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float targetFps; // s8
  SimpleAnimation_State_c *klass; // x8
  float v17; // s0
  __int64 v18; // x9
  float v19; // s9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  SimpleAnimation_State_c *v22; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  SimpleAnimation_State_c *v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  struct UnityEngine_Animation_array *v30; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v32; // w23
  Il2CppClass **v33; // x8
  UnityEngine_Animation_o *v34; // x20
  System_String_o *v35; // x22
  UnityEngine_TrackedReference_o *v36; // x21
  float v37; // s0
  float v38; // s1
  int v39; // w8
  bool v40; // zf
  float v41; // s1

  if ( (byte_4CB8D69 & 1) == 0 )
  {
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    byte_4CB8D69 = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( targetAnimations && targetAnimations->max_length
    || (v4 = this->fields.targetSimpleAnimations) != 0 && v4->max_length )
  {
    progressDeltaTime = this->fields.progressDeltaTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    targetSimpleAnimations = this->fields.targetSimpleAnimations;
    this->fields.progressDeltaTime = progressDeltaTime + deltaTime;
    if ( targetSimpleAnimations && (v10 = targetSimpleAnimations->max_length) != 0 )
    {
      if ( (int)v10 >= 1 )
      {
        v11 = 0;
        while ( v11 < (unsigned int)v10 )
        {
          v12 = targetSimpleAnimations->m_Items[v11];
          if ( !v12 )
            goto LABEL_59;
          m_Clip = v12->fields.m_Clip;
          if ( !m_Clip )
            goto LABEL_59;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
          Item = SimpleAnimation__get_Item(v12, name, 0);
          m_Clip = (UnityEngine_AnimationClip_o *)SimpleAnimation__IsPlaying(v12, name, 0);
          if ( ((unsigned __int8)m_Clip & 1) == 0 )
            m_Clip = (UnityEngine_AnimationClip_o *)SimpleAnimation__Play_66911856(v12, name, 0);
          if ( Item )
          {
            targetFps = this->fields.targetFps;
            klass = Item->klass;
            v17 = targetFps * this->fields.progressDeltaTime;
            v18 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( v17 == INFINITY )
              v19 = -2147500000.0;
            else
              v19 = (float)(int)v17;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v18;
                p_offset += 2;
                if ( !v18 )
                  goto LABEL_24;
              }
              v21 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
            }
            else
            {
LABEL_24:
              v21 = sub_1C41D90(Item, SimpleAnimation_State_TypeInfo, 4);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v21)(
              Item,
              *(_QWORD *)(v21 + 8),
              v19 / targetFps);
            v22 = Item->klass;
            v23 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              v24 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
              while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v23;
                v24 += 2;
                if ( !v23 )
                  goto LABEL_30;
              }
              v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1];
            }
            else
            {
LABEL_30:
              v25 = sub_1C41D90(Item, SimpleAnimation_State_TypeInfo, 1);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v25)(Item, 1, *(_QWORD *)(v25 + 8));
            SimpleAnimation__Sample(v12, 0);
            v26 = Item->klass;
            v27 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
              while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v27;
                v28 += 2;
                if ( !v27 )
                  goto LABEL_36;
              }
              v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1];
            }
            else
            {
LABEL_36:
              v29 = sub_1C41D90(Item, SimpleAnimation_State_TypeInfo, 1);
            }
            m_Clip = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v29)(
                                                      Item,
                                                      0,
                                                      *(_QWORD *)(v29 + 8));
          }
          targetSimpleAnimations = this->fields.targetSimpleAnimations;
          if ( !targetSimpleAnimations )
            goto LABEL_59;
          LODWORD(v10) = targetSimpleAnimations->max_length;
          if ( (int)++v11 >= (int)v10 )
            return;
        }
        goto LABEL_60;
      }
    }
    else
    {
      v30 = this->fields.targetAnimations;
      if ( v30 )
      {
        max_length = v30->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v32 = 0;
            while ( v32 < (unsigned int)max_length )
            {
              v33 = &v30->obj.klass + (int)v32;
              v34 = (UnityEngine_Animation_o *)v33[4];
              if ( !v34 )
                goto LABEL_59;
              m_Clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v33[4], 0);
              if ( !m_Clip )
                goto LABEL_59;
              v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
              v36 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, v35, 0);
              if ( !UnityEngine_Animation__IsPlaying(v34, v35, 0) )
                UnityEngine_Animation__Play_71403152(v34, v35, 0);
              m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_TrackedReference__op_Equality(v36, 0, 0);
              if ( ((unsigned __int8)m_Clip & 1) == 0 )
              {
                if ( !v36 )
                  goto LABEL_59;
                v37 = this->fields.targetFps;
                v38 = v37 * this->fields.progressDeltaTime;
                v39 = (int)v38;
                v40 = v38 == INFINITY;
                v41 = -2147500000.0;
                if ( !v40 )
                  v41 = (float)v39;
                UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v36, v41 / v37, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v36, 1, 0);
                UnityEngine_Animation__Sample(v34, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v36, 0, 0);
              }
              v30 = this->fields.targetAnimations;
              if ( !v30 )
LABEL_59:
                sub_1C6BC60(m_Clip, v7);
              LODWORD(max_length) = v30->max_length;
              if ( (int)++v32 >= (int)max_length )
                return;
            }
LABEL_60:
            sub_1C6BC68(m_Clip);
          }
        }
      }
    }
  }
}


void BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UnityEngine_Animation_array *targetAnimations; // x8
  System_Object_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB8D68 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____78590824);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78590872);
    byte_4CB8D68 = 1;
  }
  targetSimpleAnimations = this->fields.targetSimpleAnimations;
  if ( !targetSimpleAnimations || !targetSimpleAnimations->max_length )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78590872);
    this->fields.targetSimpleAnimations = (struct SimpleAnimation_array *)ComponentsInChildren_object;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.targetSimpleAnimations,
      (int32_t)ComponentsInChildren_object,
      v5,
      v6);
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !targetAnimations->max_length )
  {
    v8 = UnityEngine_Component__GetComponentsInChildren_object_(
           (UnityEngine_Component_o *)this,
           1,
           (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____78590824);
    this->fields.targetAnimations = (struct UnityEngine_Animation_array *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetAnimations, (int32_t)v8, v9, v10);
  }
}