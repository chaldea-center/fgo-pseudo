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
  UnityEngine_Transform_o *Component_object; // x0
  float y; // s8
  float v12; // s0
  float v13; // s1
  int v14; // w27
  unsigned __int64 v15; // x26
  __int64 v16; // x28
  __int64 v17; // x29
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v22; // x23
  unsigned __int64 v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Transform_o *v25; // x24
  UnityEngine_Transform_o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  unsigned int *v29; // x25
  UISprite_o *v30; // x24
  __int64 v31; // x8
  int32_t layer; // w24
  UnityEngine_Transform_o *v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  EventDelegate_Callback_o *v36; // x24
  EventDelegate_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v41; // x9
  __int64 klass_low; // x10
  intptr_t v43; // x8
  __int64 v44; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v46; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C41BEC & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1C37058(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1C37058(&UISprite___TypeInfo);
    sub_1C37058(&StringLiteral_20774/*"indicator"*/);
    byte_4C41BEC = 1;
  }
  v46 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1C37100(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Component_object )
    {
      localPosition = UnityEngine_Transform__get_localPosition(Component_object, 0);
      y = localPosition.fields.y;
      Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( Component_object )
      {
        v48 = UnityEngine_Transform__get_localPosition(Component_object, 0);
        if ( transform )
        {
          v12 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v13 = y;
          UnityEngine_Transform__set_localPosition(transform, v48, 0);
          v14 = 0;
          v15 = 0;
          v16 = (unsigned int)count;
          v17 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v18 = sub_1C372A4(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v18, 0);
            if ( !v18 )
              break;
            *(_QWORD *)(v18 + 24) = this;
            sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)this, v19, v20);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v22 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v23 = v15 + 1;
            v46 = v15 + 1;
            v24 = System_Int32__ToString((int32_t)&v46, 0);
            Component_object = (UnityEngine_Transform_o *)System_String__Concat_63561656(
                                                            (System_String_o *)StringLiteral_20774/*"indicator"*/,
                                                            v24,
                                                            0);
            if ( !v22 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)Component_object, 0);
            v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0);
            Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !v25 )
              break;
            UnityEngine_Transform__set_parent(v25, Component_object, 0);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0);
            if ( !Component_object )
              break;
            v49.fields.x = (float)v14;
            v49.fields.y = 0.0;
            v49.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_object, v49, 0);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0);
            v26 = Component_object;
            if ( !byte_4C3C926 )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
              byte_4C3C926 = 1;
            }
            if ( !v26 )
              break;
            UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v22,
                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v29 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v30 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1C37194(
                                                              Component_object,
                                                              *(_QWORD *)(*(_QWORD *)v29 + 64LL));
              if ( !Component_object )
              {
                v44 = sub_1C372D8(0);
                sub_1C37180(v44, 0);
              }
            }
            if ( v15 >= v29[6] )
              sub_1C372BC(Component_object);
            *(_QWORD *)&v29[2 * v15 + 8] = v30;
            sub_1C36FFC((CGThumbnailListItem_o *)&v29[v17], (int32_t)v30, v27, v28);
            if ( !v30 )
              break;
            UISprite__set_atlas(v30, this->fields.IndicatorAtlas, 0);
            v31 = 64;
            if ( !v15 )
              v31 = 56;
            UISprite__set_spriteName(v30, *(System_String_o **)((char *)&this->klass + v31), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v30->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v30,
              v30->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v22, layer, 0);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v22,
                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v33 = Component_object;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, void *))Component_object->klass[1]._1.properties)(
              Component_object,
              0,
              0,
              Component_object->klass[1]._1.methods);
            v33[1].monitor = 0;
            v33 = (UnityEngine_Transform_o *)((char *)v33 + 32);
            sub_1C36FFC((CGThumbnailListItem_o *)v33, 0, v34, v35);
            *(_DWORD *)(v18 + 16) = v15;
            v36 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v36,
              (Il2CppObject *)v18,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v37 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
            EventDelegate___ctor_49273948(v37, v36, 0);
            Component_object = (UnityEngine_Transform_o *)v33[7].klass;
            if ( !Component_object )
              break;
            m_CachedPtr = Component_object->fields.m_CachedPtr;
            v41 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++HIDWORD(Component_object[1].klass);
            if ( !m_CachedPtr )
              break;
            klass_low = SLODWORD(Component_object[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v37,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = m_CachedPtr + 8 * klass_low;
              LODWORD(Component_object[1].klass) = klass_low + 1;
              *(_QWORD *)(v43 + 32) = v37;
              sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v37, v38, v39);
            }
            v17 += 2;
            ++v15;
            v14 += IndicatorStep;
            if ( v16 == v23 )
              return;
          }
        }
      }
    }
    sub_1C372B4(Component_object);
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
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_4C41BEB & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41BEB = 1;
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
          sub_1C372BC(this);
        v10 = (UnityEngine_Object_o *)v6->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_1C372B4(this);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752(gameObject, 0);
        }
        LODWORD(max_length) = v6->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
    p_Indicator->klass = 0;
    sub_1C36FFC(p_Indicator, 0, v2, v3);
  }
}


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
      sub_1C372B4(this);
    }
LABEL_16:
    sub_1C372BC(this);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7AAFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7AAB4;
}


System_IAsyncResult_o *ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = pageIndex;
  if ( (byte_4C41BED & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C41BED = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
    sub_1C372B4(this);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onPageChange->fields.invoke_impl)(
      onPageChange->fields.method_code,
      (unsigned int)this->fields.idx,
      onPageChange->fields.method);
}