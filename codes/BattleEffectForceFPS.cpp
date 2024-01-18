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
  __int64 v17; // x3
  float v18; // s0
  SimpleAnimation_State_c *klass; // x8
  float v20; // s1
  double v21; // d2
  bool v22; // zf
  double v23; // d1
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  SimpleAnimation_State_c *v28; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  SimpleAnimation_State_c *v33; // x8
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  unsigned int v39; // w23
  __int64 v40; // x8
  UnityEngine_Animation_o *v41; // x20
  System_String_o *v42; // x22
  UnityEngine_TrackedReference_o *v43; // x21
  float v44; // s0
  float v45; // s1
  double v46; // d1
  __int64 v47; // x0

  if ( (byte_41868BC & 1) == 0 )
  {
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, method);
    byte_41868BC = 1;
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
          monitor = (UnityEngine_Object_o *)SimpleAnimation__Play_16486620(v14, name, 0LL);
        if ( Item )
        {
          v18 = *(float *)&this->fields.targetSimpleAnimations;
          klass = Item->klass;
          v20 = v18 * *(float *)&this[1].klass;
          v21 = v20;
          v22 = v20 == INFINITY;
          v23 = -v20;
          if ( !v22 )
            v23 = v21;
          *(float *)&v2 = (float)(int)v23 / v18;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v24 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v24;
              p_offset += 2;
              if ( v24 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_24:
            p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 4LL, v17);
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
            v31 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 1LL, v27);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v31)(Item, 1LL, *(_QWORD *)(v31 + 8));
          SimpleAnimation__Sample(v14, 0LL);
          v33 = Item->klass;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v34 = 0LL;
            v35 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v34;
              v35 += 2;
              if ( v34 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_36;
            }
            v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
          }
          else
          {
LABEL_36:
            v36 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 1LL, v32);
          }
          monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v36)(
                                              Item,
                                              0LL,
                                              *(_QWORD *)(v36 + 8));
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
    v37 = *(_QWORD *)&this->fields.progressDeltaTime;
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 24);
      if ( v38 )
      {
        if ( (int)v38 >= 1 )
        {
          v39 = 0;
          while ( v39 < (unsigned int)v38 )
          {
            v40 = v37 + 8LL * (int)v39;
            v41 = *(UnityEngine_Animation_o **)(v40 + 32);
            if ( !v41 )
              goto LABEL_60;
            monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(
                                                *(UnityEngine_Animation_o **)(v40 + 32),
                                                0LL);
            if ( !monitor )
              goto LABEL_60;
            v42 = UnityEngine_Object__get_name(monitor, 0LL);
            v43 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v41, v42, 0LL);
            if ( !UnityEngine_Animation__IsPlaying(v41, v42, 0LL) )
              UnityEngine_Animation__Play_50201580(v41, v42, 0LL);
            monitor = (UnityEngine_Object_o *)UnityEngine_TrackedReference__op_Equality(v43, 0LL, 0LL);
            if ( ((unsigned __int8)monitor & 1) == 0 )
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
              UnityEngine_Animation__Sample(v41, 0LL);
              UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v43, 0, 0LL);
            }
            v37 = *(_QWORD *)&this->fields.progressDeltaTime;
            if ( !v37 )
LABEL_60:
              sub_B2C434(monitor, v9);
            LODWORD(v38) = *(_DWORD *)(v37 + 24);
            if ( (int)++v39 >= (int)v38 )
              return;
          }
LABEL_61:
          v47 = sub_B2C460(monitor);
          sub_B2C400(v47, 0LL);
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

  if ( (byte_41868BB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____67394936, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____67394984, v3);
    byte_41868BB = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_Animation_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)this, 1, (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____67394984);
    this->fields.targetAnimations = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B2C2F8(
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
                                   (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____67394936);
    *(_QWORD *)&this->fields.progressDeltaTime = v13;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.progressDeltaTime, v13, v14, v15, v16, v17, v18, v19);
  }
}