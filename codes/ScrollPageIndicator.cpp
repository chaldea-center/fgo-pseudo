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
  const MethodInfo *v8; // x3
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  __int64 v11; // x1
  float y; // s8
  float v13; // s0
  float v14; // s1
  int v15; // w27
  unsigned __int64 v16; // x26
  __int64 v17; // x28
  __int64 v18; // x29
  __int64 v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v23; // x23
  unsigned __int64 v24; // x21
  System_String_o *v25; // x0
  UnityEngine_Transform_o *v26; // x24
  UnityEngine_Transform_o *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  unsigned int *v30; // x25
  UISprite_o *v31; // x24
  __int64 v32; // x8
  int32_t layer; // w24
  __int64 v34; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  EventDelegate_Callback_o *v37; // x24
  EventDelegate_o *v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  __int64 v45; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v47; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB4EEB & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1C6BA08(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1C6BA08(&UISprite___TypeInfo);
    sub_1C6BA08(&StringLiteral_20838/*"indicator"*/);
    byte_4CB4EEB = 1;
  }
  v47 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1C6BAB0(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Component_object )
    {
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
      y = localPosition.fields.y;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( Component_object )
      {
        v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
        if ( transform )
        {
          v13 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v14 = y;
          UnityEngine_Transform__set_localPosition(transform, v49, 0);
          v15 = 0;
          v16 = 0;
          v17 = (unsigned int)count;
          v18 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v19 = sub_1C6BC54(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v19, 0);
            if ( !v19 )
              break;
            *(_QWORD *)(v19 + 24) = this;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)this, v20, v21);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v23 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v24 = v16 + 1;
            v47 = v16 + 1;
            v25 = System_Int32__ToString((int32_t)&v47, 0);
            Component_object = (__int64)System_String__Concat_63966792((System_String_o *)StringLiteral_20838/*"indicator"*/, v25, 0);
            if ( !v23 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)Component_object, 0);
            v26 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !v26 )
              break;
            UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)Component_object, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0);
            if ( !Component_object )
              break;
            v50.fields.x = (float)v15;
            v50.fields.y = 0.0;
            v50.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v50, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v23, 0);
            v27 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4CAFC0E )
            {
              Component_object = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
              byte_4CAFC0E = 1;
            }
            if ( !v27 )
              break;
            UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v23,
                                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v30 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v31 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1C6BB44(Component_object, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
              if ( !Component_object )
              {
                v45 = sub_1C6BC84(0);
                sub_1C6BB30(v45, 0);
              }
            }
            if ( v16 >= v30[6] )
              sub_1C6BC68(Component_object);
            *(_QWORD *)&v30[2 * v16 + 8] = v31;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v30[v18], (int32_t)v31, v28, v29);
            if ( !v31 )
              break;
            UISprite__set_atlas(v31, this->fields.IndicatorAtlas, 0);
            v32 = 64;
            if ( !v16 )
              v32 = 56;
            UISprite__set_spriteName(v31, *(System_String_o **)((char *)&this->klass + v32), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v31->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v31,
              v31->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v23, layer, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v23,
                                          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v34 = Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0,
              0,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            *(_QWORD *)(v34 + 32) = 0;
            v34 += 32;
            sub_1C6B9AC((CGThumbnailListItem_o *)v34, 0, v35, v36);
            *(_DWORD *)(v19 + 16) = v16;
            v37 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v37,
              (Il2CppObject *)v19,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v38 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
            EventDelegate___ctor_49576072(v38, v37, 0);
            Component_object = *(_QWORD *)(v34 + 168);
            if ( !Component_object )
              break;
            v41 = *(_QWORD *)(Component_object + 16);
            v42 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v41 )
              break;
            v43 = *(int *)(Component_object + 24);
            if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v38,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = v41 + 8 * v43;
              *(_DWORD *)(Component_object + 24) = v43 + 1;
              *(_QWORD *)(v44 + 32) = v38;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v38, v39, v40);
            }
            v18 += 2;
            ++v16;
            v15 += IndicatorStep;
            if ( v17 == v24 )
              return;
          }
        }
      }
    }
    sub_1C6BC60(Component_object, v11);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ScrollPageIndicator_o *v4; // x19
  CGThumbnailListItem_o *p_Indicator; // x19
  struct UISprite_array *v6; // x21
  struct UISprite_array *Indicator; // t1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_4CB4EEA & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4EEA = 1;
  }
  Indicator = v4->fields.Indicator;
  p_Indicator = (CGThumbnailListItem_o *)&v4->fields.Indicator;
  v6 = Indicator;
  if ( Indicator )
  {
    max_length = v6->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C6BC68(this);
        v10 = (UnityEngine_Object_o *)v6->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_1C6BC60(this, v11);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676(gameObject, 0);
        }
        LODWORD(max_length) = v6->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
    p_Indicator->klass = 0;
    sub_1C6B9AC(p_Indicator, 0, v2, v3);
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
      sub_1C6BC60(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1C6BC68(this);
  }
}


void ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA0D9C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0D54;
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
  if ( (byte_4CB4EEC & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB4EEC = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
    sub_1C6BC60(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onPageChange->fields.invoke_impl)(
      onPageChange->fields.method_code,
      (unsigned int)this->fields.idx,
      onPageChange->fields.method);
}