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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *Component_object; // x0
  __int64 v15; // x1
  float y; // s8
  float v17; // s1
  float v18; // s0
  int v19; // w26
  unsigned __int64 v20; // x21
  __int64 v21; // x29
  __int64 v22; // x28
  __int64 v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v33; // x23
  unsigned __int64 v34; // x27
  System_String_o *v35; // x0
  UnityEngine_Transform_o *v36; // x24
  UnityEngine_Transform_o *v37; // x24
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  unsigned int *v44; // x25
  UISprite_o *v45; // x24
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t layer; // w24
  MissionNaviTransitionBoardItem_o *v51; // x23
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  EventDelegate_Callback_o *v58; // x24
  EventDelegate_o *v59; // x22
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v67; // x9
  __int64 klass_low; // x10
  intptr_t v69; // x8
  __int64 v70; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v72; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F3E2 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_2213A60(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    sub_2213A60(&StringLiteral_21776/*"indicator"*/);
    byte_596F3E2 = 1;
  }
  v72 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8, v9, v10, v11, v12);
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
        v74 = UnityEngine_Transform__get_localPosition(Component_object, 0);
        if ( transform )
        {
          v17 = y;
          v18 = vcvts_n_f32_s32(IndicatorStep - IndicatorStep * count, 1u);
          UnityEngine_Transform__set_localPosition(transform, v74, 0);
          v19 = 0;
          v20 = 0;
          v21 = (unsigned int)count;
          v22 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v23 = sub_2213CCC(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v23, 0);
            if ( !v23 )
              break;
            *(_QWORD *)(v23 + 24) = this;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 24), (int32_t)this, v24, v25, v26, v27, v28, v29);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
            v33 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v34 = v20 + 1;
            v72 = v20 + 1;
            v35 = System_Int32__ToString((int32_t)&v72, 0);
            Component_object = (UnityEngine_Transform_o *)System_String__Concat_75651716(
                                                            (System_String_o *)StringLiteral_21776/*"indicator"*/,
                                                            v35,
                                                            0);
            if ( !v33 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v33, (System_String_o *)Component_object, 0);
            v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0);
            Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !v36 )
              break;
            UnityEngine_Transform__set_parent(v36, Component_object, 0);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0);
            if ( !Component_object )
              break;
            v75.fields.x = (float)v19;
            v75.fields.y = 0.0;
            v75.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_object, v75, 0);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v33, 0);
            v37 = Component_object;
            if ( !byte_5969AE5 )
            {
              Component_object = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( !v37 )
              break;
            UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v33,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v44 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v45 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = (UnityEngine_Transform_o *)sub_2213BB4(
                                                              Component_object,
                                                              *(_QWORD *)(*(_QWORD *)v44 + 64LL));
              if ( !Component_object )
              {
                v70 = sub_2213D00(0, v46);
                sub_2213BA0(v70, 0);
              }
            }
            if ( v20 >= v44[6] )
              sub_2213CE4(Component_object);
            *(_QWORD *)&v44[v22] = v45;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44[v22], (int32_t)v45, v38, v39, v40, v41, v42, v43);
            if ( !v45 )
              break;
            UISprite__set_atlas(v45, this->fields.IndicatorAtlas, 0);
            v47 = 64;
            if ( !v20 )
              v47 = 56;
            UISprite__set_spriteName(v45, *(System_String_o **)((char *)&this->klass + v47), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v45->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v45,
              v45->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v48, v49);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v33, layer, 0);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v33,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v51 = (MissionNaviTransitionBoardItem_o *)Component_object;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, void *))Component_object->klass[1]._1.properties)(
              Component_object,
              0,
              0,
              Component_object->klass[1]._1.methods);
            v51->fields.sortValue0 = 0;
            v51 = (MissionNaviTransitionBoardItem_o *)((char *)v51 + 32);
            sub_2213A04(v51, 0, v52, v53, v54, v55, v56, v57);
            *(_DWORD *)(v23 + 16) = v20;
            v58 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v58,
              (Il2CppObject *)v23,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v59 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
            EventDelegate___ctor_56337280(v59, v58, 0);
            Component_object = (UnityEngine_Transform_o *)v51[1].klass;
            if ( !Component_object )
              break;
            m_CachedPtr = Component_object->fields.m_CachedPtr;
            v67 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++HIDWORD(Component_object[1].klass);
            if ( !m_CachedPtr )
              break;
            klass_low = SLODWORD(Component_object[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v59,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = m_CachedPtr + 8 * klass_low;
              LODWORD(Component_object[1].klass) = klass_low + 1;
              *(_QWORD *)(v69 + 32) = v59;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 32), (int32_t)v59, v60, v61, v62, v63, v64, v65);
            }
            v22 += 2;
            ++v20;
            v19 += IndicatorStep;
            if ( v21 == v34 )
              return;
          }
        }
      }
    }
    sub_2213CDC(Component_object, v15);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScrollPageIndicator_o *v8; // x19
  MissionNaviTransitionBoardItem_o *p_Indicator; // x19
  struct UISprite_array *v10; // x21
  struct UISprite_array *Indicator; // t1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_596F3E1 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3E1 = 1;
  }
  Indicator = v8->fields.Indicator;
  p_Indicator = (MissionNaviTransitionBoardItem_o *)&v8->fields.Indicator;
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
          sub_2213CE4(this);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_2213CDC(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
          UnityEngine_Object__Destroy_83459800(gameObject, 0);
        }
        LODWORD(max_length) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
    }
    p_Indicator->klass = 0;
    sub_2213A04(p_Indicator, 0, v2, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrollPageIndicator__UpdateIndicator(ScrollPageIndicator_o *this, int32_t idx, const MethodInfo *method)
{
  struct UISprite_array *Indicator; // x8
  __int64 nowIndex; // x9
  ScrollPageIndicator_o *v5; // x19
  struct UISprite_array *v7; // x8

  Indicator = this->fields.Indicator;
  if ( Indicator )
  {
    nowIndex = (unsigned int)this->fields.nowIndex;
    v5 = this;
    if ( (nowIndex & 0x80000000) == 0 && (int)nowIndex < SLODWORD(Indicator->max_length) )
    {
      this = (ScrollPageIndicator_o *)Indicator->m_Items[nowIndex];
      if ( !this )
        goto LABEL_13;
      UISprite__set_spriteName((UISprite_o *)this, v5->fields.OffIndicatorSpriteName, 0);
    }
    if ( (idx & 0x80000000) == 0 )
    {
      v7 = v5->fields.Indicator;
      if ( !v7 )
        goto LABEL_13;
      if ( SLODWORD(v7->max_length) > idx )
      {
        this = (ScrollPageIndicator_o *)v7->m_Items[idx];
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, v5->fields.OnIndicatorSpriteName, 0);
          goto LABEL_11;
        }
LABEL_13:
        sub_2213CDC(this, *(_QWORD *)&idx);
      }
    }
LABEL_11:
    v5->fields.nowIndex = idx;
  }
}


void ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200BCB8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200BC70;
}


System_IAsyncResult_o *ScrollPageIndicator_OnPageChangeCallback__BeginInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        int32_t pageIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = pageIndex;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
    sub_2213CDC(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onPageChange->fields.invoke_impl)(
      onPageChange->fields.method_code,
      (unsigned int)this->fields.idx,
      onPageChange->fields.method);
}