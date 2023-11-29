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
  __int64 IsPlaying; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float deltaTime; // s0
  struct UnityEngine_Animation_array *v12; // x8
  __int64 v13; // x9
  unsigned int v14; // w24
  SimpleAnimation_o *v15; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float v19; // s0
  SimpleAnimation_State_c *klass; // x8
  float v21; // s1
  double v22; // d2
  bool v23; // zf
  double v24; // d1
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_c *v28; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0
  SimpleAnimation_State_c *v32; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  unsigned int v38; // w23
  __int64 v39; // x8
  UnityEngine_Animation_o *v40; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v42; // x22
  UnityEngine_TrackedReference_o *v43; // x21
  float v44; // s0
  float v45; // s1
  double v46; // d1

  if ( (byte_40F8CEA & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, method);
    byte_40F8CEA = 1;
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
  v12 = this->fields.targetAnimations;
  *(float *)&this[1].klass = v7 + deltaTime;
  if ( v12 && (v13 = *(_QWORD *)&v12->max_length) != 0 )
  {
    if ( (int)v13 >= 1 )
    {
      v14 = 0;
      while ( v14 < (unsigned int)v13 )
      {
        v15 = (SimpleAnimation_o *)v12->m_Items[v14];
        if ( !v15 )
          goto LABEL_60;
        monitor = (UnityEngine_Object_o *)v15[1].monitor;
        if ( !monitor )
          goto LABEL_60;
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v15, name, 0LL);
        IsPlaying = SimpleAnimation__IsPlaying(v15, name, 0LL);
        if ( (IsPlaying & 1) == 0 )
          IsPlaying = SimpleAnimation__Play_16380456(v15, name, 0LL);
        if ( Item )
        {
          v19 = *(float *)&this->fields.targetSimpleAnimations;
          klass = Item->klass;
          v21 = v19 * *(float *)&this[1].klass;
          v22 = v21;
          v23 = v21 == INFINITY;
          v24 = -v21;
          if ( !v23 )
            v24 = v22;
          *(float *)&v2 = (float)(int)v24 / v19;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v25 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v25;
              p_offset += 2;
              if ( v25 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_24:
            p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            Item,
            *(_QWORD *)(p_method + 8),
            v2);
          v28 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v29 = 0LL;
            v30 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v29;
              v30 += 2;
              if ( v29 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_30;
            }
            v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
          }
          else
          {
LABEL_30:
            v31 = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v31)(Item, 1LL, *(_QWORD *)(v31 + 8));
          SimpleAnimation__Sample(v15, 0LL);
          v32 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v33 = 0LL;
            v34 = (SimpleAnimation_State_c **)&v32->_1.interfaceOffsets->offset;
            while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v33;
              v34 += 2;
              if ( v33 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_36;
            }
            v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 1].method;
          }
          else
          {
LABEL_36:
            v35 = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          IsPlaying = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v35)(
                        Item,
                        0LL,
                        *(_QWORD *)(v35 + 8));
        }
        v12 = *p_targetAnimations;
        if ( !*p_targetAnimations )
          goto LABEL_60;
        LODWORD(v13) = v12->max_length;
        if ( (int)++v14 >= (int)v13 )
          return;
      }
      goto LABEL_61;
    }
  }
  else
  {
    v36 = *(_QWORD *)&this->fields.progressDeltaTime;
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 24);
      if ( v37 )
      {
        if ( (int)v37 >= 1 )
        {
          v38 = 0;
          while ( v38 < (unsigned int)v37 )
          {
            v39 = v36 + 8LL * (int)v38;
            v40 = *(UnityEngine_Animation_o **)(v39 + 32);
            if ( !v40 )
              goto LABEL_60;
            clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*(UnityEngine_Animation_o **)(v39 + 32), 0LL);
            if ( !clip )
              goto LABEL_60;
            v42 = UnityEngine_Object__get_name(clip, 0LL);
            v43 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v40, v42, 0LL);
            if ( !UnityEngine_Animation__IsPlaying(v40, v42, 0LL) )
              UnityEngine_Animation__Play_49744236(v40, v42, 0LL);
            IsPlaying = UnityEngine_TrackedReference__op_Equality(v43, 0LL, 0LL);
            if ( (IsPlaying & 1) == 0 )
            {
              if ( !v43 )
                goto LABEL_60;
              v44 = *(float *)&this->fields.targetSimpleAnimations;
              v45 = v44 * *(float *)&this[1].klass;
              if ( v45 == INFINITY )
                v46 = -INFINITY;
              else
                v46 = v45;
              UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v43, (float)(int)v46 / v44, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v43, 1, 0LL);
              UnityEngine_Animation__Sample(v40, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v43, 0, 0LL);
            }
            v36 = *(_QWORD *)&this->fields.progressDeltaTime;
            if ( !v36 )
LABEL_60:
              sub_B170D4();
            LODWORD(v37) = *(_DWORD *)(v36 + 24);
            if ( (int)++v38 >= (int)v37 )
              return;
          }
LABEL_61:
          sub_B17100(IsPlaying, v9, v10);
          sub_B170A0();
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

  if ( (byte_40F8CE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____66819832, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____66819880, v3);
    byte_40F8CE9 = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_Animation_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)this, 1, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____66819880);
    this->fields.targetAnimations = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B16F98(
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
                                   (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____66819832);
    *(_QWORD *)&this->fields.progressDeltaTime = v13;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.progressDeltaTime, v13, v14, v15, v16, v17, v18, v19);
  }
}