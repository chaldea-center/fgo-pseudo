void __fastcall ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.monoBehaviour,
    (int64_t)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_object__o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v34; // x25
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x8
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x8

  if ( (byte_4BC3F8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, tweenTarget);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Contains__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_List_GameObject___TypeInfo, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    byte_4BC3F8F = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v17;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v25;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.switchingTargets,
      (int64_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (PartyOrganizationUtility_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v34 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (PartyOrganizationUtility_c *)v34;
    sub_1C1AB78(p_switchingLabels, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v49 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v51[4] = (Il2CppClass *)tweenTarget;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)tweenTarget, v42, v43, v44, v45, v46, v47);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v58 = tweenTargets->fields._items;
    v59 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v58 )
      goto LABEL_30;
    v60 = tweenTargets->fields._size;
    if ( (unsigned int)v60 >= v58->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      tweenTargets->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)switchingTarget;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)switchingTarget, v52, v53, v54, v55, v56, v57);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v68 = tweenTargets->fields._items,
        v69 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v68) )
  {
LABEL_30:
    sub_1C1AE30(tweenTargets, tweenTarget);
  }
  v70 = tweenTargets->fields._size;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    tweenTargets->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)switchingLabel;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)switchingLabel, v62, v63, v64, v65, v66, v67);
  }
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x8
  int32_t v11; // w2
  int v12; // w9

  if ( (byte_4BC3F92 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v3);
    byte_4BC3F92 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
  {
    size = tweenTargets->fields._size;
    v6 = tweenTargets->fields._version + 1;
    tweenTargets->fields._size = 0;
    tweenTargets->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenTargets->fields._items, 0, size, 0LL);
  }
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
  {
    v8 = switchingTargets->fields._size;
    v9 = switchingTargets->fields._version + 1;
    switchingTargets->fields._size = 0;
    switchingTargets->fields._version = v9;
    if ( v8 >= 1 )
      System_Array__Clear((System_Array_o *)switchingTargets->fields._items, 0, v8, 0LL);
  }
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
  {
    v11 = switchingLabels->fields._size;
    v12 = switchingLabels->fields._version + 1;
    switchingLabels->fields._size = 0;
    switchingLabels->fields._version = v12;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)switchingLabels->fields._items, 0, v11, 0LL);
  }
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v5; // w21
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4BC3F94 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_4BC3F94 = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1C1AE30(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C1AE38(this, tweenAlphas);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_15;
        this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v4) = tweenAlphas->max_length;
      v5 = (__int64)++v6 < (int)v4;
    }
    while ( (__int64)v6 < (int)v4 );
  }
  return v5;
}


