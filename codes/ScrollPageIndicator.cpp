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
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *Component_srcLineSprite; // x0
  __int64 v14; // x1
  float y; // s8
  int v16; // s2
  float v17; // s0
  float v18; // s1
  int v19; // w25
  unsigned __int64 v20; // x24
  signed __int64 v21; // x26
  __int64 v22; // x27
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_GameObject_o *PageIndicatorPrefab; // x22
  UnityEngine_Object_o *v31; // x22
  signed __int64 v32; // x28
  System_String_o *v33; // x0
  UnityEngine_Transform_o *v34; // x23
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  unsigned int *v45; // x20
  System_Int32_array **v46; // x23
  __int64 v47; // x8
  int32_t layer; // w23
  BattleServantConfConponent_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  EventDelegate_Callback_o *v56; // x23
  EventDelegate_o *v57; // x21
  __int64 v58; // x0
  __int64 v59; // x0
  struct UISprite_array **p_Indicator; // [xsp+8h] [xbp-68h]
  int32_t IndicatorStep; // [xsp+18h] [xbp-58h]
  int v62; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B59F2 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_B52984(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_B52984(&UISprite___TypeInfo);
    sub_B52984(&StringLiteral_19944/*"indicator"*/);
    byte_42B59F2 = 1;
  }
  v62 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_B5299C(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.Indicator,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
        *(UnityEngine_Vector3_o *)(&v16 - 2) = UnityEngine_Transform__get_localPosition(Component_srcLineSprite, 0LL);
        if ( transform )
        {
          v17 = (float)((1 - count) * IndicatorStep) * 0.5;
          v18 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v16 - 2), 0LL);
          v19 = 0;
          v20 = 0LL;
          v21 = count;
          v22 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v23 = sub_B52A54(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            ScrollPageIndicator___c__DisplayClass10_0___ctor((ScrollPageIndicator___c__DisplayClass10_0_o *)v23, 0LL);
            if ( !v23 )
              break;
            *(_QWORD *)(v23 + 24) = this;
            sub_B52920(
              (BattleServantConfConponent_o *)(v23 + 24),
              (System_Int32_array **)this,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            PageIndicatorPrefab = this->fields.PageIndicatorPrefab;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v31 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)PageIndicatorPrefab,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v32 = v20 + 1;
            v62 = v20 + 1;
            v33 = System_Int32__ToString((int32_t)&v62, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)System_String__Concat_44568316(
                                                                   (System_String_o *)StringLiteral_19944/*"indicator"*/,
                                                                   v33,
                                                                   0LL);
            if ( !v31 )
              break;
            UnityEngine_Object__set_name(v31, (System_String_o *)Component_srcLineSprite, 0LL);
            v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
            Component_srcLineSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v34 )
              break;
            UnityEngine_Transform__set_parent(v34, Component_srcLineSprite, 0LL);
            Component_srcLineSprite = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
            if ( !Component_srcLineSprite )
              break;
            v64.fields.x = (float)v19;
            v64.fields.y = 0.0;
            v64.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_srcLineSprite, v64, 0LL);
            v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
            *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
            if ( !v35 )
              break;
            UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v31,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v45 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v46 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (UnityEngine_Transform_o *)sub_B52A44(
                                                                     Component_srcLineSprite,
                                                                     *(_QWORD *)(*(_QWORD *)v45 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v59 = sub_B52A7C(0LL);
                sub_B52A28(v59, 0LL);
              }
            }
            if ( v20 >= v45[6] )
            {
              v58 = sub_B52A88(Component_srcLineSprite);
              sub_B52A28(v58, 0LL);
            }
            *(_QWORD *)&v45[v22] = v46;
            sub_B52920((BattleServantConfConponent_o *)&v45[v22], v46, v39, v40, v41, v42, v43, v44);
            if ( !v46 )
              break;
            UISprite__set_atlas((UISprite_o *)v46, this->fields.IndicatorAtlas, 0LL);
            v47 = 56LL;
            if ( v22 == 8 )
              v47 = 48LL;
            UISprite__set_spriteName((UISprite_o *)v46, *(System_String_o **)((char *)&this->klass + v47), 0LL);
            (*(void (__fastcall **)(System_Int32_array **, _QWORD))&(*v46)->m_Items[203])(
              v46,
              *(_QWORD *)&(*v46)->m_Items[205]);
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
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v31, layer, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v31,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_srcLineSprite )
              break;
            v49 = (BattleServantConfConponent_o *)Component_srcLineSprite;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, Il2CppClass **))Component_srcLineSprite->klass[1]._1.methods)(
              Component_srcLineSprite,
              0LL,
              0LL,
              Component_srcLineSprite->klass[1]._1.nestedTypes);
            v49->fields._closeBtnObject = 0LL;
            v49 = (BattleServantConfConponent_o *)((char *)v49 + 24);
            sub_B52920(v49, 0LL, v50, v51, v52, v53, v54, v55);
            *(_DWORD *)(v23 + 16) = v20;
            v56 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v56,
              (Il2CppObject *)v23,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v57 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
            EventDelegate___ctor_29649660(v57, v56, 0LL);
            Component_srcLineSprite = (UnityEngine_Transform_o *)v49->fields.equipPossessionSkillInfoComponentList;
            if ( !Component_srcLineSprite )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
            v22 += 2LL;
            ++v20;
            v19 += IndicatorStep;
            if ( v32 >= v21 )
              return;
          }
        }
      }
    }
    sub_B52A5C(Component_srcLineSprite, v14);
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
  if ( (byte_42B59F1 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B59F1 = 1;
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
          v17 = sub_B52A88(this);
          sub_B52A28(v17, 0LL);
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
            sub_B52A5C(this, v15);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_B52920(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B52A5C(this, *(_QWORD *)&idx);
    }
LABEL_16:
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD30D & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD30D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ScrollPageIndicator_OnPageChangeCallback_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ScrollPageIndicator_OnPageChangeCallback_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&pageIndex, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)pageIndex, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, (unsigned int)pageIndex, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)pageIndex, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)pageIndex,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)pageIndex, v22);
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
    sub_B52A5C(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ScrollPageIndicator_OnPageChangeCallback__Invoke(onPageChange, this->fields.idx, v2);
}