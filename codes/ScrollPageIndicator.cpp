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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *Component_object; // x0
  __int64 v15; // x1
  float y; // s8
  int v17; // s2
  float v18; // s0
  float v19; // s1
  int v20; // w27
  unsigned __int64 v21; // x26
  __int64 v22; // x28
  __int64 v23; // x29
  __int64 v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *PageIndicatorPrefab; // x23
  Il2CppObject *v32; // x23
  unsigned __int64 v33; // x21
  System_String_o *v34; // x0
  UnityEngine_Transform_o *v35; // x24
  UnityEngine_Transform_o *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  unsigned int *v43; // x25
  UISprite_o *v44; // x24
  __int64 v45; // x8
  int32_t layer; // w24
  UnityEngine_Transform_o *v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  EventDelegate_Callback_o *v54; // x24
  EventDelegate_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 klass_low; // x10
  __int64 v65; // x8
  __int64 v66; // x0
  int32_t IndicatorStep; // [xsp+8h] [xbp-68h]
  int v68; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDB18D & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__);
    sub_1C21E38(&ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
    sub_1C21E38(&UISprite___TypeInfo);
    sub_1C21E38(&StringLiteral_21014/*"indicator"*/);
    byte_4BDB18D = 1;
  }
  v68 = 0;
  if ( count > 1 )
  {
    v5 = (struct UISprite_array *)sub_1C21EE0(UISprite___TypeInfo, (unsigned int)count);
    this->fields.Indicator = v5;
    p_Indicator = &this->fields.Indicator;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.Indicator, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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
        *(UnityEngine_Vector3_o *)(&v17 - 2) = UnityEngine_Transform__get_localPosition(Component_object, 0LL);
        if ( transform )
        {
          v18 = (float)(IndicatorStep * (1 - count)) * 0.5;
          v19 = y;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v17 - 2), 0LL);
          v20 = 0;
          v21 = 0LL;
          v22 = (unsigned int)count;
          v23 = 8LL;
          this->fields.nowIndex = 0;
          while ( 1 )
          {
            v24 = sub_1C22084(ScrollPageIndicator___c__DisplayClass10_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v24, 0LL);
            if ( !v24 )
              break;
            *(_QWORD *)(v24 + 24) = this;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)this, v25, v26, v27, v28, v29, v30);
            PageIndicatorPrefab = (Il2CppObject *)this->fields.PageIndicatorPrefab;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v32 = UnityEngine_Object__Instantiate_object_(
                    PageIndicatorPrefab,
                    (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            v33 = v21 + 1;
            v68 = v21 + 1;
            v34 = System_Int32__ToString((int32_t)&v68, 0LL);
            Component_object = (UnityEngine_Transform_o *)System_String__Concat_63115476(
                                                            (System_String_o *)StringLiteral_21014/*"indicator"*/,
                                                            v34,
                                                            0LL);
            if ( !v32 )
              break;
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v32, (System_String_o *)Component_object, 0LL);
            v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0LL);
            Component_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !v35 )
              break;
            UnityEngine_Transform__set_parent(v35, Component_object, 0LL);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0LL);
            if ( !Component_object )
              break;
            v70.fields.x = (float)v20;
            v70.fields.y = 0.0;
            v70.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(Component_object, v70, 0LL);
            Component_object = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0LL);
            v36 = Component_object;
            if ( !byte_4BD6BB6 )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB6 = 1;
            }
            if ( !v36 )
              break;
            UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v32,
                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v43 = (unsigned int *)*p_Indicator;
            if ( !*p_Indicator )
              break;
            v44 = (UISprite_o *)Component_object;
            if ( Component_object )
            {
              Component_object = (UnityEngine_Transform_o *)sub_1C21F74(
                                                              Component_object,
                                                              *(_QWORD *)(*(_QWORD *)v43 + 64LL));
              if ( !Component_object )
              {
                v66 = sub_1C220B8(0LL);
                sub_1C21F60(v66, 0LL);
              }
            }
            if ( v21 >= v43[6] )
              sub_1C2209C(Component_object, v15);
            *(_QWORD *)&v43[2 * v21 + 8] = v44;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v43[v23], (int64_t)v44, v37, v38, v39, v40, v41, v42);
            if ( !v44 )
              break;
            UISprite__set_atlas(v44, this->fields.IndicatorAtlas, 0LL);
            v45 = 64LL;
            if ( !v21 )
              v45 = 56LL;
            UISprite__set_spriteName(v44, *(System_String_o **)((char *)&this->klass + v45), 0LL);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
              v44,
              v44->klass->vtable._34_get_minWidth.methodPtr);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
            if ( !Component_object )
              break;
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetLayer((UnityEngine_GameObject_o *)v32, layer, 0LL);
            Component_object = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)v32,
                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
            if ( !Component_object )
              break;
            v47 = Component_object;
            ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD, Il2CppClass **))Component_object->klass[1]._1.methods)(
              Component_object,
              0LL,
              0LL,
              Component_object->klass[1]._1.nestedTypes);
            v47[1].monitor = 0LL;
            v47 = (UnityEngine_Transform_o *)((char *)v47 + 32);
            sub_1C21DDC((PartyOrganizationUtility_o *)v47, 0LL, v48, v49, v50, v51, v52, v53);
            *(_DWORD *)(v24 + 16) = v21;
            v54 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v54,
              (Il2CppObject *)v24,
              Method_ScrollPageIndicator___c__DisplayClass10_0__CreateIndicator_b__0__,
              0LL);
            v55 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
            EventDelegate___ctor_47961380(v55, v54, 0LL);
            Component_object = (UnityEngine_Transform_o *)v47[7].klass;
            if ( !Component_object )
              break;
            v62 = *(_QWORD *)&Component_object->fields.m_CachedPtr;
            v63 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++HIDWORD(Component_object[1].klass);
            if ( !v62 )
              break;
            klass_low = SLODWORD(Component_object[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(v62 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Component_object,
                (Il2CppObject *)v55,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = v62 + 8 * klass_low;
              LODWORD(Component_object[1].klass) = klass_low + 1;
              *(_QWORD *)(v65 + 32) = v55;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)v55, v56, v57, v58, v59, v60, v61);
            }
            v23 += 2LL;
            ++v21;
            v20 += IndicatorStep;
            if ( v22 == v33 )
              return;
          }
        }
      }
    }
    sub_1C22094(Component_object, v15);
  }
  ScrollPageIndicator__Init(this, *(const MethodInfo **)&count);
}


