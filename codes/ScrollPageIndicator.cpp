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
  int32_t v19; // w3
  UnityEngine_Transform_o *transform; // x22
  __int64 Component_object; // x0
  float y; // s8
  int v23; // s2
  float v24; // s0
  float v25; // s1
  __int64 v26; // x1
  __int64 v27; // x2
  int v28; // w27
  unsigned __int64 v29; // x26
  __int64 v30; // x28
  __int64 v31; // x29
  __int64 v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v36; // x23
  unsigned __int64 v37; // x21
  System_String_o *v38; // x0
  UnityEngine_Transform_o *v39; // x24
  __int64 v40; // x1
  UnityEngine_Transform_o *v41; // x24
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  unsigned int *v45; // x25
  UISprite_o *v46; // x24
  __int64 v47; // x8
  int32_t layer; // w24
  ServantStatusBattleListViewItem_o *v49; // x23
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x2
  EventDelegate_Callback_o *v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  EventDelegate_o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  __int64 v64; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v66; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB0DB & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&count);
    sub_1B640C8(&EventDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1B640C8(&NGUITools_TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__, v12);
    sub_1B640C8(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v13);
    sub_1B640C8(&UISprite___TypeInfo, v14);
    sub_1B640C8(&StringLiteral_20559/*"indicator"*/, v15);
    byte_49FB0DB = 1;
  }
  v66 = 0;
  if ( count > 1 )
  {
    v16 = (struct UISprite_array *)sub_1B64170(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v16;
    p_Indicator = &this->fields.Indicator;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Indicator, (int32_t)v16, v18, v19);
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
        *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)Component_object,
                                                 0LL);
        if ( transform )
        {
          v24 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v25 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v23 - 2), 0LL);
          v28 = 0;
          v29 = 0LL;
          v30 = (unsigned int)count;
          v31 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v32 = sub_1B64314(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo, v26, v27);
            System_Object___ctor((Il2CppObject *)v32, 0LL);
            if ( !v32 )
              break;
            *(_QWORD *)(v32 + 24) = this;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 24), (int32_t)this, v33, v34);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v36 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v37 = v29 + 1;
            v66 = v29 + 1;
            v38 = System_Int32__ToString((int32_t)&v66, 0LL);
            Component_object = (__int64)System_String__Concat_61375396((System_String_o *)StringLiteral_20559/*"indicator"*/, v38, 0LL);
            if ( !v36 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v36, (System_String_o *)Component_object, 0LL);
            v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v39 )
              break;
            UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)Component_object, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            if ( !Component_object )
              break;
            v68.fields.x = (float)v28;
            v68.fields.y = 0.0;
            v68.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v68, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
            v41 = (UnityEngine_Transform_o *)Component_object;
            if ( !byte_49F7116 )
            {
              Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v40);
              byte_49F7116 = 1;
            }
            if ( !v41 )
              break;
            UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v36,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v45 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v46 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = sub_1B64204(Component_object, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
              if ( !Component_object )
              {
                v64 = sub_1B64348(0LL);
                sub_1B641F0(v64, 0LL);
              }
            }
            if ( v29 >= v45[6] )
              sub_1B6432C(Component_object, v42);
            *(_QWORD *)&v45[2 * v29 + 8] = v46;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45[v31], (int32_t)v46, v43, v44);
            if ( !v46 )
              break;
            UISprite__set_atlas(v46, this->fields.IndicatorAtlas, 0LL);
            v47 = 64LL;
            if ( !v29 )
              v47 = 56LL;
            UISprite__set_spriteName(v46, *(System_String_o **)((char *)&this->klass + v47), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v46->klass->vtable._33_MakePixelPerfect.method)(
              v46,
              v46->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v36, layer, 0LL);
            Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v36,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v49 = (ServantStatusBattleListViewItem_o *)Component_object;
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)Component_object + 536LL))(
              Component_object,
              0LL,
              0LL,
              *(_QWORD *)(*(_QWORD *)Component_object + 544LL));
            v49->fields.sortValue0 = 0LL;
            v49 = (ServantStatusBattleListViewItem_o *)((char *)v49 + 32);
            sub_1B6406C(v49, 0, v50, v51);
            *(_DWORD *)(v32 + 16) = v29;
            v54 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v52, v53);
            EventDelegate_Callback___ctor(
              v54,
              (Il2CppObject *)v32,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v57 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v55, v56);
            EventDelegate___ctor_46508544(v57, v54, 0LL);
            Component_object = (__int64)v49[1].klass;
            if ( !Component_object )
              break;
            v60 = *(_QWORD *)(Component_object + 16);
            v61 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++*(_DWORD *)(Component_object + 28);
            if ( !v60 )
              break;
            v62 = *(int *)(Component_object + 24);
            if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v57,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = v60 + 8 * v62;
              *(_DWORD *)(Component_object + 24) = v62 + 1;
              *(_QWORD *)(v63 + 32) = v57;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 32), (int32_t)v57, v58, v59);
            }
            v31 += 2LL;
            ++v29;
            v28 += IndicatorStep;
            if ( v30 == v37 )
              return;
          }
        }
      }
    }
    sub_1B64324(Component_object);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void __fastcall ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ScrollPageIndicator_o *v4; // x19
  ServantStatusBattleListViewItem_o *p_Indicator; // x19
  struct UISprite_array *v6; // x21
  struct UISprite_array *Indicator; // t1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_49FB0DA & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB0DA = 1;
  }
  Indicator = v4->fields.Indicator;
  p_Indicator = (ServantStatusBattleListViewItem_o *)&v4->fields.Indicator;
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
          sub_1B6432C(this, method);
        v10 = (UnityEngine_Object_o *)v6->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_1B64324(this);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v10,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
        }
        LODWORD(v8) = v6->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
    }
    p_Indicator->klass = 0LL;
    sub_1B6406C(p_Indicator, 0, v2, v3);
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
      sub_1B64324(this);
    }
LABEL_16:
    sub_1B6432C(this, *(_QWORD *)&idx);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AB1E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB198;
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
  if ( (byte_49FB0DC & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&pageIndex);
    byte_49FB0DC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
    sub_1B64324(this);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}