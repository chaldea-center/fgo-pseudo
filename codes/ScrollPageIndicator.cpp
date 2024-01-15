void __fastcall ScrollPageIndicator___ctor(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  this->fields.IndicatorStep = 48;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator__CreateIndicator(
        ScrollPageIndicator_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UISprite_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *v24; // x0
  float y; // s8
  UnityEngine_Transform_o *v26; // x0
  int v27; // s2
  float v28; // s0
  float v29; // s1
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int v34; // w25
  unsigned __int64 v35; // x24
  signed __int64 v36; // x26
  __int64 v37; // x27
  __int64 v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_GameObject_o *PageIndicatorPrefab; // x22
  UnityEngine_Object_o *v46; // x22
  signed __int64 v47; // x28
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  UnityEngine_Transform_o *v50; // x23
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_Transform_o *v53; // x23
  int v54; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  unsigned int *v65; // x20
  System_Int32_array **v66; // x23
  __int64 v67; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w23
  srcLineSprite_o *v70; // x0
  BattleServantConfConponent_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  EventDelegate_Callback_o *v82; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  EventDelegate_o *v87; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *havenotTdLabel; // x0
  struct UISprite_array **p_Indicator; // [xsp+8h] [xbp-68h]
  int32_t IndicatorStep; // [xsp+18h] [xbp-58h]
  int v91; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE16D & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&EventDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B16FFC(&NGUITools_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v12);
    sub_B16FFC(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v13);
    sub_B16FFC(&UISprite___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_19721/*"indicator"*/, v15);
    byte_40FE16D = 1;
  }
  v91 = 0;
  if ( count > 1 )
  {
    v16 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, (unsigned int)count, method);
    this->fields.Indicator = v16;
    p_Indicator = &this->fields.Indicator;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.Indicator,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v24 )
    {
      localPosition = UnityEngine_Transform__get_localPosition(v24, 0LL);
      y = localPosition.fields.y;
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( v26 )
      {
        *(UnityEngine_Vector3_o *)(&v27 - 2) = UnityEngine_Transform__get_localPosition(v26, 0LL);
        if ( transform )
        {
          v28 = (float)((1 - count) * IndicatorStep) * 0.5;
          v29 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v27 - 2), 0LL);
          v34 = 0;
          v35 = 0LL;
          v36 = count;
          v37 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v38 = sub_B170CC(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v30, v31, v32, v33);
            ScrollPageIndicator___c__DisplayClass10_0___ctor((ScrollPageIndicator___c__DisplayClass10_0_o *)v38, 0LL);
            if ( !v38 )
              break;
            *(_QWORD *)(v38 + 24) = this;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v38 + 24),
              (System_Int32_array **)this,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            PageIndicatorPrefab = this->fields.PageIndicatorPrefab;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v46 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)PageIndicatorPrefab,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v47 = v35 + 1;
            v91 = v35 + 1;
            v48 = System_Int32__ToString((int32_t)&v91, 0LL);
            v49 = System_String__Concat_43743732((System_String_o *)StringLiteral_19721/*"indicator"*/, v48, 0LL);
            if ( !v46 )
              break;
            UnityEngine_Object__set_name(v46, v49, 0LL);
            v50 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
            v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v50 )
              break;
            UnityEngine_Transform__set_parent(v50, v51, 0LL);
            v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
            if ( !v52 )
              break;
            v93.fields.x = (float)v34;
            v93.fields.y = 0.0;
            v93.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(v52, v93, 0LL);
            v53 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
            *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_one(0LL);
            if ( !v53 )
              break;
            UnityEngine_Transform__set_localScale(v53, *(UnityEngine_Vector3_o *)&v54, 0LL);
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v46,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v65 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v66 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (srcLineSprite_o *)sub_B170BC(
                                                             Component_srcLineSprite,
                                                             *(_QWORD *)(*(_QWORD *)v65 + 64LL));
              if ( !Component_srcLineSprite )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
            }
            if ( v35 >= v65[6] )
            {
              sub_B17100(Component_srcLineSprite, v58, v59);
              sub_B170A0();
            }
            *(_QWORD *)&v65[v37] = v66;
            sub_B16F98((BattleServantConfConponent_o *)&v65[v37], v66, v59, v60, v61, v62, v63, v64);
            if ( !v66 )
              break;
            UISprite__set_atlas((UISprite_o *)v66, this->fields.IndicatorAtlas, 0LL);
            v67 = 56LL;
            if ( v37 == 8 )
              v67 = 48LL;
            UISprite__set_spriteName((UISprite_o *)v66, *(System_String_o **)((char *)&this->klass + v67), 0LL);
            (*(void (__fastcall **)(System_Int32_array **, _QWORD))&(*v66)->m_Items[203])(
              v66,
              *(_QWORD *)&(*v66)->m_Items[205]);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !gameObject )
              break;
            layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v46, layer, 0LL);
            v70 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)v46,
                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !v70 )
              break;
            v71 = (BattleServantConfConponent_o *)v70;
            ((void (__fastcall *)(srcLineSprite_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v70->klass[1]._1.implementedInterfaces)(
              v70,
              0LL,
              0LL,
              v70->klass[1]._1.interfaceOffsets);
            v71->fields._closeBtnObject = 0LL;
            v71 = (BattleServantConfConponent_o *)((char *)v71 + 24);
            sub_B16F98(v71, 0LL, v72, v73, v74, v75, v76, v77);
            *(_DWORD *)(v38 + 16) = v35;
            v82 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v78, v79, v80, v81);
            EventDelegate_Callback___ctor(
              v82,
              (Il2CppObject *)v38,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v87 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v83, v84, v85, v86);
            EventDelegate___ctor_29412484(v87, v82, 0LL);
            havenotTdLabel = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v71->fields.havenotTdLabel;
            if ( !havenotTdLabel )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              havenotTdLabel,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
            v37 += 2LL;
            ++v35;
            v34 += IndicatorStep;
            if ( v47 >= v36 )
              return;
          }
        }
      }
    }
    sub_B170D4();
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void __fastcall ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ScrollPageIndicator_o *v8; // x19
  BattleServantConfConponent_o *p_Indicator; // x19
  struct UISprite_array *v10; // x21
  struct UISprite_array *Indicator; // t1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_40FE16C & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE16C = 1;
  }
  Indicator = v8->fields.Indicator;
  p_Indicator = (BattleServantConfConponent_o *)&v8->fields.Indicator;
  v10 = Indicator;
  if ( Indicator )
  {
    v12 = *(_QWORD *)&v10->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)v12 )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_B170D4();
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_B16F98(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator__UpdateIndicator(
        ScrollPageIndicator_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UISprite_array *Indicator; // x8
  __int64 nowIndex; // x9
  int max_length; // w10
  UISprite_o *v8; // x0
  struct UISprite_array *v9; // x8
  int32_t v10; // w9
  UISprite_o *v11; // x0

  Indicator = this->fields.Indicator;
  if ( Indicator )
  {
    nowIndex = this->fields.nowIndex;
    if ( (nowIndex & 0x80000000) == 0 )
    {
      max_length = Indicator->max_length;
      if ( (int)nowIndex < max_length )
      {
        if ( (unsigned int)nowIndex >= max_length )
          goto LABEL_16;
        v8 = Indicator->m_Items[nowIndex];
        if ( !v8 )
          goto LABEL_15;
        UISprite__set_spriteName(v8, this->fields.OffIndicatorSpriteName, 0LL);
      }
    }
    if ( (idx & 0x80000000) != 0 )
      goto LABEL_13;
    v9 = this->fields.Indicator;
    if ( !v9 )
      goto LABEL_15;
    v10 = v9->max_length;
    if ( v10 <= idx )
    {
LABEL_13:
      this->fields.nowIndex = idx;
      return;
    }
    if ( v10 > (unsigned int)idx )
    {
      v11 = v9->m_Items[idx];
      if ( v11 )
      {
        UISprite__set_spriteName(v11, this->fields.OnIndicatorSpriteName, 0LL);
        goto LABEL_13;
      }
LABEL_15:
      sub_B170D4();
    }
LABEL_16:
    sub_B17100(this, *(_QWORD *)&idx, method);
    sub_B170A0();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = pageIndex;
  if ( (byte_40F75F9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&pageIndex);
    byte_40F75F9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback__Invoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScrollPageIndicator_OnPageChangeCallback_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ScrollPageIndicator_OnPageChangeCallback_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScrollPageIndicator_OnPageChangeCallback_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScrollPageIndicator_OnPageChangeCallback_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&pageIndex, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)pageIndex, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)pageIndex, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)pageIndex, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)pageIndex,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)pageIndex, v20);
    goto LABEL_37;
  }
}


void __fastcall ScrollPageIndicator___c__DisplayClass10_0___ctor(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrollPageIndicator___c__DisplayClass10_0___CreateIndicator_b__0(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ScrollPageIndicator_o *_4__this; // x8
  ScrollPageIndicator_OnPageChangeCallback_o *onPageChange; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ScrollPageIndicator_OnPageChangeCallback__Invoke(onPageChange, this->fields.idx, v2);
}