void __fastcall ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v38; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  System_Predicate_object__o *v40; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  System_Predicate_object__o *v42; // x21

  if ( (byte_4BC3F90 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, tweenTarget);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__, v9);
    sub_1C1ABD4(&System_Predicate_GameObject__TypeInfo, v10);
    sub_1C1ABD4(&System_Predicate_List_GameObject___TypeInfo, v11);
    sub_1C1ABD4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v12);
    sub_1C1ABD4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v13);
    sub_1C1ABD4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v14);
    sub_1C1ABD4(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v15);
    byte_4BC3F90 = 1;
  }
  v16 = sub_1C1AE20(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = tweenTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)tweenTarget, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = switchingTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)switchingTarget, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v16 + 32) = switchingLabel;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)switchingLabel, v31, v32, v33, v34, v35, v36);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v38 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(
      v38,
      (Il2CppObject *)v16,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v38,
      (const MethodInfo_363DEEC *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v40 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_object____ctor(
      v40,
      (Il2CppObject *)v16,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0LL);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v40,
        (const MethodInfo_363DEEC *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v42 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_object____ctor(
        v42,
        (Il2CppObject *)v16,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0LL);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_363DEEC *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1C1AE30(v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w20
  int32_t v11; // w20
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x22

  if ( (byte_4BC3F95 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, isSwitch);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BC3F95 = 1;
  }
  if ( !isSwitch )
    goto LABEL_10;
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_37;
  if ( switchingTargets->fields._size >= 1
    && System_Collections_Generic_List_object___get_Item(
         switchingTargets,
         0,
         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets
      || (switchingIndex = this->fields.switchingIndex,
          (switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             switchingTargets,
                                                                             0,
                                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__)) == 0LL) )
    {
LABEL_37:
      sub_1C1AE30(switchingTargets, isSwitch);
    }
    this->fields.switchingIndex = (switchingIndex + 1) % switchingTargets->fields._size;
  }
  else
  {
LABEL_10:
    this->fields.switchingIndex = 0;
  }
  switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_37;
  v11 = 0;
  while ( v11 < switchingTargets->fields._size )
  {
    v12 = 0;
    while ( 1 )
    {
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v11,
                                                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      if ( v12 >= switchingTargets->fields._size )
        break;
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      if ( !switchingTargets )
        goto LABEL_37;
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v11,
                                                                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      Item = System_Collections_Generic_List_object___get_Item(
               switchingTargets,
               v12,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
        if ( !switchingTargets )
          goto LABEL_37;
        switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          switchingTargets,
                                                                          v11,
                                                                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
        if ( !switchingTargets )
          goto LABEL_37;
        v14 = System_Collections_Generic_List_object___get_Item(
                switchingTargets,
                v12,
                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
        {
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v11,
                                                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v12,
                                                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v12 == this->fields.switchingIndex,
            0LL);
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v11,
                                                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v12,
                                                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v12 == this->fields.switchingIndex,
            0LL);
        }
      }
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      ++v12;
      if ( !switchingTargets )
        goto LABEL_37;
    }
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    ++v11;
    if ( !switchingTargets )
      goto LABEL_37;
  }
}


void __fastcall ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  ShopNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = ShopNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_70779684(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_6:
    sub_1C1AE30(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int32_t v13; // w20
  Il2CppObject *Item; // x21
  Il2CppObject *v15; // x0

  if ( (byte_4BC3F91 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC3F91 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1C1AE30(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70780304(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.coroutine, 0LL, v7, v8, v9, v10, v11, v12);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v13 = 0;
      while ( v13 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v13,
                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v15 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)monoBehaviour,
                  v13,
                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v15, 0.0, 1.0, 0LL);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v13;
        if ( !monoBehaviour )
          goto LABEL_14;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, (const MethodInfo *)coroutine);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeTween__TweenLoop(
        ShopNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BC3F93 & 1) == 0 )
  {
    sub_1C1ABD4(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, method);
    byte_4BC3F93 = 1;
  }
  v3 = sub_1C1AE20(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14___ctor(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeTween__TweenLoop_d__14__MoveNext(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v14; // x21
  PartyOrganizationUtility_o *p_loopWaitOnShow_5__2; // x0
  int64_t v16; // x1
  bool v17; // zf
  float v18; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int64_t v20; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  unsigned __int64 v28; // x22
  Il2CppObject *Item; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  unsigned int *v36; // x27
  unsigned int *v37; // x0
  Il2CppObject *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v45; // x23
  unsigned int *v46; // x0
  unsigned int *v47; // x8
  __int64 v48; // x8
  PartyOrganizationUtility_o *v49; // x19
  int v50; // w8
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t loopWaitOnShow_5__2; // x1
  __int64 v54; // x0

  v8 = this;
  if ( (byte_4BC3F97 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&TweenAlpha___TypeInfo, v11);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    byte_4BC3F97 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v14 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v14, 3.0, 0LL);
      v8->fields._loopWaitOnShow_5__2 = v14;
      p_loopWaitOnShow_5__2 = (PartyOrganizationUtility_o *)&v8->fields._loopWaitOnShow_5__2;
      v16 = (int64_t)v14;
      goto LABEL_16;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      goto LABEL_17;
    case 2:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_8;
      goto LABEL_38;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, v2);
    v8->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = (PartyOrganizationUtility_o *)&v8->fields._tweenAlphas_5__3;
    v16 = 0LL;
LABEL_16:
    sub_1C1AB78(p_loopWaitOnShow_5__2, v16, (int64_t)v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
LABEL_38:
      sub_1C1AE30(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    v20 = sub_1C1AC7C(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v20;
    p_tweenAlphas_5__3 = (unsigned int **)&v8->fields._tweenAlphas_5__3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._tweenAlphas_5__3, v20, v22, v23, v24, v25, v26, v27);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v28 = 0LL;
    while ( (__int64)v28 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v28,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Item,
                                                     0LL,
                                                     0LL);
      v36 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_38;
        if ( v28 >= v36[6] )
          goto LABEL_47;
        v37 = &v36[2 * v28];
        *((_QWORD *)v37 + 4) = 0LL;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 8), 0LL, v30, v31, v32, v33, v34, v35);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v38 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v28,
                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v38,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v36 )
          goto LABEL_38;
        v45 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1C1AD10(this, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
          if ( !this )
          {
            v54 = sub_1C1AE54();
            sub_1C1ACFC(v54, 0LL);
          }
        }
        if ( v28 >= v36[6] )
          goto LABEL_47;
        v46 = &v36[2 * v28];
        *((_QWORD *)v46 + 4) = v45;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 8), (int64_t)v45, v39, v40, v41, v42, v43, v44);
        v47 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v28 >= v47[6] )
LABEL_47:
          sub_1C1AE38(this, method);
        v48 = *(_QWORD *)&v47[2 * v28 + 8];
        if ( !v48 )
          goto LABEL_38;
        *(_DWORD *)(v48 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v28;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled((ShopNoticeTween_o *)this, v8->fields._tweenAlphas_5__3, v2) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v17 = _4__this->fields.to == 1.0;
    v18 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v18 = 1.0;
    _4__this->fields.to = v18;
    if ( v17 )
    {
      loopWaitOnShow_5__2 = (int64_t)v8->fields._loopWaitOnShow_5__2;
      v8->fields.__2__current = (Il2CppObject *)loopWaitOnShow_5__2;
      v49 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v49, loopWaitOnShow_5__2, (int64_t)v2, v3, v4, v5, v6, v7);
      v50 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v8->fields.__2__current = 0LL;
  v49 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C1AB78(v49, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  v50 = 2;
LABEL_46:
  *(_DWORD *)&v49[-1].fields._IsQuestStartMenuMode_k__BackingField = v50;
  return 1;
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_Reset(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14__System_IDisposable_Dispose(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopNoticeTween___c__DisplayClass10_0___ctor(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__0(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *t,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  bool v6; // w20
  UnityEngine_Object_o *v7; // x21

  if ( (byte_4BC3F96 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, t);
    byte_4BC3F96 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL);
  if ( v6 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  }
  return v6;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingTarget;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return t == this->fields.switchingLabel;
}