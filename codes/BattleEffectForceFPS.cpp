void __fastcall BattleEffectForceFPS___ctor(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.targetSimpleAnimations) = 1106247680;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectForceFPS__LateUpdate(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x8
  struct UnityEngine_Animation_array **p_targetAnimations; // x23
  struct UnityEngine_Animation_array *targetAnimations; // x8
  float v7; // s8
  UnityEngine_Object_o *monitor; // x0
  float deltaTime; // s0
  struct UnityEngine_Animation_array *v10; // x8
  __int64 v11; // x9
  unsigned int v12; // w24
  SimpleAnimation_o *v13; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float v16; // s0
  SimpleAnimation_State_c *klass; // x8
  float v18; // s1
  double v19; // d2
  bool v20; // zf
  double v21; // d1
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_c *v25; // x8
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0
  SimpleAnimation_State_c *v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  unsigned int v35; // w23
  __int64 v36; // x8
  UnityEngine_Animation_o *v37; // x20
  System_String_o *v38; // x22
  UnityEngine_TrackedReference_o *v39; // x21
  float v40; // s0
  float v41; // s1
  double v42; // d1
  __int64 v43; // x0

  if ( (byte_42134E5 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, method);
    byte_42134E5 = 1;
  }
  v4 = *(_QWORD *)&this->fields.progressDeltaTime;
  if ( v4 && *(_QWORD *)(v4 + 24) )
  {
    p_targetAnimations = &this->fields.targetAnimations;
  }
  else
  {
    p_targetAnimations = &this->fields.targetAnimations;
    targetAnimations = this->fields.targetAnimations;
    if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
      return;
  }
  v7 = *(float *)&this[1].klass;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v10 = this->fields.targetAnimations;
  *(float *)&this[1].klass = v7 + deltaTime;
  if ( v10 && (v11 = *(_QWORD *)&v10->max_length) != 0 )
  {
    if ( (int)v11 >= 1 )
    {
      v12 = 0;
      while ( v12 < (unsigned int)v11 )
      {
        v13 = (SimpleAnimation_o *)v10->m_Items[v12];
        if ( !v13 )
          goto LABEL_60;
        monitor = (UnityEngine_Object_o *)v13[1].monitor;
        if ( !monitor )
          goto LABEL_60;
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v13, name, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__IsPlaying(v13, name, 0LL);
        if ( ((unsigned __int8)monitor & 1) == 0 )
          monitor = (UnityEngine_Object_o *)SimpleAnimation__Play_50482404(v13, name, 0LL);
        if ( Item )
        {
          v16 = *(float *)&this->fields.targetSimpleAnimations;
          klass = Item->klass;
          v18 = v16 * *(float *)&this[1].klass;
          v19 = v18;
          v20 = v18 == INFINITY;
          v21 = -v18;
          if ( !v20 )
            v21 = v19;
          *(float *)&v2 = (float)(int)v21 / v16;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v22 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v22;
              p_offset += 2;
              if ( v22 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_24:
            p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            Item,
            *(_QWORD *)(p_method + 8),
            v2);
          v25 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v26 = 0LL;
            v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v26;
              v27 += 2;
              if ( v26 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_30;
            }
            v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
          }
          else
          {
LABEL_30:
            v28 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v28)(Item, 1LL, *(_QWORD *)(v28 + 8));
          SimpleAnimation__Sample(v13, 0LL);
          v29 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v30 = 0LL;
            v31 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v30;
              v31 += 2;
              if ( v30 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_36;
            }
            v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1].method;
          }
          else
          {
LABEL_36:
            v32 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v32)(
                                              Item,
                                              0LL,
                                              *(_QWORD *)(v32 + 8));
        }
        v10 = *p_targetAnimations;
        if ( !*p_targetAnimations )
          goto LABEL_60;
        LODWORD(v11) = v10->max_length;
        if ( (int)++v12 >= (int)v11 )
          return;
      }
      goto LABEL_61;
    }
  }
  else
  {
    v33 = *(_QWORD *)&this->fields.progressDeltaTime;
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 24);
      if ( v34 )
      {
        if ( (int)v34 >= 1 )
        {
          v35 = 0;
          while ( v35 < (unsigned int)v34 )
          {
            v36 = v33 + 8LL * (int)v35;
            v37 = *(UnityEngine_Animation_o **)(v36 + 32);
            if ( !v37 )
              goto LABEL_60;
            monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                                *(UnityEngine_Animation_o **)(v36 + 32),
                                                0LL);
            if ( !monitor )
              goto LABEL_60;
            v38 = UnityEngine_Object__get_name(monitor, 0LL);
            v39 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v37, v38, 0LL);
            if ( !UnityEngine_Animation__IsPlaying(v37, v38, 0LL) )
              UnityEngine_Animation__Play_50564840(v37, v38, 0LL);
            monitor = (UnityEngine_Object_o *)UnityEngine_TrackedReference__op_Equality(v39, 0LL, 0LL);
            if ( ((unsigned __int8)monitor & 1) == 0 )
            {
              if ( !v39 )
                goto LABEL_60;
              v40 = *(float *)&this->fields.targetSimpleAnimations;
              v41 = v40 * *(float *)&this[1].klass;
              if ( v41 == INFINITY )
                v42 = -INFINITY;
              else
                v42 = v41;
              UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v39, (float)(int)v42 / v40, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v39, 1, 0LL);
              UnityEngine_Animation__Sample(v37, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v39, 0, 0LL);
            }
            v33 = *(_QWORD *)&this->fields.progressDeltaTime;
            if ( !v33 )
LABEL_60:
              sub_B0D97C(monitor);
            LODWORD(v34) = *(_DWORD *)(v33 + 24);
            if ( (int)++v35 >= (int)v34 )
              return;
          }
LABEL_61:
          v43 = sub_B0D9A8(monitor);
          sub_B0D948(v43, 0LL);
        }
      }
    }
  }
}


void __fastcall BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Animation_array *targetAnimations; // x8
  struct UnityEngine_Animation_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x8
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42134E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____67969272, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____67969320, v3);
    byte_42134E4 = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_Animation_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)this, 1, (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____67969320);
    this->fields.targetAnimations = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.targetAnimations,
      (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  v12 = *(_QWORD *)&this->fields.progressDeltaTime;
  if ( !v12 || !*(_QWORD *)(v12 + 24) )
  {
    v13 = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____67969272);
    *(_QWORD *)&this->fields.progressDeltaTime = v13;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.progressDeltaTime, v13, v14, v15, v16, v17, v18, v19);
  }
}