void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x19
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B12AFF & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, v1, v2);
    sub_1BCA7E0(&SupportSelectItemDraw_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_20312/*"icon_class1002"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20310/*"icon_class007"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20309/*"icon_class006"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20307/*"icon_class004"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20304/*"icon_class001"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20311/*"icon_class1001"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20305/*"icon_class002"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_20308/*"icon_class005"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20306/*"icon_class003"*/, v21, v22);
    byte_4B12AFF = 1;
  }
  v23 = sub_1BCA888(string___TypeInfo, 9LL);
  if ( !v23 )
    sub_1BCAA3C(0LL, v24);
  v31 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_14;
  v32 = StringLiteral_20311/*"icon_class1001"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_20311/*"icon_class1001"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), v32, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_14;
  v39 = StringLiteral_20304/*"icon_class001"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_20304/*"icon_class001"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v31 + 24) <= 2u )
    goto LABEL_14;
  v46 = StringLiteral_20305/*"icon_class002"*/;
  *(_QWORD *)(v31 + 48) = StringLiteral_20305/*"icon_class002"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 48), v46, v40, v41, v42, v43, v44, v45);
  if ( *(_DWORD *)(v31 + 24) <= 3u )
    goto LABEL_14;
  v53 = StringLiteral_20306/*"icon_class003"*/;
  *(_QWORD *)(v31 + 56) = StringLiteral_20306/*"icon_class003"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 56), v53, v47, v48, v49, v50, v51, v52);
  if ( *(_DWORD *)(v31 + 24) <= 4u )
    goto LABEL_14;
  v60 = StringLiteral_20307/*"icon_class004"*/;
  *(_QWORD *)(v31 + 64) = StringLiteral_20307/*"icon_class004"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 64), v60, v54, v55, v56, v57, v58, v59);
  if ( *(_DWORD *)(v31 + 24) <= 5u )
    goto LABEL_14;
  v67 = StringLiteral_20308/*"icon_class005"*/;
  *(_QWORD *)(v31 + 72) = StringLiteral_20308/*"icon_class005"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 72), v67, v61, v62, v63, v64, v65, v66);
  if ( *(_DWORD *)(v31 + 24) <= 6u
    || (v74 = StringLiteral_20309/*"icon_class006"*/,
        *(_QWORD *)(v31 + 80) = StringLiteral_20309/*"icon_class006"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 80), v74, v68, v69, v70, v71, v72, v73),
        *(_DWORD *)(v31 + 24) <= 7u)
    || (v81 = StringLiteral_20310/*"icon_class007"*/,
        *(_QWORD *)(v31 + 88) = StringLiteral_20310/*"icon_class007"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 88), v81, v75, v76, v77, v78, v79, v80),
        *(_DWORD *)(v31 + 24) <= 8u) )
  {
LABEL_14:
    sub_1BCAA44(v23, v24);
  }
  v88 = StringLiteral_20312/*"icon_class1002"*/;
  *(_QWORD *)(v31 + 96) = StringLiteral_20312/*"icon_class1002"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 96), v88, v82, v83, v84, v85, v86, v87);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SupportSelectItemDraw_TypeInfo->static_fields,
    v31,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void __fastcall SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Component_o *v24; // x21
  __int64 methodPtr_low; // x9
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x23
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x19
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B12AFE & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    byte_4B12AFE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v11);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                       Enumerator,
                                       *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v22);
LABEL_37:
      sub_1BCAA3C(v22, v23);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1BCAA3C(0LL, v26);
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Inequality(gameObject, v30, 0LL) )
    {
      v31 = UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( !v31 )
        sub_1BCAA3C(0LL, v32);
      UnityEngine_GameObject__SetActive(v31, 0, 0LL);
    }
  }
  v33 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v34 = *(_QWORD *)v33;
    v35 = v33;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_32;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_32:
      v38 = sub_1C1C7C0(v33, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v9; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UISprite_o *v28; // x8
  struct UIAtlas_o *v29; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct UISprite_o *v37; // x8
  struct UIAtlas_o *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12AF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12AF6 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v19 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v19 )
      goto LABEL_37;
    mAtlas = v19->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
      (int64_t)mAtlas,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_37;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v28 = this->fields.baseSprite;
    if ( !v28 )
      goto LABEL_37;
    v29 = v28->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v29;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)v29,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v37 = this->fields.base2Sprite;
    if ( v37 )
    {
      v38 = v37->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v38;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v38,
        (int64_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      goto LABEL_36;
    }
LABEL_37:
    sub_1BCAA3C(transform, v9);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v31);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v42, v43, v44, v45, v46, v47, v48);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4B12AF7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12AF7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1BCAA3C(gameObject, v5);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v5);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4B12AF9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12AF9 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B12AFC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flag, method);
    byte_4B12AFC = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetEquipAlpha(
        SupportSelectItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  __int64 v3; // x2
  long double v4; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v7; // x1
  struct UIWidget_o *v8; // x0

  v4 = *(long double *)&alpha;
  if ( (byte_4B12AFD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B12AFD = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v8 = this->fields.equipRootObj;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v8->klass->vtable._8_set_alpha.method)(
      v8,
      v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantData_o *v8; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 gameObject; // x0
  signed __int64 v93; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v96; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // x21
  __int64 v102; // x23
  __int64 v103; // x24
  Il2CppObject *v104; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v109; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v111; // x25
  int32_t atk; // w8
  int hp; // w8
  char v114; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v116; // x8
  __int64 v117; // x1
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v119; // x1
  UISprite_o *v120; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  __int64 v123; // x1
  UISprite_o *v124; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  __int64 v132; // x1
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  System_Object_array *v137; // x19
  bool v138; // w22
  UserServantEntity_o *v139; // x23
  int32_t v140; // w8
  int v141; // w8
  int adjustAtk; // w9
  int32_t v143; // w0
  int32_t exceedCount; // w22
  int32_t v145; // w23
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  __int64 v149; // x1
  bool EventUpVal_41232872; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v152; // x24
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  System_Collections_Generic_List_object__o *v156; // x26
  struct EventUpValSetupInfo_o *v157; // x8
  struct System_Int32_array *v158; // x20
  __int64 v159; // x8
  unsigned __int64 v160; // x29
  int32_t v161; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v163; // x0
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x3
  int32_t eventSvtPoint; // w21
  __int64 v168; // x24
  __int64 v169; // x25
  int32_t v170; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x3
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v176; // x21
  EventPersonalMargeUpValInfo_o *v177; // x27
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  __int64 v184; // x8
  __int64 v185; // x23
  unsigned __int64 v186; // x21
  struct System_Object_array *items; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  int v191; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v194; // w29
  SupportServantData_o *v195; // x21
  int v196; // w20
  QuestRestrictionInfo_o *v197; // x8
  int32_t v198; // w21
  __int64 v199; // x1
  int32_t v200; // w27
  QuestRestrictionInfo_o *v201; // x22
  __int64 v202; // x23
  __int64 v203; // x24
  int32_t v204; // w0
  int32_t v205; // w23
  int32_t v206; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v208; // w9
  int32_t v209; // w0
  __int64 v210; // x1
  Il2CppObject v211; // q1
  int64_t v212; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v215; // x25
  bool EventUpVal_40938664; // w19
  __int64 v217; // x1
  Il2CppObject *v218; // x29
  Il2CppObject *v219; // x28
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x3
  System_Collections_Generic_List_object__o *v223; // x22
  struct EventUpValSetupInfo_o *v224; // x8
  struct System_Int32_array *v225; // x20
  __int64 v226; // x8
  unsigned __int64 v227; // x21
  int32_t v228; // w23
  __int64 v229; // x1
  __int64 v230; // x2
  __int64 v231; // x3
  __int128 v232; // q0
  int64_t v233; // x24
  int32_t v234; // w4
  int32_t BuddyPoint; // w27
  int32_t v236; // w0
  EventServantPointRankEntity_o *v237; // x0
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x3
  int32_t v241; // w25
  EventMargeItemUpValInfo_o *v242; // x24
  EventPersonalMargeUpValInfo_o *v243; // x27
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  __int64 v250; // x8
  __int64 v251; // x23
  unsigned __int64 v252; // x19
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  Il2CppClass **v256; // x0
  __int64 v257; // x1
  UnityEngine_Object_o *v258; // x21
  UnityEngine_Object_o *v259; // x21
  __int64 v260; // x1
  UILabel_o *v261; // x21
  UnityEngine_Object_o *v262; // x21
  int32_t v263; // w19
  __int64 v264; // x1
  int32_t v265; // w21
  _BOOL4 v266; // w26
  __int64 v267; // x1
  System_String_o *Icon_38416824; // x21
  int v269; // w29
  _BOOL4 v270; // w25
  int v271; // w24
  int32_t RarityIcon; // w22
  int32_t v273; // w22
  UISprite_o *v274; // x23
  float v275; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v278; // x21
  __int64 v279; // x1
  SkillListTreasureDeviceComponent_o *v280; // x21
  SkillInfo_array *v281; // x22
  int64_t v282; // x2
  int32_t v283; // w3
  System_String_o *v284; // x4
  BattleSetupInfo_o *v285; // x5
  FollowerInfo_o *v286; // x6
  PartyListViewItem_o *v287; // x7
  __int64 v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  __int64 v291; // x8
  UnityEngine_Object_o *v292; // x21
  __int64 v293; // x1
  AppendSkillListComponent_o *v294; // x21
  SkillInfo_array *v295; // x22
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  __int64 v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  __int64 v305; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  __int64 v307; // x1
  struct System_Collections_Generic_List_UIWidget__o *v308; // x0
  SwitchUIWidgetComponent_o *v309; // x21
  UnityEngine_Object_o *v310; // x21
  UnityEngine_Object_o *v311; // x21
  float v312; // s1
  float v313; // s2
  float v314; // s0
  float v315; // s3
  UILabel_o *v316; // x21
  UnityEngine_Object_o *v317; // x21
  float v318; // s1
  float v319; // s2
  float v320; // s0
  float v321; // s3
  UILabel_o *v322; // x21
  UnityEngine_Object_o *v323; // x21
  __int64 v324; // x1
  UISprite_o *v325; // x22
  UIAtlas_o *v326; // x21
  UnityEngine_Object_o *v327; // x21
  UISprite_o *v328; // x22
  UIAtlas_o *v329; // x21
  __int64 v330; // x1
  const MethodInfo *v331; // x4
  UnityEngine_Object_o *v332; // x21
  System_String_o *v333; // x0
  System_String_o *v334; // x1
  bool v335; // w2
  SupportSelectItemDraw_o *v336; // x0
  bool v337; // w3
  __int64 v338; // x1
  UnityEngine_Object_o *v339; // x21
  bool v340; // w1
  System_String_o *v341; // x0
  const MethodInfo *v342; // x3
  System_String_o *v343; // x21
  Il2CppObject *v344; // x0
  UnityEngine_Object_o *v345; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v347; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v350; // x25
  __int64 v351; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v355; // x8
  __int64 v356; // x2
  __int64 v357; // x3
  EventCampaignEntity_o *v358; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v360; // w10
  System_Collections_Generic_List_object__o *v361; // x0
  System_Collections_Generic_List_object__o *v362; // x24
  __int64 v363; // x1
  __int64 v364; // x2
  __int64 v365; // x3
  __int64 v366; // x1
  UISprite_o *v367; // x21
  void *v368; // x23
  Il2CppClass *v369; // x24
  __int64 v370; // x1
  int32_t v371; // w23
  __int64 v372; // x1
  UnityEngine_Object_o *v373; // x21
  void *v374; // x21
  Il2CppClass *v375; // x23
  int v376; // w21
  EventMargeItemUpValInfo_o *v377; // x25
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  struct System_Object_array *v384; // x8
  _QWORD *v385; // x9
  __int64 v386; // x10
  Il2CppClass **v387; // x0
  __int64 v388; // x1
  UISprite_o *equipSprite; // x21
  __int64 v390; // x23
  __int64 v391; // x24
  __int64 v392; // x1
  int32_t v393; // w23
  __int64 v394; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  System_Object_array *v396; // x21
  int limitCount; // w19
  __int64 v398; // x1
  UnityEngine_Object_o *v399; // x21
  UnityEngine_Object_o *v400; // x21
  struct ServantLeaderInfo_o *v401; // x8
  __int64 v402; // x21
  __int64 v403; // x22
  int32_t v404; // w21
  int32_t v405; // w0
  UnityEngine_Object_o *v406; // x21
  bool v407; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v409; // x21
  __int64 v410; // x22
  int32_t v411; // w3
  int32_t equipSvtId; // w4
  __int64 v413; // x1
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  _BOOL4 v418; // [xsp+10h] [xbp-1B0h]
  bool v419; // [xsp+14h] [xbp-1ACh]
  int32_t v420; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v421; // [xsp+18h] [xbp-1A8h]
  int32_t v422; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v429; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v431; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v432; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v433; // [xsp+40h] [xbp-180h]
  bool v434; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v438; // [xsp+58h] [xbp-168h]
  int32_t frameType; // [xsp+64h] [xbp-15Ch]
  Il2CppObject *v440; // [xsp+68h] [xbp-158h]
  Il2CppObject *v441; // [xsp+70h] [xbp-150h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+78h] [xbp-148h]
  UserServantEntity_o *v443; // [xsp+78h] [xbp-148h]
  EventCampaignEntity_array *v444; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v445; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v446; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v447; // [xsp+90h] [xbp-130h]
  Il2CppObject *v448; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v449; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v450; // [xsp+A0h] [xbp-120h]
  int v451; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v452; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v454; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v455; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v456; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v458; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v461; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v464; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v465; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v466; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v467; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v468; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v469; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v470; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v471; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v472; // 0:x0.16
  UnityEngine_Vector3_o v473; // 0:s0.4,4:s1.4,8:s2.4

  v8 = supportServantData;
  if ( (byte_4B12AF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, supportServantData, *(_QWORD *)&classPos);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v28, v29);
    sub_1BCA7E0(&DataManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v32, v33);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v36, v37);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v38, v39);
    sub_1BCA7E0(&EventPersonalMargeUpValInfo_TypeInfo, v40, v41);
    sub_1BCA7E0(&int_TypeInfo, v42, v43);
    sub_1BCA7E0(&long___TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424, v60, v61);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v62, v63);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v64, v65);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v66, v67);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68, v69);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v70, v71);
    sub_1BCA7E0(&Rarity_TypeInfo, v72, v73);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v74, v75);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v76, v77);
    sub_1BCA7E0(&SupportSelectItemDraw_TypeInfo, v78, v79);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v80, v81);
    sub_1BCA7E0(&StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v90, v91);
    byte_4B12AF8 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v461 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v458 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_544;
  size = switchSkillUIList->fields._size;
  v96 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v96;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v8 )
    goto LABEL_544;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v8, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
  v444 = eventFriendPoints;
  if ( gameObject )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_544;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_544;
      v101 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v103 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v102 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
      *(_QWORD *)&v464.fields.currentCryptoKey = v103;
      *(_QWORD *)&v464.fields.fakeValue = v102;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v464, 0LL);
      if ( !v101 )
        goto LABEL_544;
      v104 = 0LL;
      v441 = DataMasterBase_object__object__int___GetEntity(
               v101,
               gameObject,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_544;
    v104 = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             gameObject,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v104 )
      goto LABEL_544;
    v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v104[5].klass;
    monitor = v104[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
    *(_QWORD *)&v465.fields.currentCryptoKey = klass;
    *(_QWORD *)&v465.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v465, 0LL);
    if ( !v106 )
      goto LABEL_544;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v106,
                            gameObject,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v104 = 0LL;
  }
  equipTarget1 = 0LL;
  v441 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v445 = 0LL;
    v114 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v445 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v114 = 0;
LABEL_47:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v93);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v116 = **(_QWORD **)(gameObject + 184);
    if ( !v116 )
      goto LABEL_544;
    if ( *(_DWORD *)(v116 + 24) <= (unsigned int)classPos )
      goto LABEL_545;
    if ( !backClassIcon )
      goto LABEL_544;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v116 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v120 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v119);
      AtlasManager__SetFormationBase(v120, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v124 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v123);
      AtlasManager__SetFormationFrameForSupportSelect(v124, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v93);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v132);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_544;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v137 = 0LL;
    v138 = 0;
    if ( v104 )
      goto LABEL_438;
LABEL_466:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( v445 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v391 = *(_QWORD *)&v445->fields.svtId.fields.currentCryptoKey;
      v390 = *(_QWORD *)&v445->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v388);
      *(_QWORD *)&v470.fields.currentCryptoKey = v391;
      *(_QWORD *)&v470.fields.fakeValue = v390;
      v393 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v470, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v392);
      AtlasManager__SetEquipFace(equipSprite, v393, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v394);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        v396 = v137;
        limitCount = v445->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v441 )
            goto LABEL_544;
          v93 = SLODWORD(v441[5].monitor) >= limitCount;
        }
        else
        {
          v93 = 0LL;
        }
        if ( gameObject )
        {
          v137 = v396;
LABEL_493:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v93, 0LL);
          goto LABEL_494;
        }
LABEL_544:
        sub_1BCAA3C(gameObject, v93);
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v399 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v398);
      if ( UnityEngine_Object__op_Inequality(v399, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_544;
        LOBYTE(v93) = 0;
        goto LABEL_493;
      }
    }
    goto LABEL_494;
  }
  v109 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v109,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v449 = (ServantEntity_o *)gameObject;
  v440 = v104;
  svtId = v109;
  v438 = UserServantLeaderEntity;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v8->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v432 = this;
    if ( !servantLeaderInfo )
      goto LABEL_544;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v111 = v449;
    lv[1] = servantLeaderInfo->fields.lv;
    atk = servantLeaderInfo->fields.atk;
    lv[0] = atk;
    if ( equipTarget1 )
    {
      lv[0] = equipTarget1->fields.atk + atk;
      hp = equipTarget1->fields.hp + servantLeaderInfo->fields.hp;
    }
    else
    {
      hp = servantLeaderInfo->fields.hp;
    }
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v461 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v431 = adjustAtk;
    v143 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v145 = v143;
    frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_544;
    strengthStatus = tdInfo->fields.strengthStatus;
    v429 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(servantLeaderInfo, &v458, 0, 0LL);
    eventSetupInfo = v8->fields.eventSetupInfo;
    rarity = v145;
    if ( !eventSetupInfo )
      goto LABEL_171;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_544;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_41232872 = ServantLeaderInfo__getEventUpVal_41232872(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v149);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
      v152 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v156 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                            v153,
                                                            v154,
                                                            v155);
      System_Collections_Generic_List_object____ctor(
        v156,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v157 = v8->fields.eventSetupInfo;
      v450 = v8;
      if ( !v157 )
        goto LABEL_544;
      v158 = v157->fields.eventIdList;
      v446 = (EventServantPointRankMaster_o *)v152;
      v420 = CardImageLimitCount;
      if ( !v158 )
        goto LABEL_544;
      v159 = *(_QWORD *)&v158->max_length;
      if ( (int)v159 >= 1 )
      {
        v160 = 0LL;
        while ( 1 )
        {
          if ( v160 >= (unsigned int)v159 )
            goto LABEL_545;
          v161 = v158->m_Items[v160 + 1];
          questRestrictionInfo = v450->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v161 )
          {
            if ( !Master_object )
              goto LABEL_544;
            v163 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                     v161,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v163
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v163, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v446;
              if ( !v446 )
                goto LABEL_544;
              if ( EventServantPointRankMaster__IsEnableEvent(v446, v161, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v169 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v168 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v164);
                *(_QWORD *)&v466.fields.currentCryptoKey = v169;
                *(_QWORD *)&v466.fields.fakeValue = v168;
                v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v466, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v446, v161, eventSvtPoint, v170, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v111 = v449;
                v176 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v172, v173, v174);
                EventMargeItemUpValInfo___ctor_39609732(v176, v161, 0LL);
                if ( !v176 )
                  goto LABEL_544;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v176,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v156 )
                  goto LABEL_544;
                System_Collections_Generic_List_object___Insert(
                  v156,
                  0,
                  (Il2CppObject *)v176,
                  (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v177 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(
                                                        EventPersonalMargeUpValInfo_TypeInfo,
                                                        v164,
                                                        v165,
                                                        v166);
              EventPersonalMargeUpValInfo___ctor(v177, v161, v111, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_544;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v177 )
                goto LABEL_544;
              EventPersonalMargeUpValInfo__Add(v177, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v177, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v177, 0LL);
                if ( !gameObject )
                  goto LABEL_544;
                v184 = *(_QWORD *)(gameObject + 24);
                v185 = gameObject;
                if ( (int)v184 >= 1 )
                  break;
              }
            }
          }
LABEL_168:
          LODWORD(v159) = v158->max_length;
          if ( (__int64)++v160 >= (int)v159 )
            goto LABEL_169;
        }
        v186 = 0LL;
        while ( v186 < (unsigned int)v184 )
        {
          if ( !v156 )
            goto LABEL_544;
          v93 = *(_QWORD *)(v185 + 32 + 8 * v186);
          items = v156->fields._items;
          v188 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v156->fields._version;
          if ( !items )
            goto LABEL_544;
          v189 = v156->fields._size;
          if ( (unsigned int)v189 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v156,
              (Il2CppObject *)v93,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v190 = &items->obj.klass + v189;
            v156->fields._size = v189 + 1;
            v190[4] = (Il2CppClass *)v93;
            sub_1BCA784((PartyOrganizationUtility_o *)(v190 + 4), v93, v178, v179, v180, v181, v182, v183);
          }
          LODWORD(v184) = *(_DWORD *)(v185 + 24);
          if ( (__int64)++v186 >= (int)v184 )
            goto LABEL_168;
        }
        goto LABEL_545;
      }
LABEL_169:
      if ( !v156 )
        goto LABEL_544;
      v191 = EventUpVal_41232872;
      v8 = v450;
      v109 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v420;
      v447 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v156,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_171:
      v447 = 0LL;
      v191 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             v8->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         v8->fields.questRestrictionInfo,
                                         0LL,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL) )
    {
      v451 = 1;
LABEL_195:
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      this = v432;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      goto LABEL_242;
    }
    v421 = QuestRestriction;
    v194 = CardImageLimitCount;
    v195 = v8;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    v196 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    if ( v196 < 1 )
    {
      v451 = 0;
      v8 = v195;
    }
    else
    {
      v197 = v195->fields.questRestrictionInfo;
      if ( !v197 )
        goto LABEL_544;
      v8 = v195;
      v198 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(v197, v198, 0LL) )
      {
        v418 = UniqueSvtRestriction;
        v200 = exceedCount;
        v201 = v8->fields.questRestrictionInfo;
        v203 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v202 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v199);
        *(_QWORD *)&v467.fields.currentCryptoKey = v203;
        *(_QWORD *)&v467.fields.fakeValue = v202;
        v204 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v467, 0LL);
        v205 = servantLeaderInfo->fields.limitCount;
        v206 = v204;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v201 )
          goto LABEL_544;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v201,
                                              v206,
                                              v205,
                                              gameObject,
                                              v198,
                                              1,
                                              0LL);
        v109 = svtId;
        UniqueSvtRestriction = v418;
        exceedCount = v200;
        v451 = IsRestrictionServantIndividuality;
        goto LABEL_194;
      }
      v451 = 0;
    }
    v109 = svtId;
LABEL_194:
    CardImageLimitCount = v194;
    QuestRestriction = v421;
    goto LABEL_195;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v139 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v140 = *(_DWORD *)(gameObject + 264);
  lv[0] = v140;
  if ( v104 )
  {
    lv[0] = LODWORD(v104[16].monitor) + v140;
    v141 = HIDWORD(v104[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v141 = *(_DWORD *)(gameObject + 268);
  }
  v208 = *(_DWORD *)(gameObject + 272);
  v461 = v141;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v431 = v208;
  v209 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v139->fields.exceedCount;
  rarity = v209;
  frameType = UserServantEntity__getFrameType(v139, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v139, 0, 0LL);
  UserServantEntity__getSkillInfo(v139, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v139, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_544;
  strengthStatus = tdInfo->fields.strengthStatus;
  v429 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v443 = v139;
  UserServantEntity__GetAppendPassiveSkillInfo_40963832(v139, &v458, 0LL);
  if ( v8->fields.eventSetupInfo )
  {
    v422 = CardImageLimitCount;
    if ( v104 )
    {
      v211 = v104[2];
      *(Il2CppObject *)&v456.fields.currentCryptoKey = v104[1];
      *(Il2CppObject *)&v456.fields.fakeValue = v211;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v210);
      v455 = v456;
      v212 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v455, 0LL);
    }
    else
    {
      v212 = -1LL;
    }
    v215 = v449;
    gameObject = sub_1BCA888(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_545;
    *(_QWORD *)(gameObject + 32) = v212;
    EventUpVal_40938664 = UserServantEntity__getEventUpVal_40938664(
                            v139,
                            &eventUpVallInfo,
                            v8->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    cardParamsb = exceedCount;
    v433 = this;
    v218 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v217);
    v219 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v448 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v223 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                          v220,
                                                          v221,
                                                          v222);
    System_Collections_Generic_List_object____ctor(
      v223,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v224 = v8->fields.eventSetupInfo;
    v452 = v8;
    if ( !v224 )
      goto LABEL_544;
    v225 = v224->fields.eventIdList;
    v419 = EventUpVal_40938664;
    if ( !v225 )
      goto LABEL_544;
    v226 = *(_QWORD *)&v225->max_length;
    if ( (int)v226 >= 1 )
    {
      v227 = 0LL;
      codeIdsa = (System_Int32_array *)&v139->fields.userId;
      while ( 1 )
      {
        if ( v227 >= (unsigned int)v226 )
          goto LABEL_545;
        if ( !v218 )
          goto LABEL_544;
        v228 = v225->m_Items[v227 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v218,
                                v228,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v219 )
            goto LABEL_544;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v219, v228, 0LL) )
          {
            v232 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v456.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v456.fields.fakeValue = v232;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v229);
            v454 = v456;
            v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v454, 0LL);
            v234 = UserServantEntity__getSvtId(v443, 0LL);
            gameObject = (__int64)v448;
            if ( !v448 )
              goto LABEL_544;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v448,
                   &entity,
                   v233,
                   v228,
                   v234,
                   0LL) )
            {
              gameObject = (__int64)entity;
              if ( !entity )
                goto LABEL_544;
              BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
            }
            else
            {
              BuddyPoint = 0;
            }
            v236 = UserServantEntity__getSvtId(v443, 0LL);
            v237 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v219,
                     v228,
                     BuddyPoint,
                     v236,
                     0LL);
            v241 = v237 ? v237->fields.svtPointRank : 0;
            v242 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v238, v239, v240);
            EventMargeItemUpValInfo___ctor_39609732(v242, v228, 0LL);
            if ( !v242 )
              goto LABEL_544;
            EventMargeItemUpValInfo__SetServantPointInfo(v242, BuddyPoint, v241, 0, 0LL);
            if ( !v223 )
              goto LABEL_544;
            System_Collections_Generic_List_object___Insert(
              v223,
              0,
              (Il2CppObject *)v242,
              (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v215 = v449;
          }
          v243 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(EventPersonalMargeUpValInfo_TypeInfo, v229, v230, v231);
          EventPersonalMargeUpValInfo___ctor(v243, v228, v215, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_544;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v243 )
            goto LABEL_544;
          EventPersonalMargeUpValInfo__Add(v243, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v243, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v243, 0LL);
            if ( !gameObject )
              goto LABEL_544;
            v250 = *(_QWORD *)(gameObject + 24);
            v251 = gameObject;
            if ( (int)v250 >= 1 )
              break;
          }
        }
LABEL_238:
        LODWORD(v226) = v225->max_length;
        if ( (__int64)++v227 >= (int)v226 )
          goto LABEL_239;
      }
      v252 = 0LL;
      while ( v252 < (unsigned int)v250 )
      {
        if ( !v223 )
          goto LABEL_544;
        v93 = *(_QWORD *)(v251 + 32 + 8 * v252);
        v253 = v223->fields._items;
        v254 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v223->fields._version;
        if ( !v253 )
          goto LABEL_544;
        v255 = v223->fields._size;
        if ( (unsigned int)v255 >= v253->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v223,
            (Il2CppObject *)v93,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
        }
        else
        {
          v256 = &v253->obj.klass + v255;
          v223->fields._size = v255 + 1;
          v256[4] = (Il2CppClass *)v93;
          sub_1BCA784((PartyOrganizationUtility_o *)(v256 + 4), v93, v244, v245, v246, v247, v248, v249);
        }
        LODWORD(v250) = *(_DWORD *)(v251 + 24);
        if ( (__int64)++v252 >= (int)v250 )
          goto LABEL_238;
      }
LABEL_545:
      sub_1BCAA44(gameObject, v93);
    }
LABEL_239:
    if ( !v223 )
      goto LABEL_544;
    v191 = v419;
    v447 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v223,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v433;
    v8 = v452;
    v109 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v422;
  }
  else
  {
    v447 = 0LL;
    v191 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v443, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(v443, v8->fields.questRestrictionInfo, 2, 0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v443, v8->fields.questRestrictionInfo, 0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v443,
                                       v8->fields.questRestrictionInfo,
                                       0LL);
  v451 = 0;
  cardParamsa = 0LL;
LABEL_242:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v109,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_544;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v109, gameObject, 0LL, 0LL);
  v258 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v257);
  v137 = (System_Object_array *)v447;
  if ( UnityEngine_Object__op_Inequality(v258, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, frameType, 0LL);
    }
  }
  v259 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v259, 0LL, 0LL) )
  {
    v261 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v261 )
      goto LABEL_544;
    UILabel__set_text(v261, (System_String_o *)gameObject, 0LL);
  }
  v262 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v260);
  if ( UnityEngine_Object__op_Inequality(v262, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v434 = IsDataLost;
    v263 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v265 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v264);
    v266 = QuestRestriction;
    Icon_38416824 = Rarity__getIcon_38416824(rarity, exceedCount, v265, 0LL);
    v269 = v191;
    if ( exceedCount < 1 )
    {
      v270 = UniqueSvtRestriction;
      v271 = exceedCount;
      v273 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v267);
      v270 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v271 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v273 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v274 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v267);
    if ( v273 >= 3 )
    {
      AtlasManager__SetEventSprite(v274, Icon_38416824, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v274, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38416824, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v275 = v271 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_544;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v473.fields.x = v275;
    v473.fields.y = y;
    v473.fields.z = z;
    UniqueSvtRestriction = v270;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v473, 0LL);
    v191 = v269;
    QuestRestriction = v266;
    TimesToRestart = v263;
    v137 = (System_Object_array *)v447;
    IsDataLost = v434;
  }
  v278 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v280 = this->fields.skillListTreasureDevice;
    v281 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v279);
    gameObject = (__int64)LocalizationManager__GetLevelList_39112132(v281, 0LL);
    if ( !v280 )
      goto LABEL_544;
    SkillListTreasureDeviceComponent__Set(
      v280,
      (System_String_o *)gameObject,
      v429,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v93 = (signed __int64)this->fields.skillInfoUiWidget;
      v288 = *(_QWORD *)(gameObject + 16);
      v289 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v288 )
        goto LABEL_544;
      v290 = *(int *)(gameObject + 24);
      if ( (unsigned int)v290 >= *(_DWORD *)(v288 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v93,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
      }
      else
      {
        v291 = v288 + 8 * v290;
        *(_DWORD *)(gameObject + 24) = v290 + 1;
        *(_QWORD *)(v291 + 32) = v93;
        sub_1BCA784((PartyOrganizationUtility_o *)(v291 + 32), v93, v282, v283, v284, v285, v286, v287);
      }
    }
  }
  v292 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v292, 0LL, 0LL) )
  {
    if ( v458 && *(_QWORD *)&v458->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v294 = this->fields.appendSkillList;
      v295 = v458;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v293);
      gameObject = (__int64)LocalizationManager__GetLevelList_39112132(v295, 0LL);
      if ( !v294 )
        goto LABEL_544;
      AppendSkillListComponent__Set(v294, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v93 = (signed __int64)this->fields.appendSkillInfoUiWidget;
        v302 = *(_QWORD *)(gameObject + 16);
        v303 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v302 )
          goto LABEL_544;
        v304 = *(int *)(gameObject + 24);
        if ( (unsigned int)v304 >= *(_DWORD *)(v302 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v93,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
        }
        else
        {
          v305 = v302 + 8 * v304;
          *(_DWORD *)(gameObject + 24) = v304 + 1;
          *(_QWORD *)(v305 + 32) = v93;
          sub_1BCA784((PartyOrganizationUtility_o *)(v305 + 32), v93, v296, v297, v298, v299, v300, v301);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v308 = this->fields.switchSkillUIList;
    if ( v308 )
    {
      v309 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v308,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v309 )
        goto LABEL_544;
      SwitchUIWidgetComponent__Set(v309, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v310 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v307);
  if ( UnityEngine_Object__op_Inequality(v310, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_544;
    if ( v8->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_38924900(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_38925144(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v311 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v311, 0LL, 0LL) )
  {
    v312 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v431 <= 0 )
      v313 = 1.0;
    else
      v313 = 0.015686;
    if ( v431 <= 0 )
      v312 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v314 = 1.0;
    v315 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v312 - 1), 0LL);
    v316 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_63206828((int32_t)lv, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
    if ( !v316 )
      goto LABEL_544;
    UILabel__set_text(v316, (System_String_o *)gameObject, 0LL);
  }
  v317 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v317, 0LL, 0LL) )
  {
    v318 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v319 = 1.0;
    else
      v319 = 0.015686;
    if ( adjustHp <= 0 )
      v318 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v320 = 1.0;
    v321 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v318 - 1), 0LL);
    v322 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_63206828((int32_t)&v461, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
    if ( !v322 )
      goto LABEL_544;
    UILabel__set_text(v322, (System_String_o *)gameObject, 0LL);
  }
  v323 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v323, 0LL, 0LL) )
  {
    v325 = this->fields.baseSprite;
    v326 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v324);
    AtlasManager__SetFormationBase(v325, frameType, v326, 0, 0LL);
  }
  v327 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v324);
  if ( UnityEngine_Object__op_Inequality(v327, 0LL, 0LL) )
  {
    v328 = this->fields.base2Sprite;
    v329 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v93);
    AtlasManager__SetFormationFrameForSupportSelect(v328, frameType, v329, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v451 | QuestRestriction) & 1) != 0 )
  {
    v332 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v438;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v330);
    if ( UnityEngine_Object__op_Inequality(v332, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
    v333 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_375;
  }
  UserServantLeaderEntity = v438;
  if ( !v8->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v449, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v330);
    if ( TutorialFlag__Get_38402052(126, 0LL) )
    {
      v339 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v330);
      if ( !UnityEngine_Object__op_Inequality(v339, 0LL, 0LL) )
        goto LABEL_406;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      v340 = 1;
LABEL_405:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v340, 0LL);
LABEL_406:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v93);
      goto LABEL_407;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v337 = 1;
      v336 = this;
      v335 = 0;
      v334 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_376;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v330);
      v343 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v456.fields.currentCryptoKey) = TimesToRestart;
      v344 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v456);
      v333 = System_String__Format(v343, v344, 0LL);
LABEL_375:
      v334 = v333;
      v335 = 1;
      v336 = this;
      v337 = 0;
LABEL_376:
      SupportSelectItemDraw__SetMaskMessage(v336, v334, v335, v337, v331);
      goto LABEL_407;
    }
    v345 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v330);
    if ( !UnityEngine_Object__op_Inequality(v345, 0LL, 0LL) )
      goto LABEL_406;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v340 = 0;
    goto LABEL_405;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v330);
  v341 = LocalizationManager__Get((System_String_o *)StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v341, 1, v342);
LABEL_407:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v338);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v347 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
    if ( UnityEngine_Object__op_Inequality(v347, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v114 = 0;
  v138 = v191 != 0;
  if ( !v444 )
    goto LABEL_465;
  v104 = v440;
  if ( (gameObject & 1) == 0 )
    goto LABEL_437;
  max_length = v444->max_length;
  if ( max_length < 1 )
  {
LABEL_436:
    v114 = 0;
LABEL_437:
    if ( v104 )
      goto LABEL_438;
    goto LABEL_466;
  }
  v350 = v8;
  v351 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v444->m_Items;
  do
  {
    if ( (unsigned int)v351 >= max_length )
      goto LABEL_545;
    v355 = m_Items[v351];
    if ( !v355 )
      goto LABEL_544;
    gameObject = System_Array__IndexOf_int_(
                   v355->fields.targetIds,
                   svtId,
                   (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
    max_length = v444->max_length;
    if ( (unsigned int)v351 >= max_length )
      goto LABEL_545;
    v358 = m_Items[v351];
    if ( !v358 )
      goto LABEL_544;
    targetIds = v358->fields.targetIds;
    if ( targetIds )
      v360 = targetIds->max_length == 0;
    else
      v360 = 1;
    if ( (v360 || (int)gameObject >= 0) && value < v358->fields.value )
    {
      eventId = v358->fields.eventId;
      value = v358->fields.value;
    }
    ++v351;
  }
  while ( (int)v351 < max_length );
  v8 = v350;
  if ( value < 1 )
  {
    v104 = v440;
    v137 = (System_Object_array *)v447;
    goto LABEL_436;
  }
  v361 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                        v93,
                                                        v356,
                                                        v357);
  v362 = v361;
  if ( v447 )
    System_Collections_Generic_List_object____ctor_56235344(
      v361,
      (System_Collections_Generic_IEnumerable_T__o *)v447,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424);
  else
    System_Collections_Generic_List_object____ctor(
      v361,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v377 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v363, v364, v365);
  EventMargeItemUpValInfo___ctor_39609652(v377, eventId, value, 0LL);
  if ( !v362 )
    goto LABEL_544;
  v384 = v362->fields._items;
  v385 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v362->fields._version;
  if ( !v384 )
    goto LABEL_544;
  v386 = v362->fields._size;
  if ( (unsigned int)v386 >= v384->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v362,
      (Il2CppObject *)v377,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v385[4] + 192LL) + 112LL));
  }
  else
  {
    v387 = &v384->obj.klass + v386;
    v362->fields._size = v386 + 1;
    v387[4] = (Il2CppClass *)v377;
    sub_1BCA784((PartyOrganizationUtility_o *)(v387 + 4), (int64_t)v377, v378, v379, v380, v381, v382, v383);
  }
  v137 = System_Collections_Generic_List_object___ToArray(
           v362,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  v114 = 0;
LABEL_465:
  v104 = v440;
  if ( !v440 )
    goto LABEL_466;
LABEL_438:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v367 = (UISprite_o *)this->fields.equipSprite;
  v369 = v104[5].klass;
  v368 = v104[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v366);
  *(_QWORD *)&v468.fields.currentCryptoKey = v369;
  *(_QWORD *)&v468.fields.fakeValue = v368;
  v371 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v468, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v370);
  AtlasManager__SetEquipFace(v367, v371, 0LL);
  v373 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v372);
  if ( UnityEngine_Object__op_Inequality(v373, 0LL, 0LL) )
  {
    v375 = v104[6].klass;
    v374 = v104[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
    *(_QWORD *)&v469.fields.currentCryptoKey = v375;
    *(_QWORD *)&v469.fields.fakeValue = v374;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v469, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v376 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v376 >= 4 )
      {
        if ( !v441 )
          goto LABEL_544;
        v93 = SLODWORD(v441[5].monitor) >= v376;
      }
      else
      {
        v93 = 0LL;
      }
      if ( gameObject )
        goto LABEL_493;
    }
    goto LABEL_544;
  }
LABEL_494:
  v400 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v400, 0LL, 0LL) )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( (v114 & 1) == 0 )
      {
        v401 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v401 )
        {
          v403 = *(_QWORD *)&v401->fields.svtId.fields.currentCryptoKey;
          v402 = *(_QWORD *)&v401->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
          *(_QWORD *)&v471.fields.currentCryptoKey = v403;
          *(_QWORD *)&v471.fields.fakeValue = v402;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v471, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_544;
          v404 = gameObject;
          v405 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_515:
          v411 = v405;
          goto LABEL_517;
        }
      }
    }
    else if ( (v114 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v410 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v409 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
        *(_QWORD *)&v472.fields.currentCryptoKey = v410;
        *(_QWORD *)&v472.fields.fakeValue = v409;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v472, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_544;
        v404 = gameObject;
        v405 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_515;
      }
    }
    v411 = -1;
    v404 = -1;
LABEL_517:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_544;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v137,
      v404,
      v411,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v413);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_544;
      v407 = 0;
      goto LABEL_526;
    }
    goto LABEL_527;
  }
  v406 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(v406, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_544;
    v407 = v138;
LABEL_526:
    ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)gameObject, v407, 0LL);
  }
LABEL_527:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        pushUserServantId = v8->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( UserServantLeaderEntity )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_544;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
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
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v20; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v22; // x22
  UIWidget_o *v23; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v28; // s0
  float v29; // s8
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v36; // x2
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  struct UnityEngine_Vector3_StaticFields *v38; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12AFA & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, message, isScale);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SupportSelectItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_20529/*"img_frames_mask05"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18661/*"datalost_party_edit"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B12AFA = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    v22 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
      AtlasManager__SetPartyOrganizationImage(v22, (System_String_o *)StringLiteral_18661/*"datalost_party_edit"*/, 0LL);
      v23 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v20);
      if ( !v23 )
        goto LABEL_48;
      UIWidget__set_width(v23, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      p_z = &static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      if ( !v22 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20529/*"img_frames_mask05"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      p_z = &this->fields.maskSpriteDefaultPosition.fields.z;
      p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v40.fields.z = *p_z;
    v40.fields.y = *p_y;
    v40.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v40, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v29 = v28;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v31 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v29 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v30);
          byte_4B109C6 = 1;
        }
        v38 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v38->oneVector.fields.x;
        y = v38->oneVector.fields.y;
        z = v38->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v29;
        z = 1.0;
        y = 1.0;
      }
      if ( !v31 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v31 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v36);
        byte_4B109C6 = 1;
      }
      if ( !v31 )
        goto LABEL_48;
      v37 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v37->oneVector.fields.y;
      z = v37->oneVector.fields.z;
      x = v37->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_48:
    sub_1BCAA3C(gameObject, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v20; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12AFB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, isScale);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B12AFB = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    v15 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v14);
          byte_4B109C6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        y = 1.0;
      }
      if ( !v15 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4B109C6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v14);
        byte_4B109C6 = 1;
      }
      if ( !v15 )
        goto LABEL_33;
      v20 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v20->oneVector.fields.y;
      z = v20->oneVector.fields.z;
      x = v20->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v22.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v22.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v22.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v22, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1BCAA3C(gameObject, v10);
  }
}