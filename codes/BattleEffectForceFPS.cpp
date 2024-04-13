void __fastcall BattleEffectForceFPS___ctor(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.targetSimpleAnimations) = 1106247680;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectForceFPS__LateUpdate(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  __int64 v6; // x8
  struct UnityEngine_Animation_array **p_targetAnimations; // x23
  struct UnityEngine_Animation_array *targetAnimations; // x8
  float v9; // s8
  UnityEngine_Object_o *monitor; // x0
  __int64 v11; // x1
  float deltaTime; // s0
  struct UnityEngine_Animation_array *v13; // x8
  __int64 v14; // x9
  unsigned int v15; // w24
  SimpleAnimation_o *v16; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  __int64 v19; // x3
  float v20; // s0
  SimpleAnimation_State_c *klass; // x8
  float v22; // s1
  double v23; // d2
  bool v24; // zf
  double v25; // d1
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  SimpleAnimation_State_c *v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  SimpleAnimation_State_c *v35; // x8
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  unsigned int v41; // w23
  __int64 v42; // x8
  UnityEngine_Animation_o *v43; // x20
  System_String_o *v44; // x22
  UnityEngine_TrackedReference_o *v45; // x21
  float v46; // s0
  float v47; // s1
  double v48; // d1
  __int64 v49; // x0

  if ( (byte_42E7840 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7840 = 1;
  }
  v6 = *(_QWORD *)&this->fields.progressDeltaTime;
  if ( v6 && *(_QWORD *)(v6 + 24) )
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
  v9 = *(float *)&this[1].klass;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v13 = this->fields.targetAnimations;
  *(float *)&this[1].klass = v9 + deltaTime;
  if ( v13 && (v14 = *(_QWORD *)&v13->max_length) != 0 )
  {
    if ( (int)v14 >= 1 )
    {
      v15 = 0;
      while ( v15 < (unsigned int)v14 )
      {
        v16 = (SimpleAnimation_o *)v13->m_Items[v15];
        if ( !v16 )
          goto LABEL_60;
        monitor = (UnityEngine_Object_o *)v16[1].monitor;
        if ( !monitor )
          goto LABEL_60;
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v16, name, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__IsPlaying(v16, name, 0LL);
        if ( ((unsigned __int8)monitor & 1) == 0 )
          monitor = (UnityEngine_Object_o *)SimpleAnimation__Play_16676044(v16, name, 0LL);
        if ( Item )
        {
          v20 = *(float *)&this->fields.targetSimpleAnimations;
          klass = Item->klass;
          v22 = v20 * *(float *)&this[1].klass;
          v23 = v22;
          v24 = v22 == INFINITY;
          v25 = -v22;
          if ( !v24 )
            v25 = v23;
          *(float *)&v4 = (float)(int)v25 / v20;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v26 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v26;
              p_offset += 2;
              if ( v26 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_24:
            p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 4LL, v19);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            Item,
            *(_QWORD *)(p_method + 8),
            v4);
          v30 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v31 = 0LL;
            v32 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v31;
              v32 += 2;
              if ( v31 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_30;
            }
            v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
          }
          else
          {
LABEL_30:
            v33 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 1LL, v29);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v33)(Item, 1LL, *(_QWORD *)(v33 + 8));
          SimpleAnimation__Sample(v16, 0LL);
          v35 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v36 = 0LL;
            v37 = (SimpleAnimation_State_c **)&v35->_1.interfaceOffsets->offset;
            while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v36;
              v37 += 2;
              if ( v36 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_36;
            }
            v38 = (__int64)&v35->vtable[*(_DWORD *)v37 + 1].method;
          }
          else
          {
LABEL_36:
            v38 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 1LL, v34);
          }
          monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v38)(
                                              Item,
                                              0LL,
                                              *(_QWORD *)(v38 + 8));
        }
        v13 = *p_targetAnimations;
        if ( !*p_targetAnimations )
          goto LABEL_60;
        LODWORD(v14) = v13->max_length;
        if ( (int)++v15 >= (int)v14 )
          return;
      }
      goto LABEL_61;
    }
  }
  else
  {
    v39 = *(_QWORD *)&this->fields.progressDeltaTime;
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 24);
      if ( v40 )
      {
        if ( (int)v40 >= 1 )
        {
          v41 = 0;
          while ( v41 < (unsigned int)v40 )
          {
            v42 = v39 + 8LL * (int)v41;
            v43 = *(UnityEngine_Animation_o **)(v42 + 32);
            if ( !v43 )
              goto LABEL_60;
            monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                                *(UnityEngine_Animation_o **)(v42 + 32),
                                                0LL);
            if ( !monitor )
              goto LABEL_60;
            v44 = UnityEngine_Object__get_name(monitor, 0LL);
            v45 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v43, v44, 0LL);
            if ( !UnityEngine_Animation__IsPlaying(v43, v44, 0LL) )
              UnityEngine_Animation__Play_51249124(v43, v44, 0LL);
            monitor = (UnityEngine_Object_o *)UnityEngine_TrackedReference__op_Equality(v45, 0LL, 0LL);
            if ( ((unsigned __int8)monitor & 1) == 0 )
            {
              if ( !v45 )
                goto LABEL_60;
              v46 = *(float *)&this->fields.targetSimpleAnimations;
              v47 = v46 * *(float *)&this[1].klass;
              if ( v47 == INFINITY )
                v48 = -INFINITY;
              else
                v48 = v47;
              UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v45, (float)(int)v48 / v46, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v45, 1, 0LL);
              UnityEngine_Animation__Sample(v43, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v45, 0, 0LL);
            }
            v39 = *(_QWORD *)&this->fields.progressDeltaTime;
            if ( !v39 )
LABEL_60:
              sub_B5D69C(monitor, v11);
            LODWORD(v40) = *(_DWORD *)(v39 + 24);
            if ( (int)++v41 >= (int)v40 )
              return;
          }
LABEL_61:
          v49 = sub_B5D6C8(monitor);
          sub_B5D668(v49, 0LL);
        }
      }
    }
  }
}


void __fastcall BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Animation_array *targetAnimations; // x8
  struct UnityEngine_Animation_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x8
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E783F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____68825744, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____68825792, v5, v6, v7);
    byte_42E783F = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_Animation_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)this, 1, (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____68825792);
    this->fields.targetAnimations = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.targetAnimations,
      (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = *(_QWORD *)&this->fields.progressDeltaTime;
  if ( !v16 || !*(_QWORD *)(v16 + 24) )
  {
    v17 = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____68825744);
    *(_QWORD *)&this->fields.progressDeltaTime = v17;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.progressDeltaTime, v17, v18, v19, v20, v21, v22, v23);
  }
}