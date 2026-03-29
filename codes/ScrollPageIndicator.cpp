void ScrollPageIndicator___ctor(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  this->fields.IndicatorStep = 48;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrollPageIndicator__CreateIndicator(ScrollPageIndicator_o *this, int32_t count, const MethodInfo *method)
{
  struct UISprite_array *v5; // x0
  struct UISprite_array **p_Indicator; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  __int64 v15; // x1
  float y; // s8
  int v17; // w27
  unsigned __int64 v18; // x26
  __int64 v19; // x28
  __int64 v20; // x29
  __int64 v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v29; // x23
  unsigned __int64 v30; // x21
  System_String_o *v31; // x0
  UnityEngine_Transform_o *v32; // x24
  UnityEngine_Transform_o *v33; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  unsigned int *v40; // x25
  UISprite_o *v41; // x24
  __int64 v42; // x8
  int32_t layer; // w24
  GrandQuestFolderBoardItem_o *v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  EventDelegate_Callback_o *v51; // x24
  EventDelegate_o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  __int64 v63; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v65; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2F61E & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1C93AD4(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1C93AD4(&UISprite___TypeInfo);
    sub_1C93AD4(&StringLiteral_21007/*"indicator"*/);
    byte_4D2F61E = 1;
  }
  v65 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1C93B7C(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Component_object )
    {
      y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0).fields.y;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( Component_object )
      {
        v67.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0).fields.z;
        if ( transform )
        {
          v67.fields.x = (float)(IndicatorStep * (1 - count)) * 0.5;
          v67.fields.y = y;
          UnityEngine_Transform__set_localPosition(transform, v67, 0);
          v17 = 0;
          v18 = 0;
          v19 = (unsigned int)count;
          v20 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v21 = sub_1C93D20(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v21, 0);
            if ( !v21 )
              break;
            *(_QWORD *)(v21 + 24) = this;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v29 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v30 = v18 + 1;
            v65 = v18 + 1;
            v31 = System_Int32__ToString((int32_t)&v65, 0);
            Component_object = (__int64)System_String__Concat_64425724((System_String_o *)StringLiteral_21007/*"indicator"*/, v31, 0);
            if ( !v29 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v29, (System_String_o *)Component_object, 0);
            v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !v32 )
              break;
            UnityEngine_Transform__set_parent(v32, (UnityEngine_Transform_o *)Component_object, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
            if ( !Component_object )
              break;
            v66.fields.x = (float)v17;
            v66.fields.y = 0.0;
            v66.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v66, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0);
            v33 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4D2A13E )
            {
              Component_object = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
              byte_4D2A13E = 1;
            }
            if ( !v33 )
              break;
            UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v29,
                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v40 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v41 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1C93C10(Component_object, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
              if ( !Component_object )
              {
                v63 = sub_1C93D50(0);
                sub_1C93BFC(v63, 0);
              }
            }
            if ( v18 >= v40[6] )
              sub_1C93D34(Component_object);
            *(_QWORD *)&v40[2 * v18 + 8] = v41;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40[v20], (int32_t)v41, v34, v35, v36, v37, v38, v39);
            if ( !v41 )
              break;
            UISprite__set_atlas(v41, this->fields.IndicatorAtlas, 0);
            v42 = 64;
            if ( !v18 )
              v42 = 56;
            UISprite__set_spriteName(v41, *(System_String_o **)((char *)&this->klass + v42), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v41->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v41,
              v41->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v29, layer, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v29,
                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v44 = (GrandQuestFolderBoardItem_o *)Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0,
              0,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            v44->fields.sortValue0 = 0;
            v44 = (GrandQuestFolderBoardItem_o *)((char *)v44 + 32);
            sub_1C93A78(v44, 0, v45, v46, v47, v48, v49, v50);
            *(_DWORD *)(v21 + 16) = v18;
            v51 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v51,
              (Il2CppObject *)v21,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v52 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
            EventDelegate___ctor_49997180(v52, v51, 0);
            Component_object = (__int64)v44[1].monitor;
            if ( !Component_object )
              break;
            v59 = *(_QWORD *)(Component_object + 16);
            v60 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v59 )
              break;
            v61 = *(int *)(Component_object + 24);
            if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v52,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = v59 + 8 * v61;
              *(_DWORD *)(Component_object + 24) = v61 + 1;
              *(_QWORD *)(v62 + 32) = v52;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v62 + 32), (int32_t)v52, v53, v54, v55, v56, v57, v58);
            }
            v20 += 2;
            ++v18;
            v17 += IndicatorStep;
            if ( v19 == v30 )
              return;
          }
        }
      }
    }
    sub_1C93D2C(Component_object, v15);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScrollPageIndicator_o *v8; // x19
  GrandQuestFolderBoardItem_o *p_Indicator; // x19
  struct UISprite_array *v10; // x21
  struct UISprite_array *Indicator; // t1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4D2F61D & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F61D = 1;
  }
  Indicator = v8->fields.Indicator;
  p_Indicator = (GrandQuestFolderBoardItem_o *)&v8->fields.Indicator;
  v10 = Indicator;
  if ( Indicator )
  {
    max_length = v10->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C93D34(this);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_1C93D2C(this, v15);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_72119908(gameObject, 0);
        }
        LODWORD(max_length) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
    }
    p_Indicator->klass = 0;
    sub_1C93A78(p_Indicator, 0, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrollPageIndicator__UpdateIndicator(ScrollPageIndicator_o *this, int32_t idx, const MethodInfo *method)
{
  struct UISprite_array *Indicator; // x8
  __int64 nowIndex; // x9
  ScrollPageIndicator_o *v5; // x19
  int max_length; // w10
  struct UISprite_array *v8; // x8
  int32_t v9; // w9

  Indicator = this->fields.Indicator;
  if ( Indicator )
  {
    nowIndex = (unsigned int)this->fields.nowIndex;
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
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OffIndicatorSpriteName, 0);
      }
    }
    if ( idx < 0 )
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
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.OnIndicatorSpriteName, 0);
        goto LABEL_13;
      }
LABEL_15:
      sub_1C93D2C(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1C93D34(this);
  }
}


void ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC7E74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC7E2C;
}


System_IAsyncResult_o *ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = pageIndex;
  if ( (byte_4D2F61F & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D2F61F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ScrollPageIndicator_OnPageChangeCallback__Invoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    pageIndex,
    this->fields.method);
}


void ScrollPageIndicator___c__DisplayClass10_0___ctor(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrollPageIndicator___c__DisplayClass10_0___CreateIndicator_b__0(
        ScrollPageIndicator___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct ScrollPageIndicator_o *_4__this; // x8
  struct ScrollPageIndicator_OnPageChangeCallback_o *onPageChange; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onPageChange->fields.invoke_impl)(
      onPageChange->fields.method_code,
      (unsigned int)this->fields.idx,
      onPageChange->fields.method);
}