void __fastcall ScrollPageIndicator__Init(ScrollPageIndicator_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScrollPageIndicator_o *v8; // x19
  PartyOrganizationUtility_o *p_Indicator; // x19
  struct UISprite_array *v10; // x21
  struct UISprite_array *Indicator; // t1
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *gameObject; // x20

  v8 = this;
  if ( (byte_4BDB18C & 1) == 0 )
  {
    this = (ScrollPageIndicator_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB18C = 1;
  }
  Indicator = v8->fields.Indicator;
  p_Indicator = (PartyOrganizationUtility_o *)&v8->fields.Indicator;
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
          sub_1C2209C(this, method);
        v14 = (UnityEngine_Object_o *)v10->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ScrollPageIndicator_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            sub_1C22094(this, method);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        }
        LODWORD(v12) = v10->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
    p_Indicator->klass = 0LL;
    sub_1C21DDC(p_Indicator, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1C22094(this, *(_QWORD *)&idx);
    }
LABEL_16:
    sub_1C2209C(this, *(_QWORD *)&idx);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollPageIndicator_OnPageChangeCallback___ctor(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A62330;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A622E8;
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
  if ( (byte_4BDB18E & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    byte_4BDB18E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall ScrollPageIndicator_OnPageChangeCallback__EndInvoke(
        ScrollPageIndicator_OnPageChangeCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
    sub_1C22094(this, method);
  onPageChange = _4__this->fields.onPageChange;
  if ( onPageChange )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onPageChange->fields.m_target)(
      onPageChange->fields.original_method_info,
      (unsigned int)this->fields.idx,
      *(_QWORD *)&onPageChange->fields.extra_arg);
}