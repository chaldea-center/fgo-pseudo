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
  sub_1BCA784(
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_object__o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_object__o *v32; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  PartyOrganizationUtility_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_object__o *v41; // x25
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_List_object__o *tweenTargets; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x8
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x8

  if ( (byte_4B12762 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, tweenTarget, switchingTarget);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_List_GameObject___TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v21, v22);
    byte_4B12762 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         tweenTarget,
                                                         switchingTarget,
                                                         switchingLabel);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_List_GameObject___TypeInfo,
                                                         tweenTarget,
                                                         switchingTarget,
                                                         switchingLabel);
    System_Collections_Generic_List_object____ctor(
      v32,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v32;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.switchingTargets,
      (int64_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (PartyOrganizationUtility_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_List_GameObject___TypeInfo,
                                                         tweenTarget,
                                                         switchingTarget,
                                                         switchingLabel);
    System_Collections_Generic_List_object____ctor(
      v41,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (PartyOrganizationUtility_c *)v41;
    sub_1BCA784(p_switchingLabels, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)tweenTarget,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_30;
    items = tweenTargets->fields._items;
    v56 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++tweenTargets->fields._version;
    if ( !items )
      goto LABEL_30;
    size = tweenTargets->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)tweenTarget,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &items->obj.klass + size;
      tweenTargets->fields._size = size + 1;
      v58[4] = (Il2CppClass *)tweenTarget;
      sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)tweenTarget, v49, v50, v51, v52, v53, v54);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_object___Contains(
          tweenTargets,
          (Il2CppObject *)switchingTarget,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_object__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_30;
    v65 = tweenTargets->fields._items;
    v66 = Method_System_Collections_Generic_List_List_GameObject___Add__;
    ++tweenTargets->fields._version;
    if ( !v65 )
      goto LABEL_30;
    v67 = tweenTargets->fields._size;
    if ( (unsigned int)v67 >= v65->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenTargets,
        (Il2CppObject *)switchingTarget,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v65->obj.klass + v67;
      tweenTargets->fields._size = v67 + 1;
      v68[4] = (Il2CppClass *)switchingTarget;
      sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)switchingTarget, v59, v60, v61, v62, v63, v64);
    }
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_30;
  if ( System_Collections_Generic_List_object___Contains(
         tweenTargets,
         (Il2CppObject *)switchingLabel,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_object__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass
    || (v75 = tweenTargets->fields._items,
        v76 = Method_System_Collections_Generic_List_List_GameObject___Add__,
        ++tweenTargets->fields._version,
        !v75) )
  {
LABEL_30:
    sub_1BCAA3C(tweenTargets, tweenTarget);
  }
  v77 = tweenTargets->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenTargets,
      (Il2CppObject *)switchingLabel,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = &v75->obj.klass + v77;
    tweenTargets->fields._size = v77 + 1;
    v78[4] = (Il2CppClass *)switchingLabel;
    sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)switchingLabel, v69, v70, v71, v72, v73, v74);
  }
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  int32_t v10; // w2
  int v11; // w9
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x8
  int32_t v13; // w2
  int v14; // w9

  if ( (byte_4B12765 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v4, v5);
    byte_4B12765 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
  {
    size = tweenTargets->fields._size;
    v8 = tweenTargets->fields._version + 1;
    tweenTargets->fields._size = 0;
    tweenTargets->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenTargets->fields._items, 0, size, 0LL);
  }
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
  {
    v10 = switchingTargets->fields._size;
    v11 = switchingTargets->fields._version + 1;
    switchingTargets->fields._size = 0;
    switchingTargets->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)switchingTargets->fields._items, 0, v10, 0LL);
  }
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
  {
    v13 = switchingLabels->fields._size;
    v14 = switchingLabels->fields._version + 1;
    switchingLabels->fields._size = 0;
    switchingLabels->fields._version = v14;
    if ( v13 >= 1 )
      System_Array__Clear((System_Array_o *)switchingLabels->fields._items, 0, v13, 0LL);
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

  if ( (byte_4B12767 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tweenAlphas, method);
    byte_4B12767 = 1;
  }
  if ( !tweenAlphas )
LABEL_15:
    sub_1BCAA3C(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1BCAA44(this, tweenAlphas);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenAlphas);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_object__o *v48; // x22
  System_Collections_Generic_List_object__o *switchingTargets; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Predicate_object__o *v53; // x22
  System_Collections_Generic_List_object__o *switchingLabels; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Predicate_object__o *v58; // x21

  if ( (byte_4B12763 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, tweenTarget, switchingTarget);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__, v9, v10);
    sub_1BCA7E0(&System_Predicate_GameObject__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Predicate_List_GameObject___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v15, v16);
    sub_1BCA7E0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v17, v18);
    sub_1BCA7E0(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v19, v20);
    sub_1BCA7E0(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v21, v22);
    byte_4B12763 = 1;
  }
  v23 = sub_1BCAA2C(ShopNoticeTween___c__DisplayClass10_0_TypeInfo, tweenTarget, switchingTarget, switchingLabel);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_11;
  *(_QWORD *)(v23 + 16) = tweenTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)tweenTarget, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = switchingTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)switchingTarget, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v23 + 32) = switchingLabel;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)switchingLabel, v38, v39, v40, v41, v42, v43);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v48 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GameObject__TypeInfo, v44, v45, v46);
    System_Predicate_object____ctor(
      v48,
      (Il2CppObject *)v23,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      (System_Collections_Generic_List_object__o *)tweenTargets,
      (System_Predicate_T__o *)v48,
      (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    v53 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_List_GameObject___TypeInfo, v50, v51, v52);
    System_Predicate_object____ctor(
      v53,
      (Il2CppObject *)v23,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      0LL);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_object___RemoveAll(
        switchingTargets,
        (System_Predicate_T__o *)v53,
        (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
      v58 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_List_GameObject___TypeInfo, v55, v56, v57);
      System_Predicate_object____ctor(
        v58,
        (Il2CppObject *)v23,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        0LL);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_object___RemoveAll(
          switchingLabels,
          (System_Predicate_T__o *)v58,
          (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *switchingTargets; // x0
  int32_t switchingIndex; // w20
  int32_t v15; // w20
  int32_t v16; // w21
  __int64 v17; // x1
  Il2CppObject *Item; // x22
  __int64 v19; // x1
  Il2CppObject *v20; // x22

  if ( (byte_4B12768 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, isSwitch, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B12768 = 1;
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
         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__) )
  {
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    if ( !switchingTargets
      || (switchingIndex = this->fields.switchingIndex,
          (switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             switchingTargets,
                                                                             0,
                                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__)) == 0LL) )
    {
LABEL_37:
      sub_1BCAA3C(switchingTargets, isSwitch);
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
  v15 = 0;
  while ( v15 < switchingTargets->fields._size )
  {
    v16 = 0;
    while ( 1 )
    {
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v15,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      if ( v16 >= switchingTargets->fields._size )
        break;
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      if ( !switchingTargets )
        goto LABEL_37;
      switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        switchingTargets,
                                                                        v15,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
      if ( !switchingTargets )
        goto LABEL_37;
      Item = System_Collections_Generic_List_object___get_Item(
               switchingTargets,
               v16,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
      {
        switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
        if ( !switchingTargets )
          goto LABEL_37;
        switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          switchingTargets,
                                                                          v15,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
        if ( !switchingTargets )
          goto LABEL_37;
        v20 = System_Collections_Generic_List_object___get_Item(
                switchingTargets,
                v16,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
        {
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v15,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v16,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v16 == this->fields.switchingIndex,
            0LL);
          switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingLabels;
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v15,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_GameObject___get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          switchingTargets = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            switchingTargets,
                                                                            v16,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !switchingTargets )
            goto LABEL_37;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)switchingTargets,
            v16 == this->fields.switchingIndex,
            0LL);
        }
      }
      switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
      ++v16;
      if ( !switchingTargets )
        goto LABEL_37;
    }
    switchingTargets = (System_Collections_Generic_List_object__o *)this->fields.switchingTargets;
    ++v15;
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_6:
    sub_1BCAA3C(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w20
  __int64 v17; // x1
  Il2CppObject *Item; // x21
  Il2CppObject *v19; // x0

  if ( (byte_4B12764 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12764 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_14:
      sub_1BCAA3C(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70140136(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, 0LL, v10, v11, v12, v13, v14, v15);
    monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
    if ( monoBehaviour )
    {
      v16 = 0;
      while ( v16 < SLODWORD(monoBehaviour->fields.m_CancellationTokenSource) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)monoBehaviour,
                 v16,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
          if ( !monoBehaviour )
            goto LABEL_14;
          v19 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)monoBehaviour,
                  v16,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          TweenAlpha__Begin((UnityEngine_GameObject_o *)v19, 0.0, 1.0, 0LL);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)this->fields.tweenTargets;
        ++v16;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12766 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, method, v2);
    byte_4B12766 = 1;
  }
  v5 = sub_1BCAA2C(ShopNoticeTween__TweenLoop_d__14_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v18; // x21
  PartyOrganizationUtility_o *p_loopWaitOnShow_5__2; // x0
  int64_t v20; // x1
  bool v21; // zf
  float v22; // s0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  int64_t v24; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  unsigned __int64 v32; // x22
  __int64 v33; // x1
  Il2CppObject *Item; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  unsigned int *v41; // x27
  unsigned int *v42; // x0
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v50; // x23
  unsigned int *v51; // x0
  unsigned int *v52; // x8
  __int64 v53; // x8
  PartyOrganizationUtility_o *v54; // x19
  int v55; // w8
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t loopWaitOnShow_5__2; // x1
  __int64 v59; // x0

  v8 = this;
  if ( (byte_4B1276A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&TweenAlpha___TypeInfo, v13, v14);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v15, v16);
    byte_4B1276A = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v18, 3.0, 0LL);
      v8->fields._loopWaitOnShow_5__2 = v18;
      p_loopWaitOnShow_5__2 = (PartyOrganizationUtility_o *)&v8->fields._loopWaitOnShow_5__2;
      v20 = (int64_t)v18;
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
    v20 = 0LL;
LABEL_16:
    sub_1BCA784(p_loopWaitOnShow_5__2, v20, (int64_t)v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
LABEL_38:
      sub_1BCAA3C(this, method);
LABEL_17:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    v24 = sub_1BCA888(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v24;
    p_tweenAlphas_5__3 = (unsigned int **)&v8->fields._tweenAlphas_5__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._tweenAlphas_5__3, v24, v26, v27, v28, v29, v30, v31);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
    if ( !this )
      goto LABEL_38;
    v32 = 0LL;
    while ( (__int64)v32 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v32,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Item,
                                                     0LL,
                                                     0LL);
      v41 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_38;
        if ( v32 >= v41[6] )
          goto LABEL_47;
        v42 = &v41[2 * v32];
        *((_QWORD *)v42 + 4) = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 8), 0LL, v35, v36, v37, v38, v39, v40);
      }
      else
      {
        this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
        if ( !this )
          goto LABEL_38;
        v43 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this,
                v32,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       (UnityEngine_GameObject_o *)v43,
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v41 )
          goto LABEL_38;
        v50 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
          if ( !this )
          {
            v59 = sub_1BCAA60();
            sub_1BCA908(v59, 0LL);
          }
        }
        if ( v32 >= v41[6] )
          goto LABEL_47;
        v51 = &v41[2 * v32];
        *((_QWORD *)v51 + 4) = v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 8), (int64_t)v50, v44, v45, v46, v47, v48, v49);
        v52 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_38;
        if ( v32 >= v52[6] )
