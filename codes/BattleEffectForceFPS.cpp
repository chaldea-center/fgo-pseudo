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
  float deltaTime; // s0
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  il2cpp_array_size_t v9; // x9
  unsigned int v10; // w23
  SimpleAnimation_o *v11; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float targetFps; // s8
  SimpleAnimation_State_c *klass; // x8
  float v16; // s0
  __int64 v17; // x9
  float v18; // s9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  SimpleAnimation_State_c *v21; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  SimpleAnimation_State_c *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  struct UnityEngine_Animation_array *v29; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v31; // w23
  Il2CppClass **v32; // x8
  UnityEngine_Animation_o *v33; // x20
  System_String_o *v34; // x22
  UnityEngine_TrackedReference_o *v35; // x21
  float v36; // s0
  float v37; // s1
  int v38; // w8
  bool v39; // zf
  float v40; // s1

  if ( (byte_4C3A3DD & 1) == 0 )
  {
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3A3DD = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( targetAnimations && targetAnimations->max_length
    || (v4 = this->fields.targetSimpleAnimations) != 0 && v4->max_length )
  {
    progressDeltaTime = this->fields.progressDeltaTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    targetSimpleAnimations = this->fields.targetSimpleAnimations;
    this->fields.progressDeltaTime = progressDeltaTime + deltaTime;
    if ( targetSimpleAnimations && (v9 = targetSimpleAnimations->max_length) != 0 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        while ( v10 < (unsigned int)v9 )
        {
          v11 = targetSimpleAnimations->m_Items[v10];
          if ( !v11 )
            goto LABEL_59;
          m_Clip = v11->fields.m_Clip;
          if ( !m_Clip )
            goto LABEL_59;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
          Item = SimpleAnimation__get_Item(v11, name, 0);
          m_Clip = (UnityEngine_AnimationClip_o *)SimpleAnimation__IsPlaying(v11, name, 0);
          if ( ((unsigned __int8)m_Clip & 1) == 0 )
            m_Clip = (UnityEngine_AnimationClip_o *)SimpleAnimation__Play_66464300(v11, name, 0);
          if ( Item )
          {
            targetFps = this->fields.targetFps;
            klass = Item->klass;
            v16 = targetFps * this->fields.progressDeltaTime;
            v17 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( v16 == INFINITY )
              v18 = -2147500000.0;
            else
              v18 = (float)(int)v16;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v17;
                p_offset += 2;
                if ( !v17 )
                  goto LABEL_24;
              }
              v20 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
            }
            else
            {
LABEL_24:
              v20 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 4);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v20)(
              Item,
              *(_QWORD *)(v20 + 8),
              v18 / targetFps);
            v21 = Item->klass;
            v22 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              v23 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
              while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v22;
                v23 += 2;
                if ( !v22 )
                  goto LABEL_30;
              }
              v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1];
            }
            else
            {
LABEL_30:
              v24 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 1);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v24)(Item, 1, *(_QWORD *)(v24 + 8));
            SimpleAnimation__Sample(v11, 0);
            v25 = Item->klass;
            v26 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
              while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v26;
                v27 += 2;
                if ( !v26 )
                  goto LABEL_36;
              }
              v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1];
            }
            else
            {
LABEL_36:
              v28 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 1);
            }
            m_Clip = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v28)(
                                                      Item,
                                                      0,
                                                      *(_QWORD *)(v28 + 8));
          }
          targetSimpleAnimations = this->fields.targetSimpleAnimations;
          if ( !targetSimpleAnimations )
            goto LABEL_59;
          LODWORD(v9) = targetSimpleAnimations->max_length;
          if ( (int)++v10 >= (int)v9 )
            return;
        }
        goto LABEL_60;
      }
    }
    else
    {
      v29 = this->fields.targetAnimations;
      if ( v29 )
      {
        max_length = v29->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v31 = 0;
            while ( v31 < (unsigned int)max_length )
            {
              v32 = &v29->obj.klass + (int)v31;
              v33 = (UnityEngine_Animation_o *)v32[4];
              if ( !v33 )
                goto LABEL_59;
              m_Clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v32[4], 0);
              if ( !m_Clip )
                goto LABEL_59;
              v34 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
              v35 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v33, v34, 0);
              if ( !UnityEngine_Animation__IsPlaying(v33, v34, 0) )
                UnityEngine_Animation__Play_70968924(v33, v34, 0);
              m_Clip = (UnityEngine_AnimationClip_o *)UnityEngine_TrackedReference__op_Equality(v35, 0, 0);
              if ( ((unsigned __int8)m_Clip & 1) == 0 )
              {
                if ( !v35 )
                  goto LABEL_59;
                v36 = this->fields.targetFps;
                v37 = v36 * this->fields.progressDeltaTime;
                v38 = (int)v37;
                v39 = v37 == INFINITY;
                v40 = -2147500000.0;
                if ( !v39 )
                  v40 = (float)v38;
                UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v35, v40 / v36, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v35, 1, 0);
                UnityEngine_Animation__Sample(v33, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v35, 0, 0);
              }
              v29 = this->fields.targetAnimations;
              if ( !v29 )
LABEL_59:
                sub_1C32E7C(m_Clip);
              LODWORD(max_length) = v29->max_length;
              if ( (int)++v31 >= (int)max_length )
                return;
            }
LABEL_60:
            sub_1C32E84(m_Clip);
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

  if ( (byte_4C3A3DC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____78081840);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78081888);
    byte_4C3A3DC = 1;
  }
  targetSimpleAnimations = this->fields.targetSimpleAnimations;
  if ( !targetSimpleAnimations || !targetSimpleAnimations->max_length )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78081888);
    this->fields.targetSimpleAnimations = (struct SimpleAnimation_array *)ComponentsInChildren_object;
    sub_1C32BC4(
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
           (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____78081840);
    this->fields.targetAnimations = (struct UnityEngine_Animation_array *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetAnimations, (int32_t)v8, v9, v10);
  }
}