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
  UnityEngine_Transform_o *Component_srcLineSprite; // x0
  float y; // s8
  int v26; // s2
  float v27; // s0
  float v28; // s1
  __int64 v29; // x1
  __int64 v30; // x2
  int v31; // w25
  unsigned __int64 v32; // x24
  signed __int64 v33; // x26
  __int64 v34; // x27
  __int64 v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UnityEngine_GameObject_o *PageIndicatorPrefab; // x22
  UnityEngine_Object_o *v43; // x22
  signed __int64 v44; // x28
  System_String_o *v45; // x0
  UnityEngine_Transform_o *v46; // x23
  UnityEngine_Transform_o *v47; // x23
  int v48; // s0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  unsigned int *v57; // x20
  System_Int32_array **v58; // x23
  __int64 v59; // x8
  int32_t layer; // w23
  BattleServantConfConponent_o *v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  EventDelegate_Callback_o *v70; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  EventDelegate_o *v73; // x21
  __int64 v74; // x0
  __int64 v75; // x0
  struct UISprite_array **p_Indicator; // [xsp+8h] [xbp-68h]
  int32_t IndicatorStep; // [xsp+18h] [xbp-58h]
  int v78; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219DF8 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count);
    sub_B0D8A4(&EventDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B0D8A4(&NGUITools_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v12);
    sub_B0D8A4(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v13);
    sub_B0D8A4(&UISprite___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_19857/*"indicator"*/, v15);
    byte_4219DF8 = 1;
  }
  v78 = 0;
  if ( count > 1 )
  {
    v16 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v16;
    p_Indicator = &this->fields.Indicator;
    sub_B0D840(
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
    Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Component_srcLineSprite )
    {
      localPosition = UnityEngine_Transform__get_localPosition(Component_srcLineSprite, 0LL);
      y = localPosition.fields.y;
      Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( Component_srcLineSprite )
      {
        *(UnityEngine_Vector3_o *)(&v26 - 2) = UnityEngine_Transform__get_localPosition(Component_srcLineSprite, 0LL);
        if ( transform )
        {
          v27 = (float)((1 - count) * IndicatorStep) * 0.5;
          v28 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v26 - 2), 0LL);
          v31 = 0;
          v32 = 0LL;
          v33 = count;
          v34 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v35 = sub_B0D974(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v29, v30);
            ScrollPageIndicator___c__DisplayClass10_0___ctor((ScrollPageIndicator___c__DisplayClass10_0_o *)v35, 0LL);
            if ( !v35 )
              break;
            *(_QWORD *)(v35 + 24) = this;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v35 + 24),
              (System_Int32_array **)this,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            PageIndicatorPrefab = this->fields.PageIndicatorPrefab;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v43 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)PageIndicatorPrefab,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v44 = v32 + 1;
            v78 = v32 + 1;
            v45 = System_Int32__ToString((int32_t)&v78, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)System_String__Concat_43849904(
                                                                   (System_String_o *)StringLiteral_19857/*"indicator"*/,
                                                                   v45,
                                                                   0LL);
            if ( !v43 )
              break;
            UnityEngine_Object__set_name(v43, (System_String_o *)Component_srcLineSprite, 0LL);
            v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v46 )
              break;
            UnityEngine_Transform__set_parent(v46, Component_srcLineSprite, 0LL);
            Component_srcLineSprite = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            if ( !Component_srcLineSprite )
              break;
            v80.fields.x = (float)v31;
            v80.fields.y = 0.0;
            v80.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_srcLineSprite, v80, 0LL);
            v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
            *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
            if ( !v47 )
              break;
            UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v48, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v43,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v57 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v58 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (UnityEngine_Transform_o *)sub_B0D964(
                                                                     Component_srcLineSprite,
                                                                     *(_QWORD *)(*(_QWORD *)v57 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v75 = sub_B0D99C(0LL);
                sub_B0D948(v75, 0LL);
              }
            }
            if ( v32 >= v57[6] )
            {
              v74 = sub_B0D9A8(Component_srcLineSprite);
              sub_B0D948(v74, 0LL);
            }
            *(_QWORD *)&v57[v34] = v58;
            sub_B0D840((BattleServantConfConponent_o *)&v57[v34], v58, v51, v52, v53, v54, v55, v56);
            if ( !v58 )
              break;
            UISprite__set_atlas((UISprite_o *)v58, this->fields.IndicatorAtlas, 0LL);
            v59 = 56LL;
            if ( v34 == 8 )
              v59 = 48LL;
            UISprite__set_spriteName((UISprite_o *)v58, *(System_String_o **)((char *)&this->klass + v59), 0LL);
            (*(void (__fastcall **)(System_Int32_array **, _QWORD))&(*v58)->m_Items[203])(
              v58,
              *(_QWORD *)&(*v58)->m_Items[205]);
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
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v43, layer, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v43,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_srcLineSprite )
              break;
            v61 = (BattleServantConfConponent_o *)Component_srcLineSprite;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, Il2CppClass **))Component_srcLineSprite->klass[1]._1.methods)(
              Component_srcLineSprite,
              0LL,
              0LL,
              Component_srcLineSprite->klass[1]._1.nestedTypes);
            v61->fields._closeBtnObject = 0LL;
            v61 = (BattleServantConfConponent_o *)((char *)v61 + 24);
            sub_B0D840(v61, 0LL, v62, v63, v64, v65, v66, v67);
            *(_DWORD *)(v35 + 16) = v32;
            v70 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v68, v69);
            EventDelegate_Callback___ctor(
              v70,
              (Il2CppObject *)v35,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v73 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v71, v72);
            EventDelegate___ctor_28889248(v73, v70, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)v61->fields.equipPossessionSkillInfoComponentList;
            if ( !Component_srcLineSprite )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
            v34 += 2LL;
            ++v32;
            v31 += IndicatorStep;
            if ( v44 >= v33 )
              return;
          }
        }
      }
    }
    sub_B0D97C(Component_srcLineSprite);
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
  __int64 v16; // x0

  v8 = this;
  if ( (byte_4219DF7 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219DF7 = 1;
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
          v16 = sub_B0D9A8(this);
          sub_B0D948(v16, 0LL);
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
            sub_B0D97C(this);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_B0D840(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


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
      sub_B0D97C(this);
    }
LABEL_16:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_42121FC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&pageIndex);
    byte_42121FC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback__Invoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScrollPageIndicator_OnPageChangeCallback_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ScrollPageIndicator_OnPageChangeCallback_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScrollPageIndicator_OnPageChangeCallback_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&pageIndex, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)pageIndex, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)pageIndex, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
    sub_B0D97C(this);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ScrollPageIndicator_OnPageChangeCallback__Invoke(onPageChange, this->fields.idx, v2);
}