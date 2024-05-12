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
  __int64 v9; // x1
  float deltaTime; // s0
  struct UnityEngine_Animation_array *v11; // x8
  __int64 v12; // x9
  unsigned int v13; // w24
  SimpleAnimation_o *v14; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float v17; // s0
  SimpleAnimation_State_c *klass; // x8
  float v19; // s1
  double v20; // d2
  bool v21; // zf
  double v22; // d1
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_c *v26; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **v28; // x11
  __int64 v29; // x0
  SimpleAnimation_State_c *v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  unsigned int v36; // w23
  __int64 v37; // x8
  UnityEngine_Animation_o *v38; // x20
  System_String_o *v39; // x22
  UnityEngine_TrackedReference_o *v40; // x21
  float v41; // s0
  float v42; // s1
  double v43; // d1
  __int64 v44; // x0

  if ( (byte_4389BDF & 1) == 0 )
  {
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4389BDF = 1;
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
  v11 = this->fields.targetAnimations;
  *(float *)&this[1].klass = v7 + deltaTime;
  if ( v11 && (v12 = *(_QWORD *)&v11->max_length) != 0 )
  {
    if ( (int)v12 >= 1 )
    {
      v13 = 0;
      while ( v13 < (unsigned int)v12 )
      {
        v14 = (SimpleAnimation_o *)v11->m_Items[v13];
        if ( !v14 )
          goto LABEL_60;
        monitor = (UnityEngine_Object_o *)v14[1].monitor;
        if ( !monitor )
          goto LABEL_60;
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v14, name, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__IsPlaying(v14, name, 0LL);
        if ( ((unsigned __int8)monitor & 1) == 0 )
          monitor = (UnityEngine_Object_o *)SimpleAnimation__Play_16815192(v14, name, 0LL);
        if ( Item )
        {
          v17 = *(float *)&this->fields.targetSimpleAnimations;
          klass = Item->klass;
          v19 = v17 * *(float *)&this[1].klass;
          v20 = v19;
          v21 = v19 == INFINITY;
          v22 = -v19;
          if ( !v21 )
            v22 = v20;
          *(float *)&v2 = (float)(int)v22 / v17;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v23 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v23;
              p_offset += 2;
              if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_24:
            p_method = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            Item,
            *(_QWORD *)(p_method + 8),
            v2);
          v26 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v27 = 0LL;
            v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
            while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v27;
              v28 += 2;
              if ( v27 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_30;
            }
            v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
          }
          else
          {
LABEL_30:
            v29 = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v29)(Item, 1LL, *(_QWORD *)(v29 + 8));
          SimpleAnimation__Sample(v14, 0LL);
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
                goto LABEL_36;
            }
            v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
          }
          else
          {
LABEL_36:
            v33 = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 1LL);
          }
          monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v33)(
                                              Item,
                                              0LL,
                                              *(_QWORD *)(v33 + 8));
        }
        v11 = *p_targetAnimations;
        if ( !*p_targetAnimations )
          goto LABEL_60;
        LODWORD(v12) = v11->max_length;
        if ( (int)++v13 >= (int)v12 )
          return;
      }
      goto LABEL_61;
    }
  }
  else
  {
    v34 = *(_QWORD *)&this->fields.progressDeltaTime;
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 24);
      if ( v35 )
      {
        if ( (int)v35 >= 1 )
        {
          v36 = 0;
          while ( v36 < (unsigned int)v35 )
          {
            v37 = v34 + 8LL * (int)v36;
            v38 = *(UnityEngine_Animation_o **)(v37 + 32);
            if ( !v38 )
              goto LABEL_60;
            monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                                *(UnityEngine_Animation_o **)(v37 + 32),
                                                0LL);
            if ( !monitor )
              goto LABEL_60;
            v39 = UnityEngine_Object__get_name(monitor, 0LL);
            v40 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v38, v39, 0LL);
            if ( !UnityEngine_Animation__IsPlaying(v38, v39, 0LL) )
              UnityEngine_Animation__Play_51745976(v38, v39, 0LL);
            monitor = (UnityEngine_Object_o *)UnityEngine_TrackedReference__op_Equality(v40, 0LL, 0LL);
            if ( ((unsigned __int8)monitor & 1) == 0 )
            {
              if ( !v40 )
                goto LABEL_60;
              v41 = *(float *)&this->fields.targetSimpleAnimations;
              v42 = v41 * *(float *)&this[1].klass;
              if ( v42 == INFINITY )
                v43 = -INFINITY;
              else
                v43 = v42;
              UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v40, (float)(int)v43 / v41, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v40, 1, 0LL);
              UnityEngine_Animation__Sample(v38, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v40, 0, 0LL);
            }
            v34 = *(_QWORD *)&this->fields.progressDeltaTime;
            if ( !v34 )
LABEL_60:
              sub_B7769C(monitor, v9);
            LODWORD(v35) = *(_DWORD *)(v34 + 24);
            if ( (int)++v36 >= (int)v35 )
              return;
          }
LABEL_61:
          v44 = sub_B776C8(monitor);
          sub_B77668(v44, 0LL);
        }
      }
    }
  }
}


void __fastcall BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_array *targetAnimations; // x8
  struct UnityEngine_Animation_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x8
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4389BDE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____69483880);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____69483928);
    byte_4389BDE = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_Animation_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)this, 1, (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____69483928);
    this->fields.targetAnimations = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.targetAnimations,
      (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  v11 = *(_QWORD *)&this->fields.progressDeltaTime;
  if ( !v11 || !*(_QWORD *)(v11 + 24) )
  {
    v12 = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____69483880);
    *(_QWORD *)&this->fields.progressDeltaTime = v12;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.progressDeltaTime, v12, v13, v14, v15, v16, v17, v18);
  }
}