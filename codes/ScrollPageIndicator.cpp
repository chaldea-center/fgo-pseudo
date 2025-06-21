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
  struct UISprite_array **p_Indicator; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  __int64 v22; // x1
  float y; // s8
  int v24; // s2
  float v25; // s0
  float v26; // s1
  int v27; // w27
  unsigned __int64 v28; // x26
  __int64 v29; // x28
  __int64 v30; // x29
  __int64 v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v35; // x23
  unsigned __int64 v36; // x21
  System_String_o *v37; // x0
  UnityEngine_Transform_o *v38; // x24
  UnityEngine_Transform_o *v39; // x24
  __int64 v40; // x2
  const MethodInfo *v41; // x3
  unsigned int *v42; // x25
  UISprite_o *v43; // x24
  __int64 v44; // x8
  int32_t layer; // w24
  CGThumbnailListItem_o *v46; // x23
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  EventDelegate_Callback_o *v49; // x24
  EventDelegate_o *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  __int64 v57; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v59; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1B196 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1BCAFF8(&NGUITools_TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v12);
    sub_1BCAFF8(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v13);
    sub_1BCAFF8(&UISprite___TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_20587/*"indicator"*/, v15);
    byte_4B1B196 = 1;
  }
  v59 = 0;
  if ( count > 1 )
  {
    v16 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v16;
    p_Indicator = &this->fields.Indicator;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.Indicator, (int32_t)v16, v18, v19);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Component_object )
    {
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0LL);
      y = localPosition.fields.y;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( Component_object )
      {
        *(UnityEngine_Vector3_o *)(&v24 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)Component_object,
                                                 0LL);
        if ( transform )
        {
          v25 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v26 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v24 - 2), 0LL);
          v27 = 0;
          v28 = 0LL;
          v29 = (unsigned int)count;
          v30 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v31 = sub_1BCB244(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v31, 0LL);
            if ( !v31 )
              break;
            *(_QWORD *)(v31 + 24) = this;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 24), (int32_t)this, v32, v33);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v35 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v36 = v28 + 1;
            v59 = v28 + 1;
            v37 = System_Int32__ToString((int32_t)&v59, 0LL);
            Component_object = (__int64)System_String__Concat_62450424((System_String_o *)StringLiteral_20587/*"indicator"*/, v37, 0LL);
            if ( !v35 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v35, (System_String_o *)Component_object, 0LL);
            v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0LL);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v38 )
              break;
            UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)Component_object, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0LL);
            if ( !Component_object )
              break;
            v61.fields.x = (float)v27;
            v61.fields.y = 0.0;
            v61.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v61, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0LL);
            v39 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4B16196 )
            {
              Component_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v22);
              byte_4B16196 = 1;
            }
            if ( !v39 )
              break;
            UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v35,
                                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v42 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v43 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1BCB134(Component_object, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
              if ( !Component_object )
              {
                v57 = sub_1BCB278(0LL);
                sub_1BCB120(v57, 0LL);
              }
            }
            if ( v28 >= v42[6] )
              sub_1BCB25C(Component_object, v22, v40);
            *(_QWORD *)&v42[2 * v28 + 8] = v43;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v42[v30], (int32_t)v43, v40, v41);
            if ( !v43 )
              break;
            UISprite__set_atlas(v43, this->fields.IndicatorAtlas, 0LL);
            v44 = 64LL;
            if ( !v28 )
              v44 = 56LL;
            UISprite__set_spriteName(v43, *(System_String_o **)((char *)&this->klass + v44), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v43->klass->vtable._33_MakePixelPerfect.method)(
              v43,
              v43->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v35, layer, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v35,
                                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v46 = (CGThumbnailListItem_o *)Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0LL,
              0LL,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            v46->fields.sortValue0 = 0LL;
            v46 = (CGThumbnailListItem_o *)((char *)v46 + 32);
            sub_1BCAF9C(v46, 0, v47, v48);
            *(_DWORD *)(v31 + 16) = v28;
            v49 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v49,
              (Il2CppObject *)v31,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v50 = (EventDelegate_o *)sub_1BCB244(EventDelegate_TypeInfo);
            EventDelegate___ctor_48466744(v50, v49, 0LL);
            Component_object = v46[1].fields.sortValue0;
            if ( !Component_object )
              break;
            v53 = *(_QWORD *)(Component_object + 16);
            v54 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v53 )
              break;
            v55 = *(int *)(Component_object + 24);
            if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v50,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            }
            else
            {
              v56 = v53 + 8 * v55;
              *(_DWORD *)(Component_object + 24) = v55 + 1;
              *(_QWORD *)(v56 + 32) = v50;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v56 + 32), (int32_t)v50, v51, v52);
            }
            v30 += 2LL;
            ++v28;
            v27 += IndicatorStep;
            if ( v29 == v36 )
              return;
          }
        }
      }
    }
    sub_1BCB254(Component_object, v22);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void __fastcall ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ScrollPageIndicator_o *v4; // x19
  CGThumbnailListItem_o *p_Indicator; // x19
  struct UISprite_array *v6; // x21
  struct UISprite_array *Indicator; // t1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_4B1B195 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B195 = 1;
  }
  Indicator = v4->fields.Indicator;
  p_Indicator = (CGThumbnailListItem_o *)&v4->fields.Indicator;
  v6 = Indicator;
  if ( Indicator )
  {
    v8 = *(_QWORD *)&v6->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1BCB25C(this, method, v2);
        v10 = (UnityEngine_Object_o *)v6->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_1BCB254(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v10,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
        }
        LODWORD(v8) = v6->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
    }
    p_Indicator->klass = 0LL;
    sub_1BCAF9C(p_Indicator, 0, v2, v3);
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
      sub_1BCB254(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1BCB25C(this, *(_QWORD *)&idx, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1477C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A14734;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = pageIndex;
  if ( (byte_4B1B197 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&pageIndex);
    byte_4B1B197 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__Invoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    pageIndex,
    *(_QWORD *)&this->fields.extra_arg);
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
  struct ScrollPageIndicator_o *_4__this; // x8
  struct ScrollPageIndicator_OnPageChangeCallback_o *onPageChange; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}