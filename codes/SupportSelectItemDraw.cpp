void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x19
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4BD8DD3 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&SupportSelectItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20453/*"icon_class1002"*/);
    sub_1C21E38(&StringLiteral_20451/*"icon_class007"*/);
    sub_1C21E38(&StringLiteral_20450/*"icon_class006"*/);
    sub_1C21E38(&StringLiteral_20448/*"icon_class004"*/);
    sub_1C21E38(&StringLiteral_20445/*"icon_class001"*/);
    sub_1C21E38(&StringLiteral_20452/*"icon_class1001"*/);
    sub_1C21E38(&StringLiteral_20446/*"icon_class002"*/);
    sub_1C21E38(&StringLiteral_20449/*"icon_class005"*/);
    sub_1C21E38(&StringLiteral_20447/*"icon_class003"*/);
    byte_4BD8DD3 = 1;
  }
  v1 = sub_1C21EE0(string___TypeInfo, 9LL);
  if ( !v1 )
    sub_1C22094(0LL, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_14;
  v10 = StringLiteral_20452/*"icon_class1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20452/*"icon_class1001"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_14;
  v17 = StringLiteral_20445/*"icon_class001"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_20445/*"icon_class001"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_14;
  v24 = StringLiteral_20446/*"icon_class002"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_20446/*"icon_class002"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_14;
  v31 = StringLiteral_20447/*"icon_class003"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_20447/*"icon_class003"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_14;
  v38 = StringLiteral_20448/*"icon_class004"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_20448/*"icon_class004"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), v38, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_14;
  v45 = StringLiteral_20449/*"icon_class005"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_20449/*"icon_class005"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 72), v45, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v9 + 24) <= 6u
    || (v52 = StringLiteral_20450/*"icon_class006"*/,
        *(_QWORD *)(v9 + 80) = StringLiteral_20450/*"icon_class006"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 80), v52, v46, v47, v48, v49, v50, v51),
        *(_DWORD *)(v9 + 24) <= 7u)
    || (v59 = StringLiteral_20451/*"icon_class007"*/,
        *(_QWORD *)(v9 + 88) = StringLiteral_20451/*"icon_class007"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 88), v59, v53, v54, v55, v56, v57, v58),
        *(_DWORD *)(v9 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C2209C(v1, v2);
  }
  v66 = StringLiteral_20453/*"icon_class1002"*/;
  *(_QWORD *)(v9 + 96) = StringLiteral_20453/*"icon_class1002"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 96), v66, v60, v61, v62, v63, v64, v65);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v9;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SupportSelectItemDraw_TypeInfo->static_fields,
    v9,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  __int64 methodPtr_low; // x9
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4BD8DD2 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BD8DD2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C22094(0LL, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_16:
      v14 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v15);
LABEL_37:
      sub_1C22094(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C22094(0LL, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0LL) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v23 )
        sub_1C22094(0LL, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
    }
  }
  v25 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_32;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_32:
      v30 = sub_1C73E18(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UISprite_o *v23; // x8
  struct UIAtlas_o *v24; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *v33; // x1
  System_Collections_Generic_List_object__o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8DCA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8DCA = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v14 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v14 )
      goto LABEL_37;
    mAtlas = v14->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
      (int64_t)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v23 = this->fields.baseSprite;
    if ( !v23 )
      goto LABEL_37;
    v24 = v23->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v24;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)v24,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v32 = this->fields.base2Sprite;
    if ( v32 )
    {
      v33 = v32->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v33;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v33,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      goto LABEL_36;
    }
LABEL_37:
    sub_1C22094(transform, v4);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v26);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4BD8DCB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8DCB = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4BD8DCD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8DCD = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(gameObject, v4);
  }
}


void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4BD8DD0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8DD0 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetEquipAlpha(
        SupportSelectItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4BD8DD1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8DD1 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
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
  __int64 gameObject; // x0
  struct UIWidget_o *v11; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x23
  __int64 v21; // x24
  Il2CppObject *v22; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v27; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v29; // x25
  int32_t atk; // w8
  int hp; // w8
  char v32; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v34; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v36; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v39; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  bool v51; // w22
  UISprite_o *equipSprite; // x21
  __int64 v53; // x23
  __int64 v54; // x24
  int32_t v55; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x23
  int32_t v57; // w24
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int limitCount; // w19
  bool v60; // cc
  UserServantEntity_o *v61; // x23
  int32_t v62; // w8
  int v63; // w8
  UnityEngine_Object_o *v64; // x21
  int adjustAtk; // w9
  int32_t v66; // w0
  int32_t exceedCount; // w22
  int32_t v68; // w23
  int32_t CardImageLimitCount; // w21
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_41778036; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v74; // x24
  System_Collections_Generic_List_object__o *v75; // x26
  struct EventUpValSetupInfo_o *v76; // x8
  struct System_Int32_array *v77; // x20
  __int64 v78; // x8
  unsigned __int64 v79; // x29
  int32_t v80; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v82; // x0
  int32_t eventSvtPoint; // w21
  __int64 v84; // x24
  __int64 v85; // x25
  int32_t v86; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v89; // x21
  EventPersonalMargeUpValInfo_o *v90; // x27
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x8
  __int64 v98; // x23
  unsigned __int64 v99; // x21
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  int v104; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v107; // w29
  SupportServantData_o *v108; // x21
  int v109; // w20
  QuestRestrictionInfo_o *v110; // x8
  int32_t v111; // w21
  int32_t v112; // w27
  QuestRestrictionInfo_o *v113; // x22
  __int64 v114; // x23
  __int64 v115; // x24
  int32_t v116; // w0
  int32_t v117; // w23
  int32_t v118; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v120; // w9
  int32_t v121; // w0
  Il2CppObject v122; // q1
  int64_t v123; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v126; // x25
  bool EventUpVal_41481176; // w19
  Il2CppObject *v128; // x29
  Il2CppObject *v129; // x28
  System_Collections_Generic_List_object__o *v130; // x22
  struct EventUpValSetupInfo_o *v131; // x8
  struct System_Int32_array *v132; // x20
  __int64 v133; // x8
  unsigned __int64 v134; // x21
  int32_t v135; // w23
  __int128 v136; // q0
  int64_t v137; // x24
  int32_t v138; // w4
  int32_t BuddyPoint; // w27
  int32_t v140; // w0
  EventServantPointRankEntity_o *v141; // x0
  int32_t v142; // w25
  EventMargeItemUpValInfo_o *v143; // x24
  EventPersonalMargeUpValInfo_o *v144; // x27
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  __int64 v151; // x8
  __int64 v152; // x23
  unsigned __int64 v153; // x19
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  Il2CppClass **v157; // x0
  UnityEngine_Object_o *v158; // x21
  int32_t v159; // w19
  UnityEngine_Object_o *v160; // x21
  UILabel_o *v161; // x21
  UnityEngine_Object_o *v162; // x21
  int32_t v163; // w19
  int32_t v164; // w21
  _BOOL4 v165; // w26
  System_String_o *Icon_38945792; // x21
  int v167; // w29
  _BOOL4 v168; // w25
  int v169; // w24
  int32_t RarityIcon; // w22
  int32_t v171; // w22
  UISprite_o *v172; // x23
  float v173; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v176; // x21
  SkillListTreasureDeviceComponent_o *v177; // x21
  SkillInfo_array *v178; // x22
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  UnityEngine_Object_o *v189; // x21
  AppendSkillListComponent_o *v190; // x21
  SkillInfo_array *v191; // x22
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  __int64 v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  __int64 v201; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v203; // x0
  SwitchUIWidgetComponent_o *v204; // x21
  UnityEngine_Object_o *v205; // x21
  UnityEngine_Object_o *v206; // x21
  float v207; // s1
  float v208; // s2
  float v209; // s0
  float v210; // s3
  UILabel_o *v211; // x21
  UnityEngine_Object_o *v212; // x21
  float v213; // s1
  float v214; // s2
  float v215; // s0
  float v216; // s3
  UILabel_o *v217; // x21
  UnityEngine_Object_o *v218; // x21
  UISprite_o *v219; // x22
  UIAtlas_o *v220; // x21
  UnityEngine_Object_o *v221; // x21
  UISprite_o *v222; // x22
  UIAtlas_o *v223; // x21
  const MethodInfo *v224; // x4
  UnityEngine_Object_o *v225; // x21
  System_String_o *v226; // x0
  System_String_o *v227; // x1
  bool v228; // w2
  SupportSelectItemDraw_o *v229; // x0
  bool v230; // w3
  UnityEngine_Object_o *v231; // x21
  bool v232; // w1
  System_String_o *v233; // x0
  const MethodInfo *v234; // x3
  System_String_o *v235; // x21
  __int64 v236; // x2
  __int64 v237; // x3
  __int64 v238; // x4
  Il2CppObject *v239; // x0
  UnityEngine_Object_o *v240; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v242; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v245; // x25
  __int64 v246; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v250; // x8
  EventCampaignEntity_o *v251; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v253; // w10
  System_Collections_Generic_List_object__o *v254; // x0
  System_Collections_Generic_List_object__o *v255; // x24
  UISprite_o *v256; // x21
  void *v257; // x23
  Il2CppClass *v258; // x24
  int32_t v259; // w23
  UnityEngine_Object_o *v260; // x21
  void *v261; // x21
  Il2CppClass *v262; // x23
  int v263; // w21
  UnityEngine_Object_o *v264; // x21
  struct ServantLeaderInfo_o *v265; // x8
  __int64 v266; // x21
  __int64 v267; // x22
  EventMargeItemUpValInfo_array *v268; // x19
  int32_t v269; // w21
  int32_t v270; // w0
  UnityEngine_Object_o *v271; // x21
  bool v272; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v274; // x21
  __int64 v275; // x22
  int32_t v276; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v282; // x25
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  struct System_Object_array *v289; // x8
  _QWORD *v290; // x9
  __int64 v291; // x10
  Il2CppClass **v292; // x0
  _BOOL4 v293; // [xsp+10h] [xbp-1B0h]
  bool v294; // [xsp+14h] [xbp-1ACh]
  int32_t v295; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v296; // [xsp+18h] [xbp-1A8h]
  int32_t v297; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v304; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v306; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v307; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v308; // [xsp+40h] [xbp-180h]
  bool v309; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v313; // [xsp+58h] [xbp-168h]
  Il2CppObject *v314; // [xsp+60h] [xbp-160h]
  Il2CppObject *v315; // [xsp+68h] [xbp-158h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+70h] [xbp-150h]
  UserServantEntity_o *v317; // [xsp+70h] [xbp-150h]
  int32_t FrameType; // [xsp+7Ch] [xbp-144h]
  EventCampaignEntity_array *v319; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v320; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v321; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v322; // [xsp+90h] [xbp-130h]
  Il2CppObject *v323; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v324; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v325; // [xsp+A0h] [xbp-120h]
  int v326; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v327; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v329; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v330; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v331; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v333; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v336; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v339; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v340; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v341; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v342; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v343; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  UnityEngine_Vector3_o v348; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8DCC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C21E38(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77570472);
    sub_1C21E38(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&SupportSelectItemDraw_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C21E38(&StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C21E38(&StringLiteral_426/*"#,0"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8DCC = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v336 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v333 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_543;
  size = switchSkillUIList->fields._size;
  v14 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_543;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
  v319 = eventFriendPoints;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_543;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_543;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v339.fields.currentCryptoKey = v21;
      *(_QWORD *)&v339.fields.fakeValue = v20;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v339, 0LL);
      if ( !v19 )
        goto LABEL_543;
      v22 = 0LL;
      v315 = DataMasterBase_object__object__int___GetEntity(
               v19,
               gameObject,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_543;
    v22 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v22 )
      goto LABEL_543;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v340.fields.currentCryptoKey = klass;
    *(_QWORD *)&v340.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v340, 0LL);
    if ( !v24 )
      goto LABEL_543;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v24,
                            gameObject,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v22 = 0LL;
  }
  equipTarget1 = 0LL;
  v315 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v320 = 0LL;
    v32 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v320 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v32 = 0;
LABEL_47:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v34 = **(_QWORD **)(gameObject + 184);
    if ( !v34 )
      goto LABEL_543;
    if ( *(_DWORD *)(v34 + 24) <= (unsigned int)classPos )
      goto LABEL_544;
    if ( !backClassIcon )
      goto LABEL_543;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v34 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v36 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v36, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v39 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v39, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_543;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v321 = 0LL;
    v51 = 0;
    if ( v22 )
      goto LABEL_460;
LABEL_122:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( v320 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v54 = *(_QWORD *)&v320->fields.svtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v320->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v341.fields.currentCryptoKey = v54;
      *(_QWORD *)&v341.fields.fakeValue = v53;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v341, 0LL);
      ImagePartsGroupIdxs_k__BackingField = v320->fields._ImagePartsGroupIdxs_k__BackingField;
      v57 = v55;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v57, ImagePartsGroupIdxs_k__BackingField, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_543;
        limitCount = v320->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v315 )
            goto LABEL_543;
          v60 = SLODWORD(v315[5].monitor) < limitCount;
LABEL_478:
          v11 = (struct UIWidget_o *)!v60;
LABEL_481:
          if ( !gameObject )
            goto LABEL_543;
LABEL_482:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v11, 0LL);
          goto LABEL_483;
        }
        goto LABEL_475;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v64 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_543;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_543;
        LOBYTE(v11) = 0;
        goto LABEL_482;
      }
    }
    goto LABEL_483;
  }
  v27 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v27,
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_543;
  v324 = (ServantEntity_o *)gameObject;
  v313 = UserServantLeaderEntity;
  v314 = v22;
  svtId = v27;
  classId = *(_DWORD *)(gameObject + 80);
  if ( supportServantData->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v307 = this;
    if ( !servantLeaderInfo )
      goto LABEL_543;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v29 = v324;
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
    v336 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v306 = adjustAtk;
    v66 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v68 = v66;
    FrameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_543;
    strengthStatus = tdInfo->fields.strengthStatus;
    v304 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_41790300(servantLeaderInfo, &v333, 0, 0LL);
    eventSetupInfo = supportServantData->fields.eventSetupInfo;
    rarity = v68;
    if ( !eventSetupInfo )
      goto LABEL_194;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_543;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_41778036 = ServantLeaderInfo__getEventUpVal_41778036(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v74 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v75 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v75,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v76 = supportServantData->fields.eventSetupInfo;
      v325 = supportServantData;
      if ( !v76 )
        goto LABEL_543;
      v77 = v76->fields.eventIdList;
      v322 = (EventServantPointRankMaster_o *)v74;
      v295 = CardImageLimitCount;
      if ( !v77 )
        goto LABEL_543;
      v78 = *(_QWORD *)&v77->max_length;
      if ( (int)v78 >= 1 )
      {
        v79 = 0LL;
        while ( 1 )
        {
          if ( v79 >= (unsigned int)v78 )
            goto LABEL_544;
          v80 = v77->m_Items[v79 + 1];
          questRestrictionInfo = v325->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v80 )
          {
            if ( !Master_object )
              goto LABEL_543;
            v82 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    v80,
                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v82
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v82, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v322;
              if ( !v322 )
                goto LABEL_543;
              if ( EventServantPointRankMaster__IsEnableEvent(v322, v80, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v85 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v84 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v342.fields.currentCryptoKey = v85;
                *(_QWORD *)&v342.fields.fakeValue = v84;
                v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v342, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v322, v80, eventSvtPoint, v86, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v29 = v324;
                v89 = (EventMargeItemUpValInfo_o *)sub_1C22084(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_40149884(v89, v80, 0LL);
                if ( !v89 )
                  goto LABEL_543;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v89,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v75 )
                  goto LABEL_543;
                System_Collections_Generic_List_object___Insert(
                  v75,
                  0,
                  (Il2CppObject *)v89,
                  (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v90 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v90, v80, v29, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_543;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v90 )
                goto LABEL_543;
              EventPersonalMargeUpValInfo__Add(v90, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v90, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v90, 0LL);
                if ( !gameObject )
                  goto LABEL_543;
                v97 = *(_QWORD *)(gameObject + 24);
                v98 = gameObject;
                if ( (int)v97 >= 1 )
                  break;
              }
            }
          }
LABEL_191:
          LODWORD(v78) = v77->max_length;
          if ( (__int64)++v79 >= (int)v78 )
            goto LABEL_192;
        }
        v99 = 0LL;
        while ( v99 < (unsigned int)v97 )
        {
          if ( !v75 )
            goto LABEL_543;
          v11 = *(struct UIWidget_o **)(v98 + 32 + 8 * v99);
          items = v75->fields._items;
          v101 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v75->fields._version;
          if ( !items )
            goto LABEL_543;
          v102 = v75->fields._size;
          if ( (unsigned int)v102 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)v11,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
          }
          else
          {
            v103 = &items->obj.klass + v102;
            v75->fields._size = v102 + 1;
            v103[4] = (Il2CppClass *)v11;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v11, v91, v92, v93, v94, v95, v96);
          }
          LODWORD(v97) = *(_DWORD *)(v98 + 24);
          if ( (__int64)++v99 >= (int)v97 )
            goto LABEL_191;
        }
        goto LABEL_544;
      }
LABEL_192:
      if ( !v75 )
        goto LABEL_543;
      v104 = EventUpVal_41778036;
      supportServantData = v325;
      v27 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v295;
      v321 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v75,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_194:
      v321 = 0LL;
      v104 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(
                         servantLeaderInfo,
                         supportServantData->fields.questRestrictionInfo,
                         0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             supportServantData->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         supportServantData->fields.questRestrictionInfo,
                                         0LL,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, supportServantData->fields.questRestrictionInfo, 0LL) )
    {
      v326 = 1;
LABEL_218:
      IsDataLost = ServantLeaderInfo__IsDataLost(
                     servantLeaderInfo,
                     supportServantData->fields.questRestrictionInfo,
                     0LL);
      this = v307;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(
                         servantLeaderInfo,
                         supportServantData->fields.questRestrictionInfo,
                         0LL);
      goto LABEL_265;
    }
    v296 = QuestRestriction;
    v107 = CardImageLimitCount;
    v108 = supportServantData;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    v109 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    if ( v109 < 1 )
    {
      v326 = 0;
      supportServantData = v108;
    }
    else
    {
      v110 = v108->fields.questRestrictionInfo;
      if ( !v110 )
        goto LABEL_543;
      supportServantData = v108;
      v111 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(v110, v111, 0LL) )
      {
        v293 = UniqueSvtRestriction;
        v112 = exceedCount;
        v113 = supportServantData->fields.questRestrictionInfo;
        v115 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v114 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v343.fields.currentCryptoKey = v115;
        *(_QWORD *)&v343.fields.fakeValue = v114;
        v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v343, 0LL);
        v117 = servantLeaderInfo->fields.limitCount;
        v118 = v116;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v113 )
          goto LABEL_543;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v113,
                                              v118,
                                              v117,
                                              gameObject,
                                              v111,
                                              1,
                                              0LL);
        v27 = svtId;
        UniqueSvtRestriction = v293;
        exceedCount = v112;
        v326 = IsRestrictionServantIndividuality;
        goto LABEL_217;
      }
      v326 = 0;
    }
    v27 = svtId;
LABEL_217:
    CardImageLimitCount = v107;
    QuestRestriction = v296;
    goto LABEL_218;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_543;
  v61 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v62 = *(_DWORD *)(gameObject + 264);
  lv[0] = v62;
  if ( v22 )
  {
    lv[0] = LODWORD(v22[16].monitor) + v62;
    v63 = HIDWORD(v22[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v63 = *(_DWORD *)(gameObject + 268);
  }
  v120 = *(_DWORD *)(gameObject + 272);
  v336 = v63;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v306 = v120;
  v121 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v61->fields.exceedCount;
  rarity = v121;
  FrameType = UserServantEntity__getFrameType(v61, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v61, 0, 0LL);
  UserServantEntity__getSkillInfo(v61, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v61, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_543;
  strengthStatus = tdInfo->fields.strengthStatus;
  v304 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v317 = v61;
  UserServantEntity__GetAppendPassiveSkillInfo_41506440(v61, &v333, 0LL);
  if ( supportServantData->fields.eventSetupInfo )
  {
    v297 = CardImageLimitCount;
    if ( v22 )
    {
      v122 = v22[2];
      *(Il2CppObject *)&v331.fields.currentCryptoKey = v22[1];
      *(Il2CppObject *)&v331.fields.fakeValue = v122;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v330 = v331;
      v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v330, 0LL);
    }
    else
    {
      v123 = -1LL;
    }
    v126 = v324;
    gameObject = sub_1C21EE0(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_544;
    *(_QWORD *)(gameObject + 32) = v123;
    EventUpVal_41481176 = UserServantEntity__getEventUpVal_41481176(
                            v61,
                            &eventUpVallInfo,
                            supportServantData->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    cardParamsb = exceedCount;
    v308 = this;
    v128 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v129 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v323 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v130 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v130,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v131 = supportServantData->fields.eventSetupInfo;
    v327 = supportServantData;
    if ( !v131 )
      goto LABEL_543;
    v132 = v131->fields.eventIdList;
    v294 = EventUpVal_41481176;
    if ( !v132 )
      goto LABEL_543;
    v133 = *(_QWORD *)&v132->max_length;
    if ( (int)v133 >= 1 )
    {
      v134 = 0LL;
      codeIdsa = (System_Int32_array *)&v61->fields.userId;
      while ( 1 )
      {
        if ( v134 >= (unsigned int)v133 )
          goto LABEL_544;
        if ( !v128 )
          goto LABEL_543;
        v135 = v132->m_Items[v134 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v128,
                                v135,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v129 )
            goto LABEL_543;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v129, v135, 0LL) )
          {
            v136 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v331.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v331.fields.fakeValue = v136;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v329 = v331;
            v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v329, 0LL);
            v138 = UserServantEntity__getSvtId(v317, 0LL);
            gameObject = (__int64)v323;
            if ( !v323 )
              goto LABEL_543;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v323,
                   &entity,
                   v137,
                   v135,
                   v138,
                   0LL) )
            {
              gameObject = (__int64)entity;
              if ( !entity )
                goto LABEL_543;
              BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
            }
            else
            {
              BuddyPoint = 0;
            }
            v140 = UserServantEntity__getSvtId(v317, 0LL);
            v141 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v129,
                     v135,
                     BuddyPoint,
                     v140,
                     0LL);
            v142 = v141 ? v141->fields.svtPointRank : 0;
            v143 = (EventMargeItemUpValInfo_o *)sub_1C22084(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_40149884(v143, v135, 0LL);
            if ( !v143 )
              goto LABEL_543;
            EventMargeItemUpValInfo__SetServantPointInfo(v143, BuddyPoint, v142, 0, 0LL);
            if ( !v130 )
              goto LABEL_543;
            System_Collections_Generic_List_object___Insert(
              v130,
              0,
              (Il2CppObject *)v143,
              (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v126 = v324;
          }
          v144 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v144, v135, v126, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_543;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v144 )
            goto LABEL_543;
          EventPersonalMargeUpValInfo__Add(v144, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v144, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v144, 0LL);
            if ( !gameObject )
              goto LABEL_543;
            v151 = *(_QWORD *)(gameObject + 24);
            v152 = gameObject;
            if ( (int)v151 >= 1 )
              break;
          }
        }
LABEL_261:
        LODWORD(v133) = v132->max_length;
        if ( (__int64)++v134 >= (int)v133 )
          goto LABEL_262;
      }
      v153 = 0LL;
      while ( v153 < (unsigned int)v151 )
      {
        if ( !v130 )
          goto LABEL_543;
        v11 = *(struct UIWidget_o **)(v152 + 32 + 8 * v153);
        v154 = v130->fields._items;
        v155 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v130->fields._version;
        if ( !v154 )
          goto LABEL_543;
        v156 = v130->fields._size;
        if ( (unsigned int)v156 >= v154->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v130,
            (Il2CppObject *)v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
        }
        else
        {
          v157 = &v154->obj.klass + v156;
          v130->fields._size = v156 + 1;
          v157[4] = (Il2CppClass *)v11;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v157 + 4), (int64_t)v11, v145, v146, v147, v148, v149, v150);
        }
        LODWORD(v151) = *(_DWORD *)(v152 + 24);
        if ( (__int64)++v153 >= (int)v151 )
          goto LABEL_261;
      }
LABEL_544:
      sub_1C2209C(gameObject, v11);
    }
LABEL_262:
    if ( !v130 )
      goto LABEL_543;
    v104 = v294;
    v321 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v130,
                                              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v308;
    supportServantData = v327;
    v27 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v297;
  }
  else
  {
    v321 = 0LL;
    v104 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v317, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(
                       v317,
                       supportServantData->fields.questRestrictionInfo,
                       2,
                       0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                           v317,
                           supportServantData->fields.questRestrictionInfo,
                           0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v317,
                                       supportServantData->fields.questRestrictionInfo,
                                       0LL);
  v326 = 0;
  cardParamsa = 0LL;
LABEL_265:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v27,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_543;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v27, gameObject, 0LL, 0LL);
  v158 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v159 = FrameType;
  if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_543;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, FrameType, 0LL);
    }
  }
  v160 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v160, 0LL, 0LL) )
  {
    v161 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v161 )
      goto LABEL_543;
    UILabel__set_text(v161, (System_String_o *)gameObject, 0LL);
  }
  v162 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    v309 = IsDataLost;
    v163 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v164 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v165 = QuestRestriction;
    Icon_38945792 = Rarity__getIcon_38945792(rarity, exceedCount, v164, 0LL);
    v167 = v104;
    if ( exceedCount < 1 )
    {
      v168 = UniqueSvtRestriction;
      v169 = exceedCount;
      v171 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v168 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_543;
      v169 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_543;
      v171 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v172 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v171 >= 3 )
    {
      AtlasManager__SetEventSprite(v172, Icon_38945792, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v172, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_543;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38945792, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( gameObject )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v173 = v169 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
      if ( gameObject )
      {
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v348.fields.x = v173;
          v348.fields.y = y;
          v348.fields.z = z;
          UniqueSvtRestriction = v168;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v348, 0LL);
          v104 = v167;
          QuestRestriction = v165;
          TimesToRestart = v163;
          IsDataLost = v309;
          v159 = FrameType;
          goto LABEL_309;
        }
      }
    }
LABEL_543:
    sub_1C22094(gameObject, v11);
  }
LABEL_309:
  v176 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v177 = this->fields.skillListTreasureDevice;
    v178 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_39646380(v178, 0LL);
    if ( !v177 )
      goto LABEL_543;
    SkillListTreasureDeviceComponent__Set(
      v177,
      (System_String_o *)gameObject,
      v304,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v11 = this->fields.skillInfoUiWidget;
      v185 = *(_QWORD *)(gameObject + 16);
      v186 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v185 )
        goto LABEL_543;
      v187 = *(int *)(gameObject + 24);
      if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v11,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
      }
      else
      {
        v188 = v185 + 8 * v187;
        *(_DWORD *)(gameObject + 24) = v187 + 1;
        *(_QWORD *)(v188 + 32) = v11;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v188 + 32), (int64_t)v11, v179, v180, v181, v182, v183, v184);
      }
    }
  }
  v189 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v189, 0LL, 0LL) )
  {
    if ( v333 && *(_QWORD *)&v333->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v190 = this->fields.appendSkillList;
      v191 = v333;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_39646380(v191, 0LL);
      if ( !v190 )
        goto LABEL_543;
      AppendSkillListComponent__Set(v190, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v11 = this->fields.appendSkillInfoUiWidget;
        v198 = *(_QWORD *)(gameObject + 16);
        v199 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v198 )
          goto LABEL_543;
        v200 = *(int *)(gameObject + 24);
        if ( (unsigned int)v200 >= *(_DWORD *)(v198 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
        }
        else
        {
          v201 = v198 + 8 * v200;
          *(_DWORD *)(gameObject + 24) = v200 + 1;
          *(_QWORD *)(v201 + 32) = v11;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v201 + 32), (int64_t)v11, v192, v193, v194, v195, v196, v197);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v203 = this->fields.switchSkillUIList;
    if ( v203 )
    {
      v204 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v203,
                              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v204 )
        goto LABEL_543;
      SwitchUIWidgetComponent__Set(v204, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v205 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v205, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_543;
    if ( supportServantData->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_39457436(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_39457680(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v206 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v206, 0LL, 0LL) )
  {
    v207 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v306 <= 0 )
      v208 = 1.0;
    else
      v208 = 0.015686;
    if ( v306 <= 0 )
      v207 = 1.0;
    if ( !gameObject )
      goto LABEL_543;
    v209 = 1.0;
    v210 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v207 - 1), 0LL);
    v211 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_63921084((int32_t)lv, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
    if ( !v211 )
      goto LABEL_543;
    UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
  }
  v212 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v212, 0LL, 0LL) )
  {
    v213 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v214 = 1.0;
    else
      v214 = 0.015686;
    if ( adjustHp <= 0 )
      v213 = 1.0;
    if ( !gameObject )
      goto LABEL_543;
    v215 = 1.0;
    v216 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v213 - 1), 0LL);
    v217 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_63921084((int32_t)&v336, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
    if ( !v217 )
      goto LABEL_543;
    UILabel__set_text(v217, (System_String_o *)gameObject, 0LL);
  }
  v218 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v218, 0LL, 0LL) )
  {
    v219 = this->fields.baseSprite;
    v220 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v219, v159, v220, 0, 0LL);
  }
  v221 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
  {
    v222 = this->fields.base2Sprite;
    v223 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v222, v159, v223, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v326 | QuestRestriction) & 1) != 0 )
  {
    v225 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v313;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v226 = LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_398;
  }
  UserServantLeaderEntity = v313;
  if ( !supportServantData->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v324, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38930984(126, 0LL) )
    {
      v231 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v231, 0LL, 0LL) )
        goto LABEL_429;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      v232 = 1;
LABEL_428:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v232, 0LL);
LABEL_429:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
      goto LABEL_430;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v230 = 1;
      v229 = this;
      v228 = 0;
      v227 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_399;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v235 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v331.fields.currentCryptoKey) = TimesToRestart;
      v239 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v331, v236, v237, v238);
      v226 = System_String__Format(v235, v239, 0LL);
LABEL_398:
      v227 = v226;
      v228 = 1;
      v229 = this;
      v230 = 0;
LABEL_399:
      SupportSelectItemDraw__SetMaskMessage(v229, v227, v228, v230, v224);
      goto LABEL_430;
    }
    v240 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v240, 0LL, 0LL) )
      goto LABEL_429;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    v232 = 0;
    goto LABEL_428;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v233 = LocalizationManager__Get((System_String_o *)StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v233, 1, v234);
LABEL_430:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v242 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v242, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v32 = 0;
  v51 = v104 != 0;
  if ( !v319 )
    goto LABEL_541;
  v22 = v314;
  if ( (gameObject & 1) == 0 )
    goto LABEL_459;
  max_length = v319->max_length;
  if ( max_length < 1 )
  {
    v32 = 0;
LABEL_459:
    if ( v314 )
      goto LABEL_460;
    goto LABEL_122;
  }
  v245 = supportServantData;
  v246 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v319->m_Items;
  do
  {
    if ( (unsigned int)v246 >= max_length )
      goto LABEL_544;
    v250 = m_Items[v246];
    if ( !v250 )
      goto LABEL_543;
    gameObject = System_Array__IndexOf_int_(
                   v250->fields.targetIds,
                   svtId,
                   (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
    max_length = v319->max_length;
    if ( (unsigned int)v246 >= max_length )
      goto LABEL_544;
    v251 = m_Items[v246];
    if ( !v251 )
      goto LABEL_543;
    targetIds = v251->fields.targetIds;
    if ( targetIds )
      v253 = targetIds->max_length == 0;
    else
      v253 = 1;
    if ( (v253 || (int)gameObject >= 0) && value < v251->fields.value )
    {
      eventId = v251->fields.eventId;
      value = v251->fields.value;
    }
    ++v246;
  }
  while ( (int)v246 < max_length );
  supportServantData = v245;
  if ( value >= 1 )
  {
    v254 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    v255 = v254;
    if ( v321 )
      System_Collections_Generic_List_object____ctor_56945064(
        v254,
        (System_Collections_Generic_IEnumerable_T__o *)v321,
        (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77570472);
    else
      System_Collections_Generic_List_object____ctor(
        v254,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v282 = (EventMargeItemUpValInfo_o *)sub_1C22084(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_40149804(v282, eventId, value, 0LL);
    if ( !v255 )
      goto LABEL_543;
    v289 = v255->fields._items;
    v290 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++v255->fields._version;
    if ( !v289 )
      goto LABEL_543;
    v291 = v255->fields._size;
    if ( (unsigned int)v291 >= v289->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v255,
        (Il2CppObject *)v282,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v290[4] + 192LL) + 112LL));
    }
    else
    {
      v292 = &v289->obj.klass + v291;
      v255->fields._size = v291 + 1;
      v292[4] = (Il2CppClass *)v282;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v292 + 4), (int64_t)v282, v283, v284, v285, v286, v287, v288);
    }
    v321 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v255,
                                              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  }
  v32 = 0;
LABEL_541:
  v22 = v314;
  if ( !v314 )
    goto LABEL_122;
LABEL_460:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v256 = (UISprite_o *)this->fields.equipSprite;
  v258 = v22[5].klass;
  v257 = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v344.fields.currentCryptoKey = v258;
  *(_QWORD *)&v344.fields.fakeValue = v257;
  v259 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v344, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v256, v259, 0LL, 0LL);
  v260 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v260, 0LL, 0LL) )
  {
    v262 = v22[6].klass;
    v261 = v22[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v345.fields.currentCryptoKey = v262;
    *(_QWORD *)&v345.fields.fakeValue = v261;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v345, 0LL);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_543;
    v263 = gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                            0LL);
    if ( v263 >= 4 )
    {
      if ( !v315 )
        goto LABEL_543;
      v60 = SLODWORD(v315[5].monitor) < v263;
      goto LABEL_478;
    }
LABEL_475:
    v11 = 0LL;
    goto LABEL_481;
  }
LABEL_483:
  v264 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v264, 0LL, 0LL) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v32 & 1) == 0 )
      {
        v265 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v265 )
        {
          v267 = *(_QWORD *)&v265->fields.svtId.fields.currentCryptoKey;
          v266 = *(_QWORD *)&v265->fields.svtId.fields.fakeValue;
          v268 = (EventMargeItemUpValInfo_array *)v321;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v346.fields.currentCryptoKey = v267;
          *(_QWORD *)&v346.fields.fakeValue = v266;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v346, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_543;
          v269 = gameObject;
          v270 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_504:
          v276 = v270;
          goto LABEL_506;
        }
      }
    }
    else if ( (v32 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v275 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v274 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        v268 = (EventMargeItemUpValInfo_array *)v321;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v347.fields.currentCryptoKey = v275;
        *(_QWORD *)&v347.fields.fakeValue = v274;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v347, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_543;
        v269 = gameObject;
        v270 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_504;
      }
    }
    v268 = (EventMargeItemUpValInfo_array *)v321;
    v276 = -1;
    v269 = -1;
LABEL_506:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_543;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)gameObject, v268, v269, v276, equipSvtId, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_543;
      v272 = 0;
      goto LABEL_515;
    }
    goto LABEL_516;
  }
  v271 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v271, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_543;
    v272 = v51;
LABEL_515:
    ShiningIconComponent__Set_39478664((ShiningIconComponent_o *)gameObject, v272, 0LL);
  }
LABEL_516:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        pushUserServantId = supportServantData->fields.pushUserServantId;
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
    goto LABEL_543;
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
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v12; // x22
  UIWidget_o *v13; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v18; // s0
  float v19; // s8
  UnityEngine_Transform_o *v20; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8DCE & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SupportSelectItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20674/*"img_frames_mask05"*/);
    sub_1C21E38(&StringLiteral_18787/*"datalost_party_edit"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8DCE = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v12 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18787/*"datalost_party_edit"*/, 0LL);
      v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v13 )
        goto LABEL_48;
      UIWidget__set_width(v13, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v12 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20674/*"img_frames_mask05"*/, 0LL);
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
    v28.fields.z = *p_z;
    v28.fields.y = *p_y;
    v28.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v19 = v18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v20 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v19 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4BD6BB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        v26 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v26->oneVector.fields.x;
        y = v26->oneVector.fields.y;
        z = v26->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v19;
        z = 1.0;
        y = 1.0;
      }
      if ( !v20 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v20 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4BD6BB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v20 )
        goto LABEL_48;
      v25 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v25->oneVector.fields.y;
      z = v25->oneVector.fields.z;
      x = v25->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v12; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8DCF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8DCF = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4BD6BB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
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
      if ( !v12 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4BD6BB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v12 )
        goto LABEL_33;
      v17 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v17->oneVector.fields.y;
      z = v17->oneVector.fields.z;
      x = v17->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v19.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v19.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v19.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v19, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1C22094(gameObject, v8);
  }
}