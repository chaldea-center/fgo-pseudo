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
  float v17; // s0
  float v18; // s1
  int v19; // w27
  unsigned __int64 v20; // x26
  __int64 v21; // x28
  __int64 v22; // x29
  __int64 v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v31; // x23
  unsigned __int64 v32; // x21
  System_String_o *v33; // x0
  UnityEngine_Transform_o *v34; // x24
  UnityEngine_Transform_o *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  unsigned int *v42; // x25
  UISprite_o *v43; // x24
  __int64 v44; // x8
  int32_t layer; // w24
  GrandQuestFolderBoardItem_o *v46; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  EventDelegate_Callback_o *v53; // x24
  EventDelegate_o *v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 v65; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v67; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC600A & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1C713B0(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1C713B0(&UISprite___TypeInfo);
    sub_1C713B0(&StringLiteral_20851/*"indicator"*/);
    byte_4CC600A = 1;
  }
  v67 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1C71458(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8, v9, v10, v11, v12);
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
        v69 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Component_object, 0);
        if ( transform )
        {
          v17 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v18 = y;
          UnityEngine_Transform__set_localPosition(transform, v69, 0);
          v19 = 0;
          v20 = 0;
          v21 = (unsigned int)count;
          v22 = 8;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v23 = sub_1C715FC(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v23, 0);
            if ( !v23 )
              break;
            *(_QWORD *)(v23 + 24) = this;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 24), (int32_t)this, v24, v25, v26, v27, v28, v29);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v31 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v32 = v20 + 1;
            v67 = v20 + 1;
            v33 = System_Int32__ToString((int32_t)&v67, 0);
            Component_object = (__int64)System_String__Concat_64031724((System_String_o *)StringLiteral_20851/*"indicator"*/, v33, 0);
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
            v70.fields.x = (float)v19;
            v70.fields.y = 0.0;
            v70.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v70, 0);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0);
            v35 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_4CC0D0E )
            {
              Component_object = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
              byte_4CC0D0E = 1;
            }
            if ( !v35 )
              break;
            UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v31,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v42 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v43 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1C714EC(Component_object, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
              if ( !Component_object )
              {
                v65 = sub_1C7162C(0);
                sub_1C714D8(v65, 0);
              }
            }
            if ( v20 >= v42[6] )
              sub_1C71610(Component_object);
            *(_QWORD *)&v42[2 * v20 + 8] = v43;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v42[v22], (int32_t)v43, v36, v37, v38, v39, v40, v41);
            if ( !v43 )
              break;
            UISprite__set_atlas(v43, this->fields.IndicatorAtlas, 0);
            v44 = 64;
            if ( !v20 )
              v44 = 56;
            UISprite__set_spriteName(v43, *(System_String_o **)((char *)&this->klass + v44), 0);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v43->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v43,
              v43->klass->vtable._33_MakePixelPerfect.method);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v31, layer, 0);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v31,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v46 = (GrandQuestFolderBoardItem_o *)Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0,
              0,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            v46->fields.sortValue0 = 0;
            v46 = (GrandQuestFolderBoardItem_o *)((char *)v46 + 32);
            sub_1C71354(v46, 0, v47, v48, v49, v50, v51, v52);
            *(_DWORD *)(v23 + 16) = v20;
            v53 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v53,
              (Il2CppObject *)v23,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0);
            v54 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
            EventDelegate___ctor_49641004(v54, v53, 0);
            Component_object = (__int64)v46[1].monitor;
            if ( !Component_object )
              break;
            v61 = *(_QWORD *)(Component_object + 16);
            v62 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v61 )
              break;
            v63 = *(int *)(Component_object + 24);
            if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v54,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = v61 + 8 * v63;
              *(_DWORD *)(Component_object + 24) = v63 + 1;
              *(_QWORD *)(v64 + 32) = v54;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v64 + 32), (int32_t)v54, v55, v56, v57, v58, v59, v60);
            }
            v22 += 2;
            ++v20;
            v19 += IndicatorStep;
            if ( v21 == v32 )
              return;
          }
        }
      }
    }
    sub_1C71608(Component_object, v15);
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
  if ( (byte_4CC6009 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6009 = 1;
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
          sub_1C71610(this);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_1C71608(this, v15);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71724608(gameObject, 0);
        }
        LODWORD(max_length) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
    }
    p_Indicator->klass = 0;
    sub_1C71354(p_Indicator, 0, v2, v3, v4, v5, v6, v7);
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
      sub_1C71608(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1C71610(this);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA62A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA625C;
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
  if ( (byte_4CC600B & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC600B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
    sub_1C71608(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onPageChange->fields.invoke_impl)(
      onPageChange->fields.method_code,
      (unsigned int)this->fields.idx,
      onPageChange->fields.method);
}