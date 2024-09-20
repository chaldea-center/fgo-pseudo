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
  struct UISprite_array **p_Indicator; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *Component_object; // x0
  __int64 v11; // x1
  float y; // s8
  int v13; // s2
  float v14; // s0
  float v15; // s1
  int v16; // w27
  unsigned __int64 v17; // x26
  __int64 v18; // x28
  __int64 v19; // x29
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v24; // x23
  unsigned __int64 v25; // x21
  System_String_o *v26; // x0
  UnityEngine_Transform_o *v27; // x24
  UnityEngine_Transform_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  unsigned int *v31; // x25
  UISprite_o *v32; // x24
  __int64 v33; // x8
  int32_t layer; // w24
  ServantStatusBattleListViewItem_o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  EventDelegate_Callback_o *v38; // x24
  EventDelegate_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 klass_low; // x10
  __int64 v45; // x8
  __int64 v46; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v48; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59E0A & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1B885B0(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1B885B0(&UISprite___TypeInfo);
    sub_1B885B0(&StringLiteral_20640/*"indicator"*/);
    byte_4A59E0A = 1;
  }
  v48 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1B88658(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.Indicator, (int32_t)v5, v7, v8);
    IndicatorStep = this->fields.IndicatorStep;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Component_object )
    {
      localPosition = UnityEngine_Transform__get_localPosition(Component_object, 0LL);
      y = localPosition.fields.y;
      Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( Component_object )
      {
        *(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localPosition(Component_object, 0LL);
        if ( transform )
        {
          v14 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v15 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v13 - 2), 0LL);
          v16 = 0;
          v17 = 0LL;
          v18 = (unsigned int)count;
          v19 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v20 = sub_1B887FC(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v20, 0LL);
            if ( !v20 )
              break;
            *(_QWORD *)(v20 + 24) = this;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v21, v22);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v24 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v25 = v17 + 1;
            v48 = v17 + 1;
            v26 = System_Int32__ToString((int32_t)&v48, 0LL);
            Component_object = (UnityEngine_Transform_o *)System_String__Concat_61707032(
                                                            (System_String_o *)StringLiteral_20640/*"indicator"*/,
                                                            v26,
                                                            0LL);
            if ( !v24 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v24, (System_String_o *)Component_object, 0LL);
            v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
            Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v27 )
              break;
            UnityEngine_Transform__set_parent(v27, Component_object, 0LL);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
            if ( !Component_object )
              break;
            v50.fields.x = (float)v16;
            v50.fields.y = 0.0;
            v50.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_object, v50, 0LL);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
            v28 = Component_object;
            if ( !byte_4A55CE6 )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE6 = 1;
            }
            if ( !v28 )
              break;
            UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v24,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v31 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v32 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1B886EC(
                                                              Component_object,
                                                              *(_QWORD *)(*(_QWORD *)v31 + 64LL));
              if ( !Component_object )
              {
                v46 = sub_1B88830(0LL);
                sub_1B886D8(v46, 0LL);
              }
            }
            if ( v17 >= v31[6] )
              sub_1B88814(Component_object, v11);
            *(_QWORD *)&v31[2 * v17 + 8] = v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v31[v19], (int32_t)v32, v29, v30);
            if ( !v32 )
              break;
            UISprite__set_atlas(v32, this->fields.IndicatorAtlas, 0LL);
            v33 = 64LL;
            if ( !v17 )
              v33 = 56LL;
            UISprite__set_spriteName(v32, *(System_String_o **)((char *)&this->klass + v33), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v32->klass->vtable._33_MakePixelPerfect.method)(
              v32,
              v32->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v24, layer, 0LL);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v24,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v35 = (ServantStatusBattleListViewItem_o *)Component_object;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, Il2CppClass **))Component_object->klass[1]._1.methods)(
              Component_object,
              0LL,
              0LL,
              Component_object->klass[1]._1.nestedTypes);
            v35->fields.sortValue0 = 0LL;
            v35 = (ServantStatusBattleListViewItem_o *)((char *)v35 + 32);
            sub_1B88554(v35, 0, v36, v37);
            *(_DWORD *)(v20 + 16) = v17;
            v38 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v38,
              (Il2CppObject *)v20,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v39 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
            EventDelegate___ctor_46786736(v39, v38, 0LL);
            Component_object = (UnityEngine_Transform_o *)v35[1].klass;
            if ( !Component_object )
              break;
            v42 = *(_QWORD *)&Component_object->fields.m_CachedPtr;
            v43 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++HIDWORD(Component_object[1].klass);
            if ( !v42 )
              break;
            klass_low = SLODWORD(Component_object[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(v42 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v39,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = v42 + 8 * klass_low;
              LODWORD(Component_object[1].klass) = klass_low + 1;
              *(_QWORD *)(v45 + 32) = v39;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 32), (int32_t)v39, v40, v41);
            }
            v19 += 2LL;
            ++v17;
            v16 += IndicatorStep;
            if ( v18 == v25 )
              return;
          }
        }
      }
    }
    sub_1B8880C(Component_object, v11);
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
  if ( (byte_4A59E09 & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59E09 = 1;
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
          sub_1B88814(this, method);
        v10 = (UnityEngine_Object_o *)v6->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_1B8880C(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v10,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
        }
        LODWORD(v8) = v6->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
    }
    p_Indicator->klass = 0LL;
    sub_1B88554(p_Indicator, 0, v2, v3);
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
      sub_1B8880C(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1B88814(this, *(_QWORD *)&idx);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CD9D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD98C;
}


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
  if ( (byte_4A59E0B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A59E0B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}