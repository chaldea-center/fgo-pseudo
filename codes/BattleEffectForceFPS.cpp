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
  il2cpp_array_size_t v10; // x9
  unsigned int v11; // w23
  SimpleAnimation_o *v12; // x21
  UnityEngine_Object_o *m_Clip; // x20
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float targetFps; // s8
  SimpleAnimation_State_c *klass; // x8
  float v18; // s0
  __int64 v19; // x9
  float v20; // s9
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
  il2cpp_array_size_t max_length; // x9
  unsigned int v33; // w23
  Il2CppClass **v34; // x8
  UnityEngine_Animation_o *v35; // x20
  UnityEngine_Object_o *clip; // x21
  System_String_o *v37; // x22
  UnityEngine_TrackedReference_o *v38; // x21
  float v39; // s0
  float v40; // s1
  int v41; // w8
  bool v42; // zf
  float v43; // s1

  if ( (byte_4CF10CF & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF10CF = 1;
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
            goto LABEL_65;
          m_Clip = (UnityEngine_Object_o *)v12->fields.m_Clip;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(m_Clip, 0, 0);
          if ( ((unsigned __int8)IsPlaying & 1) == 0 )
          {
            IsPlaying = v12->fields.m_Clip;
            if ( !IsPlaying )
              goto LABEL_65;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)IsPlaying, 0);
            Item = SimpleAnimation__get_Item(v12, name, 0);
            IsPlaying = (UnityEngine_AnimationClip_o *)SimpleAnimation__IsPlaying(v12, name, 0);
            if ( ((unsigned __int8)IsPlaying & 1) == 0 )
              IsPlaying = (UnityEngine_AnimationClip_o *)SimpleAnimation__Play_67121960(v12, name, 0);
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
                v22 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 4);
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
                v26 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 1);
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
                v30 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 1);
              }
              IsPlaying = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v30)(
                                                           Item,
                                                           0,
                                                           *(_QWORD *)(v30 + 8));
            }
          }
          targetSimpleAnimations = this->fields.targetSimpleAnimations;
          if ( !targetSimpleAnimations )
            goto LABEL_65;
          LODWORD(v10) = targetSimpleAnimations->max_length;
          if ( (int)++v11 >= (int)v10 )
            return;
        }
        goto LABEL_66;
      }
    }
    else
    {
      v31 = this->fields.targetAnimations;
      if ( v31 )
      {
        max_length = v31->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v33 = 0;
            while ( v33 < (unsigned int)max_length )
            {
              v34 = &v31->obj.klass + (int)v33;
              v35 = (UnityEngine_Animation_o *)v34[4];
              if ( !v35 )
                goto LABEL_65;
              clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v34[4], 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
              if ( ((unsigned __int8)IsPlaying & 1) == 0 )
              {
                IsPlaying = UnityEngine_Animation__get_clip(v35, 0);
                if ( !IsPlaying )
                  goto LABEL_65;
                v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)IsPlaying, 0);
                v38 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, v37, 0);
                if ( !UnityEngine_Animation__IsPlaying(v35, v37, 0) )
                  UnityEngine_Animation__Play_71613624(v35, v37, 0);
                IsPlaying = (UnityEngine_AnimationClip_o *)UnityEngine_TrackedReference__op_Equality(v38, 0, 0);
                if ( ((unsigned __int8)IsPlaying & 1) == 0 )
                {
                  if ( !v38 )
                    goto LABEL_65;
                  v39 = this->fields.targetFps;
                  v40 = v39 * this->fields.progressDeltaTime;
                  v41 = (int)v40;
                  v42 = v40 == INFINITY;
                  v43 = -2147500000.0;
                  if ( !v42 )
                    v43 = (float)v41;
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v38, v43 / v39, 0);
                  UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v38, 1, 0);
                  UnityEngine_Animation__Sample(v35, 0);
                  UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v38, 0, 0);
                }
              }
              v31 = this->fields.targetAnimations;
              if ( !v31 )
LABEL_65:
                sub_1C7BD40(IsPlaying, v7);
              LODWORD(max_length) = v31->max_length;
              if ( (int)++v33 >= (int)max_length )
                return;
            }
LABEL_66:
            sub_1C7BD48(IsPlaying);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UnityEngine_Animation_array *targetAnimations; // x8
  System_Object_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CF10CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____78814384);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78814432);
    byte_4CF10CE = 1;
  }
  targetSimpleAnimations = this->fields.targetSimpleAnimations;
  if ( !targetSimpleAnimations || !targetSimpleAnimations->max_length )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_31678E8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____78814432);
    this->fields.targetSimpleAnimations = (struct SimpleAnimation_array *)ComponentsInChildren_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.targetSimpleAnimations,
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
            (const MethodInfo_31678E8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____78814384);
    this->fields.targetAnimations = (struct UnityEngine_Animation_array *)v12;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.targetAnimations,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}