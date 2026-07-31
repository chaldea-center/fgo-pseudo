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
  UnityEngine_AnimationClip_o *IsPlaying; // x0
  __int64 v7; // x1
  float deltaTime; // s0
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  unsigned int v10; // w23
  unsigned int max_length; // w9
  SimpleAnimation_o *v12; // x21
  UnityEngine_Object_o *m_Clip; // x20
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float targetFps; // s9
  SimpleAnimation_State_c *klass; // x8
  float v18; // s0
  __int64 v19; // x9
  float v20; // s10
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  SimpleAnimation_State_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  SimpleAnimation_State_c *v27; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  struct UnityEngine_Animation_array *v31; // x8
  unsigned int v32; // w23
  unsigned int v33; // w9
  Il2CppClass **v34; // x8
  UnityEngine_Animation_o *v35; // x20
  __int64 v36; // x1
  UnityEngine_Object_o *clip; // x21
  System_String_o *v38; // x22
  UnityEngine_TrackedReference_o *v39; // x21
  float v40; // s0
  float v41; // s1
  float v42; // s1

  if ( (byte_593B237 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593B237 = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( targetAnimations && targetAnimations->max_length
    || (v4 = this->fields.targetSimpleAnimations) != 0 && v4->max_length )
  {
    progressDeltaTime = this->fields.progressDeltaTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    targetSimpleAnimations = this->fields.targetSimpleAnimations;
    this->fields.progressDeltaTime = progressDeltaTime + deltaTime;
    if ( targetSimpleAnimations && targetSimpleAnimations->max_length )
    {
      v10 = 0;
      while ( 1 )
      {
        max_length = targetSimpleAnimations->max_length;
        if ( (int)v10 >= (int)max_length )
          break;
        if ( v10 >= max_length )
          goto LABEL_65;
        v12 = targetSimpleAnimations->m_Items[v10];
        if ( v12 )
        {
          m_Clip = (UnityEngine_Object_o *)v12->fields.m_Clip;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(m_Clip, 0, 0);
          if ( ((unsigned __int8)IsPlaying & 1) == 0 )
          {
            IsPlaying = v12->fields.m_Clip;
            if ( !IsPlaying )
              goto LABEL_63;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)IsPlaying, 0);
            Item = SimpleAnimation__get_Item(v12, name, 0);
            IsPlaying = (UnityEngine_AnimationClip_o *)SimpleAnimation__IsPlaying(v12, name, 0);
            if ( ((unsigned __int8)IsPlaying & 1) == 0 )
              IsPlaying = (UnityEngine_AnimationClip_o *)SimpleAnimation__Play_78338864(v12, name, 0);
            if ( Item )
            {
              targetFps = this->fields.targetFps;
              klass = Item->klass;
              v18 = targetFps * this->fields.progressDeltaTime;
              v19 = *(unsigned __int16 *)&Item->klass->_2.rank;
              if ( v18 == INFINITY )
                v20 = -2147500000.0;
              else
                v20 = (float)(int)v18;
              if ( *(_WORD *)&Item->klass->_2.rank )
              {
                p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v19;
                  p_offset += 2;
                  if ( !v19 )
                    goto LABEL_27;
                }
                v22 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
              }
              else
              {
LABEL_27:
                v22 = sub_2237E2C(Item, SimpleAnimation_State_TypeInfo, 4);
              }
              (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v22)(
                Item,
                *(_QWORD *)(v22 + 8),
                v20 / targetFps);
              v23 = Item->klass;
              v24 = *(unsigned __int16 *)&Item->klass->_2.rank;
              if ( *(_WORD *)&Item->klass->_2.rank )
              {
                v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
                while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v24;
                  v25 += 2;
                  if ( !v24 )
                    goto LABEL_33;
                }
                v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1];
              }
              else
              {
LABEL_33:
                v26 = sub_2237E2C(Item, SimpleAnimation_State_TypeInfo, 1);
              }
              (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v26)(Item, 1, *(_QWORD *)(v26 + 8));
              SimpleAnimation__Sample(v12, 0);
              v27 = Item->klass;
              v28 = *(unsigned __int16 *)&Item->klass->_2.rank;
              if ( *(_WORD *)&Item->klass->_2.rank )
              {
                v29 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
                while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v28;
                  v29 += 2;
                  if ( !v28 )
                    goto LABEL_39;
                }
                v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 1];
              }
              else
              {
LABEL_39:
                v30 = sub_2237E2C(Item, SimpleAnimation_State_TypeInfo, 1);
              }
              IsPlaying = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v30)(
                                                           Item,
                                                           0,
                                                           *(_QWORD *)(v30 + 8));
            }
          }
          targetSimpleAnimations = this->fields.targetSimpleAnimations;
          ++v10;
          if ( targetSimpleAnimations )
            continue;
        }
        goto LABEL_63;
      }
    }
    else
    {
      v31 = this->fields.targetAnimations;
      if ( v31 && v31->max_length )
      {
        v32 = 0;
        while ( 1 )
        {
          v33 = v31->max_length;
          if ( (int)v32 >= (int)v33 )
            break;
          if ( v32 >= v33 )
LABEL_65:
            sub_21FFED4(IsPlaying);
          v34 = &v31->obj.klass + (int)v32;
          v35 = (UnityEngine_Animation_o *)v34[4];
          if ( v35 )
          {
            clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v34[4], 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
            IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
            if ( ((unsigned __int8)IsPlaying & 1) == 0 )
            {
              IsPlaying = UnityEngine_Animation__get_clip(v35, 0);
              if ( !IsPlaying )
                goto LABEL_63;
              v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)IsPlaying, 0);
              v39 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, v38, 0);
              if ( !UnityEngine_Animation__IsPlaying(v35, v38, 0) )
                UnityEngine_Animation__Play_82865240(v35, v38, 0);
              IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_TrackedReference__op_Equality(v39, 0, 0);
              if ( ((unsigned __int8)IsPlaying & 1) == 0 )
              {
                if ( !v39 )
                  goto LABEL_63;
                v40 = this->fields.targetFps;
                v41 = v40 * this->fields.progressDeltaTime;
                if ( v41 == INFINITY )
                  v42 = -2147500000.0;
                else
                  v42 = (float)(int)v41;
                UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v39, v42 / v40, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v39, 1, 0);
                UnityEngine_Animation__Sample(v35, 0);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v39, 0, 0);
              }
            }
            v31 = this->fields.targetAnimations;
            ++v32;
            if ( v31 )
              continue;
          }
LABEL_63:
          sub_21FFECC(IsPlaying, v7);
        }
      }
    }
  }
}


void BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  System_Object_array *ComponentsInChildren_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UnityEngine_Animation_array *targetAnimations; // x8
  System_Object_array *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593B236 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____91505600);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____91505664);
    byte_593B236 = 1;
  }
  targetSimpleAnimations = this->fields.targetSimpleAnimations;
  if ( !targetSimpleAnimations || !targetSimpleAnimations->max_length )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____91505664);
    this->fields.targetSimpleAnimations = (struct SimpleAnimation_array *)ComponentsInChildren_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetSimpleAnimations,
      (int32_t)ComponentsInChildren_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !targetAnimations->max_length )
  {
    v12 = UnityEngine_Component__GetComponentsInChildren_object_(
            (UnityEngine_Component_o *)this,
            1,
            (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____91505600);
    this->fields.targetAnimations = (struct UnityEngine_Animation_array *)v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetAnimations,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}