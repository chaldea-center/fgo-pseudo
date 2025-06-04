void __fastcall BattleEffectForceFPS___ctor(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  this->fields.targetFps = 30.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectForceFPS__LateUpdate(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_array *targetAnimations; // x8
  struct SimpleAnimation_array *v4; // x8
  float progressDeltaTime; // s8
  UnityEngine_Object_o *monitor; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float deltaTime; // s0
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  __int64 v11; // x9
  unsigned int v12; // w23
  SimpleAnimation_o *v13; // x21
  System_String_o *name; // x22
  SimpleAnimation_State_o *Item; // x20
  float targetFps; // s8
  SimpleAnimation_State_c *klass; // x8
  float v18; // s0
  __int64 v19; // x9
  float v20; // s9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  SimpleAnimation_State_c *v27; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  struct UnityEngine_Animation_array *v31; // x8
  __int64 v32; // x9
  unsigned int v33; // w23
  Il2CppClass **v34; // x8
  UnityEngine_Animation_o *v35; // x20
  System_String_o *v36; // x22
  UnityEngine_TrackedReference_o *v37; // x21
  float v38; // s0
  float v39; // s1
  int v40; // w8
  bool v41; // zf
  float v42; // s1

  if ( (byte_4B04854 & 1) == 0 )
  {
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, method);
    byte_4B04854 = 1;
  }
  targetAnimations = this->fields.targetAnimations;
  if ( targetAnimations && *(_QWORD *)&targetAnimations->max_length
    || (v4 = this->fields.targetSimpleAnimations) != 0LL && *(_QWORD *)&v4->max_length )
  {
    progressDeltaTime = this->fields.progressDeltaTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    targetSimpleAnimations = this->fields.targetSimpleAnimations;
    this->fields.progressDeltaTime = progressDeltaTime + deltaTime;
    if ( targetSimpleAnimations && (v11 = *(_QWORD *)&targetSimpleAnimations->max_length) != 0 )
    {
      if ( (int)v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < (unsigned int)v11 )
        {
          v13 = targetSimpleAnimations->m_Items[v12];
          if ( !v13 )
            goto LABEL_59;
          monitor = (UnityEngine_Object_o *)v13[1].monitor;
          if ( !monitor )
            goto LABEL_59;
          name = UnityEngine_Object__get_name(monitor, 0LL);
          Item = SimpleAnimation__get_Item(v13, name, 0LL);
          monitor = (UnityEngine_Object_o *)SimpleAnimation__IsPlaying(v13, name, 0LL);
          if ( ((unsigned __int8)monitor & 1) == 0 )
            monitor = (UnityEngine_Object_o *)SimpleAnimation__Play_65293968(v13, name, 0LL);
          if ( Item )
          {
            targetFps = this->fields.targetFps;
            klass = Item->klass;
            v18 = targetFps * this->fields.progressDeltaTime;
            v19 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( v18 == INFINITY )
              v20 = -2147500000.0;
            else
              v20 = (float)(int)v18;
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v19;
                p_offset += 2;
                if ( !v19 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(
              Item,
              *(_QWORD *)(p_method + 8),
              v20 / targetFps);
            v23 = Item->klass;
            v24 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
              while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v24;
                v25 += 2;
                if ( !v24 )
                  goto LABEL_30;
              }
              v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
            }
            else
            {
LABEL_30:
              v26 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v26)(Item, 1LL, *(_QWORD *)(v26 + 8));
            SimpleAnimation__Sample(v13, 0LL);
            v27 = Item->klass;
            v28 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              v29 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
              while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v28;
                v29 += 2;
                if ( !v28 )
                  goto LABEL_36;
              }
              v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 1].method;
            }
            else
            {
LABEL_36:
              v30 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 1LL);
            }
            monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v30)(
                                                Item,
                                                0LL,
                                                *(_QWORD *)(v30 + 8));
          }
          targetSimpleAnimations = this->fields.targetSimpleAnimations;
          if ( !targetSimpleAnimations )
            goto LABEL_59;
          LODWORD(v11) = targetSimpleAnimations->max_length;
          if ( (int)++v12 >= (int)v11 )
            return;
        }
        goto LABEL_60;
      }
    }
    else
    {
      v31 = this->fields.targetAnimations;
      if ( v31 )
      {
        v32 = *(_QWORD *)&v31->max_length;
        if ( v32 )
        {
          if ( (int)v32 >= 1 )
          {
            v33 = 0;
            while ( v33 < (unsigned int)v32 )
            {
              v34 = &v31->obj.klass + (int)v33;
              v35 = (UnityEngine_Animation_o *)v34[4];
              if ( !v35 )
                goto LABEL_59;
              monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v34[4], 0LL);
              if ( !monitor )
                goto LABEL_59;
              v36 = UnityEngine_Object__get_name(monitor, 0LL);
              v37 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, v36, 0LL);
              if ( !UnityEngine_Animation__IsPlaying(v35, v36, 0LL) )
                UnityEngine_Animation__Play_69779584(v35, v36, 0LL);
              monitor = (UnityEngine_Object_o *)UnityEngine_TrackedReference__op_Equality(v37, 0LL, 0LL);
              if ( ((unsigned __int8)monitor & 1) == 0 )
              {
                if ( !v37 )
                  goto LABEL_59;
                v38 = this->fields.targetFps;
                v39 = v38 * this->fields.progressDeltaTime;
                v40 = (int)v39;
                v41 = v39 == INFINITY;
                v42 = -2147500000.0;
                if ( !v41 )
                  v42 = (float)v40;
                UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)v37, v42 / v38, 0LL);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v37, 1, 0LL);
                UnityEngine_Animation__Sample(v35, 0LL);
                UnityEngine_AnimationState__set_enabled((UnityEngine_AnimationState_o *)v37, 0, 0LL);
              }
              v31 = this->fields.targetAnimations;
              if ( !v31 )
LABEL_59:
                sub_1BC3264(monitor, v7);
              LODWORD(v32) = v31->max_length;
              if ( (int)++v33 >= (int)v32 )
                return;
            }
LABEL_60:
            sub_1BC326C(monitor, v7, v8);
          }
        }
      }
    }
  }
}


void __fastcall BattleEffectForceFPS__Start(BattleEffectForceFPS_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SimpleAnimation_array *targetSimpleAnimations; // x8
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_Animation_array *targetAnimations; // x8
  System_Object_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B04853 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_Animation____76831752, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____76831800, v3);
    byte_4B04853 = 1;
  }
  targetSimpleAnimations = this->fields.targetSimpleAnimations;
  if ( !targetSimpleAnimations || !*(_QWORD *)&targetSimpleAnimations->max_length )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation____76831800);
    this->fields.targetSimpleAnimations = (struct SimpleAnimation_array *)ComponentsInChildren_object;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.targetSimpleAnimations,
      (int32_t)ComponentsInChildren_object,
      v6,
      v7);
  }
  targetAnimations = this->fields.targetAnimations;
  if ( !targetAnimations || !*(_QWORD *)&targetAnimations->max_length )
  {
    v9 = UnityEngine_Component__GetComponentsInChildren_object_(
           (UnityEngine_Component_o *)this,
           1,
           (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation____76831752);
    this->fields.targetAnimations = (struct UnityEngine_Animation_array *)v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetAnimations, (int32_t)v9, v10, v11);
  }
}