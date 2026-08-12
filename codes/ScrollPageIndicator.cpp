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
  __int64 Component_object; // x0
  __int64 v15; // x1
  float y; // s8
  int v17; // w26
  unsigned __int64 v18; // x21
  __int64 v19; // x29
  __int64 v20; // x28
  __int64 v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v31; // x23
  unsigned __int64 v32; // x27
  System_String_o *v33; // x0
  UnityEngine_Transform_o *v34; // x24
  UnityEngine_Transform_o *v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  unsigned int *v42; // x25
  UISprite_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t layer; // w24
  MissionNaviTransitionBoardItem_o *v49; // x23
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  EventDelegate_Callback_o *v56; // x24
  EventDelegate_o *v57; // x22
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  __int64 v68; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v70; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

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
  v70 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Component_object )
    {
      y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0).fields.y;
      Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( Component_object )
      {
        v72.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0).fields.z;
        if ( transform )
        {
          v72.fields.y = y;
          v72.fields.x = vcvts_n_f32_s32(IndicatorStep - IndicatorStep * count, 1u);
          UnityEngine_Transform__set_localPosition(transform, v72, 0);
          v17 = 0;
          v18 = 0;
          v19 = (unsigned int)count;
          v20 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v21 = sub_2213CCC(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v21, 0);
            if ( !v21 )
              break;
            *(_QWORD *)(v21 + 24) = this;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
            v31 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v32 = v18 + 1;
            v70 = v18 + 1;
            v33 = System_Int32__ToString((int32_t)&v70, 0);
            Component_object = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_21776/*"indicator"*/, v33, 0);
            if ( !v31 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v31, (System_String_o *)Component_object, 0);
            v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !v34 )
              break;
            UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)Component_object, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0);
            if ( !Component_object )
              break;
            v71.fields.x = (float)v17;
            v71.fields.y = 0.0;
            v71.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v71, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0);
            v35 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_5969AE5 )
            {
              Component_object = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( !v35 )
              break;
            UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v31,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v42 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v43 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_2213BB4(Component_object, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
              if ( !Component_object )
              {
                v68 = sub_2213D00(0, v44);
                sub_2213BA0(v68, 0);
              }
            }
            if ( v18 >= v42[6] )
              sub_2213CE4(Component_object);
            *(_QWORD *)&v42[v20] = v43;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42[v20], (int32_t)v43, v36, v37, v38, v39, v40, v41);
            if ( !v43 )
              break;
            UISprite__set_atlas(v43, this->fields.IndicatorAtlas, 0);
            v45 = 64;
            if ( !v18 )
              v45 = 56;
            UISprite__set_spriteName(v43, *(System_String_o **)((char *)&this->klass + v45), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v43->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v43,
              v43->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v46, v47);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v31, layer, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v31,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v49 = (MissionNaviTransitionBoardItem_o *)Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0,
              0,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            v49->fields.sortValue0 = 0;
            v49 = (MissionNaviTransitionBoardItem_o *)((char *)v49 + 32);
            sub_2213A04(v49, 0, v50, v51, v52, v53, v54, v55);
            *(_DWORD *)(v21 + 16) = v18;
            v56 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v56,
              (Il2CppObject *)v21,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v57 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
            EventDelegate___ctor_56337280(v57, v56, 0);
            Component_object = (__int64)v49[1].klass;
            if ( !Component_object )
              break;
            v64 = *(_QWORD *)(Component_object + 16);
            v65 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v64 )
              break;
            v66 = *(int *)(Component_object + 24);
            if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v57,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = v64 + 8 * v66;
              *(_DWORD *)(Component_object + 24) = v66 + 1;
              *(_QWORD *)(v67 + 32) = v57;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 32), (int32_t)v57, v58, v59, v60, v61, v62, v63);
            }
            v20 += 2;
            ++v18;
            v17 += IndicatorStep;
            if ( v19 == v32 )
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
  return sub_2213A14(this, v9, callback, object);
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