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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct UISprite_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *Component_srcLineSprite; // x0
  __int64 v48; // x1
  float y; // s8
  int v50; // s2
  float v51; // s0
  float v52; // s1
  int v53; // w25
  unsigned __int64 v54; // x24
  signed __int64 v55; // x26
  __int64 v56; // x27
  __int64 v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UnityEngine_GameObject_o *PageIndicatorPrefab; // x22
  UnityEngine_Object_o *v65; // x22
  signed __int64 v66; // x28
  System_String_o *v67; // x0
  UnityEngine_Transform_o *v68; // x23
  UnityEngine_Transform_o *v69; // x23
  int v70; // s0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  unsigned int *v79; // x20
  System_Int32_array **v80; // x23
  __int64 v81; // x8
  int32_t layer; // w23
  BattleServantConfConponent_o *v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  EventDelegate_Callback_o *v90; // x23
  EventDelegate_o *v91; // x21
  __int64 v92; // x0
  __int64 v93; // x0
  struct UISprite_array **p_Indicator; // [xsp+8h] [xbp-68h]
  int32_t IndicatorStep; // [xsp+18h] [xbp-58h]
  int v96; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE382 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, count, (_DWORD)method, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v15, v16, v17);
    sub_B5D5C4(&NGUITools_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v27, v28, v29);
    sub_B5D5C4(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UISprite___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20046/*"indicator"*/, v36, v37, v38);
    byte_42EE382 = 1;
  }
  v96 = 0;
  if ( count > 1 )
  {
    v39 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v39;
    p_Indicator = &this->fields.Indicator;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.Indicator,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Component_srcLineSprite )
    {
      localPosition = UnityEngine_Transform__get_localPosition(Component_srcLineSprite, 0LL);
      y = localPosition.fields.y;
      Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( Component_srcLineSprite )
      {
        *(UnityEngine_Vector3_o *)(&v50 - 2) = UnityEngine_Transform__get_localPosition(Component_srcLineSprite, 0LL);
        if ( transform )
        {
          v51 = (float)((1 - count) * IndicatorStep) * 0.5;
          v52 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v50 - 2), 0LL);
          v53 = 0;
          v54 = 0LL;
          v55 = count;
          v56 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v57 = sub_B5D694(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            ScrollPageIndicator___c__DisplayClass10_0___ctor((ScrollPageIndicator___c__DisplayClass10_0_o *)v57, 0LL);
            if ( !v57 )
              break;
            *(_QWORD *)(v57 + 24) = this;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v57 + 24),
              (System_Int32_array **)this,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            PageIndicatorPrefab = this->fields.PageIndicatorPrefab;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v65 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)PageIndicatorPrefab,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v66 = v54 + 1;
            v96 = v54 + 1;
            v67 = System_Int32__ToString((int32_t)&v96, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)System_String__Concat_44577788(
                                                                   (System_String_o *)StringLiteral_20046/*"indicator"*/,
                                                                   v67,
                                                                   0LL);
            if ( !v65 )
              break;
            UnityEngine_Object__set_name(v65, (System_String_o *)Component_srcLineSprite, 0LL);
            v68 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v65, 0LL);
            Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v68 )
              break;
            UnityEngine_Transform__set_parent(v68, Component_srcLineSprite, 0LL);
            Component_srcLineSprite = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v65, 0LL);
            if ( !Component_srcLineSprite )
              break;
            v98.fields.x = (float)v53;
            v98.fields.y = 0.0;
            v98.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_srcLineSprite, v98, 0LL);
            v69 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v65, 0LL);
            *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_one(0LL);
            if ( !v69 )
              break;
            UnityEngine_Transform__set_localScale(v69, *(UnityEngine_Vector3_o *)&v70, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v65,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v79 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v80 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (UnityEngine_Transform_o *)sub_B5D684(
                                                                     Component_srcLineSprite,
                                                                     *(_QWORD *)(*(_QWORD *)v79 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v93 = sub_B5D6BC(0LL);
                sub_B5D668(v93, 0LL);
              }
            }
            if ( v54 >= v79[6] )
            {
              v92 = sub_B5D6C8(Component_srcLineSprite);
              sub_B5D668(v92, 0LL);
            }
            *(_QWORD *)&v79[v56] = v80;
            sub_B5D560((BattleServantConfConponent_o *)&v79[v56], v80, v73, v74, v75, v76, v77, v78);
            if ( !v80 )
              break;
            UISprite__set_atlas((UISprite_o *)v80, this->fields.IndicatorAtlas, 0LL);
            v81 = 56LL;
            if ( v56 == 8 )
              v81 = 48LL;
            UISprite__set_spriteName((UISprite_o *)v80, *(System_String_o **)((char *)&this->klass + v81), 0LL);
            (*(void (__fastcall **)(System_Int32_array **, _QWORD))&(*v80)->m_Items[203])(
              v80,
              *(_QWORD *)&(*v80)->m_Items[205]);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
            if ( !Component_srcLineSprite )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_srcLineSprite, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v65, layer, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v65,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_srcLineSprite )
              break;
            v83 = (BattleServantConfConponent_o *)Component_srcLineSprite;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, Il2CppClass **))Component_srcLineSprite->klass[1]._1.methods)(
              Component_srcLineSprite,
              0LL,
              0LL,
              Component_srcLineSprite->klass[1]._1.nestedTypes);
            v83->fields._closeBtnObject = 0LL;
            v83 = (BattleServantConfConponent_o *)((char *)v83 + 24);
            sub_B5D560(v83, 0LL, v84, v85, v86, v87, v88, v89);
            *(_DWORD *)(v57 + 16) = v54;
            v90 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v90,
              (Il2CppObject *)v57,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v91 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
            EventDelegate___ctor_29822308(v91, v90, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)v83->fields.equipPossessionSkillInfoComponentList;
            if ( !Component_srcLineSprite )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
            v56 += 2LL;
            ++v54;
            v53 += IndicatorStep;
            if ( v66 >= v55 )
              return;
          }
        }
      }
    }
    sub_B5D69C(Component_srcLineSprite, v48);
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
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v17; // x0

  v8 = this;
  if ( (byte_42EE381 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EE381 = 1;
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
          v17 = sub_B5D6C8(this);
          sub_B5D668(v17, 0LL);
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
            sub_B5D69C(this, v15);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_B5D560(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
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
  ScrollPageIndicator_o *v5; // x19
  int max_length; // w10
  struct UISprite_array *v8; // x8
  int32_t v9; // w9
  __int64 v10; // x0

  Indicator = this->fields.Indicator;
  if ( Indicator )
  {
    nowIndex = this->fields.nowIndex;
    v5 = this;
    if ( (nowIndex & 0x80000000) == 0 )
    {
      max_length = Indicator->max_length;
      if ( (int)nowIndex < max_length )
      {
        if ( (unsigned int)nowIndex >= max_length )
          goto LABEL_16;
        this = (ScrollPageIndicator_o *)Indicator->m_Items[nowIndex];
        if ( !this )
          goto LABEL_15;
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OffIndicatorSpriteName, 0LL);
      }
    }
    if ( (idx & 0x80000000) != 0 )
      goto LABEL_13;
    v8 = v5->fields.Indicator;
    if ( !v8 )
      goto LABEL_15;
    v9 = v8->max_length;
    if ( v9 <= idx )
    {
LABEL_13:
      v5->fields.nowIndex = idx;
      return;
    }
    if ( v9 > (unsigned int)idx )
    {
      this = (ScrollPageIndicator_o *)v8->m_Items[idx];
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OnIndicatorSpriteName, 0LL);
        goto LABEL_13;
      }
LABEL_15:
      sub_B5D69C(this, *(_QWORD *)&idx);
    }
LABEL_16:
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5D25 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, pageIndex, (_DWORD)callback, object);
    byte_42E5D25 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ScrollPageIndicator_OnPageChangeCallback_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScrollPageIndicator_OnPageChangeCallback_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&pageIndex, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)pageIndex, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)pageIndex, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)pageIndex, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)pageIndex,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)pageIndex, v21);
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
    sub_B5D69C(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ScrollPageIndicator_OnPageChangeCallback__Invoke(onPageChange, this->fields.idx, v2);
}