LABEL_47:
          sub_1BCAA44(this, method);
        v53 = *(_QWORD *)&v52[2 * v32 + 8];
        if ( !v53 )
          goto LABEL_38;
        *(_DWORD *)(v53 + 32) = 6;
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)_4__this->fields.tweenTargets;
      ++v32;
      if ( !this )
        goto LABEL_38;
    }
LABEL_8:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled((ShopNoticeTween_o *)this, v8->fields._tweenAlphas_5__3, v2) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v21 = _4__this->fields.to == 1.0;
    v22 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v22 = 1.0;
    _4__this->fields.to = v22;
    if ( v21 )
    {
      loopWaitOnShow_5__2 = (int64_t)v8->fields._loopWaitOnShow_5__2;
      v8->fields.__2__current = (Il2CppObject *)loopWaitOnShow_5__2;
      v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v54, loopWaitOnShow_5__2, (int64_t)v2, v3, v4, v5, v6, v7);
      v55 = 3;
      goto LABEL_46;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v8->fields.__2__current = 0LL;
  v54 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v54, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  v55 = 2;
LABEL_46:
  *(_DWORD *)&v54[-1].fields._IsQuestStartMenuMode_k__BackingField = v55;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v6; // x1
  bool v7; // w20
  UnityEngine_Object_o *v8; // x21

  if ( (byte_4B12769 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, t, method);
    byte_4B12769 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, t);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL);
  if ( v7 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
      TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  }
  return v7;
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