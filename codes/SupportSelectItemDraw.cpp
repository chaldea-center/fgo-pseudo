void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x19
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B63474 & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, v1);
    sub_1BE4ACC(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_20380/*"icon_class1002"*/, v3);
    sub_1BE4ACC(&StringLiteral_20378/*"icon_class007"*/, v4);
    sub_1BE4ACC(&StringLiteral_20377/*"icon_class006"*/, v5);
    sub_1BE4ACC(&StringLiteral_20375/*"icon_class004"*/, v6);
    sub_1BE4ACC(&StringLiteral_20372/*"icon_class001"*/, v7);
    sub_1BE4ACC(&StringLiteral_20379/*"icon_class1001"*/, v8);
    sub_1BE4ACC(&StringLiteral_20373/*"icon_class002"*/, v9);
    sub_1BE4ACC(&StringLiteral_20376/*"icon_class005"*/, v10);
    sub_1BE4ACC(&StringLiteral_20374/*"icon_class003"*/, v11);
    byte_4B63474 = 1;
  }
  v12 = sub_1BE4B74(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1BE4D28(0LL, v13);
  v20 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v21 = StringLiteral_20379/*"icon_class1001"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_20379/*"icon_class1001"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 32), v21, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_14;
  v28 = StringLiteral_20372/*"icon_class001"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_20372/*"icon_class001"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 40), v28, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_14;
  v35 = StringLiteral_20373/*"icon_class002"*/;
  *(_QWORD *)(v20 + 48) = StringLiteral_20373/*"icon_class002"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 48), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_14;
  v42 = StringLiteral_20374/*"icon_class003"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_20374/*"icon_class003"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 56), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_14;
  v49 = StringLiteral_20375/*"icon_class004"*/;
  *(_QWORD *)(v20 + 64) = StringLiteral_20375/*"icon_class004"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 64), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_14;
  v56 = StringLiteral_20376/*"icon_class005"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_20376/*"icon_class005"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 72), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (v63 = StringLiteral_20377/*"icon_class006"*/,
        *(_QWORD *)(v20 + 80) = StringLiteral_20377/*"icon_class006"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 80), v63, v57, v58, v59, v60, v61, v62),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v70 = StringLiteral_20378/*"icon_class007"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_20378/*"icon_class007"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 88), v70, v64, v65, v66, v67, v68, v69),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_14:
    sub_1BE4D30(v12, v13);
  }
  v77 = StringLiteral_20380/*"icon_class1002"*/;
  *(_QWORD *)(v20 + 96) = StringLiteral_20380/*"icon_class1002"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 96), v77, v71, v72, v73, v74, v75, v76);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v20;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SupportSelectItemDraw_TypeInfo->static_fields,
    v20,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x21
  __int64 methodPtr_low; // x9
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B63473 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, method);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Transform_TypeInfo, v5);
    byte_4B63473 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BE4D28(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BE4FE8(v18);
LABEL_37:
      sub_1BE4D28(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1BE4D28(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1BE4D28(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1C36AAC(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UISprite_o *v25; // x8
  struct UIAtlas_o *v26; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *v35; // x1
  System_Collections_Generic_List_object__o *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6346B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6346B = 1;
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
    v16 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v16 )
      goto LABEL_37;
    mAtlas = v16->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
      (int64_t)mAtlas,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
    v25 = this->fields.baseSprite;
    if ( !v25 )
      goto LABEL_37;
    v26 = v25->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v26;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)v26,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v34 = this->fields.base2Sprite;
    if ( v34 )
    {
      v35 = v34->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v35;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v35,
        (int64_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      goto LABEL_36;
    }
LABEL_37:
    sub_1BE4D28(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v28);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v36;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4B6346C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6346C = 1;
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
    sub_1BE4D28(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4B6346E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B6346E = 1;
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
    sub_1BE4D28(gameObject, v5);
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

  if ( (byte_4B63471 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flag);
    byte_4B63471 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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
  if ( (byte_4B63472 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B63472 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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
  SupportServantData_o *v8; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 gameObject; // x0
  signed __int64 v52; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v55; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x21
  __int64 v61; // x23
  __int64 v62; // x24
  Il2CppObject *v63; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v68; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v70; // x25
  int32_t atk; // w8
  int hp; // w8
  char v73; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v75; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v77; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v80; // x21
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
  System_Object_array *v92; // x19
  bool v93; // w22
  UserServantEntity_o *v94; // x23
  int32_t v95; // w8
  int v96; // w8
  int adjustAtk; // w9
  int32_t v98; // w0
  int32_t exceedCount; // w22
  int32_t v100; // w23
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_41472076; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v106; // x24
  System_Collections_Generic_List_object__o *v107; // x26
  struct EventUpValSetupInfo_o *v108; // x8
  struct System_Int32_array *v109; // x20
  __int64 v110; // x8
  unsigned __int64 v111; // x29
  int32_t v112; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v114; // x0
  int32_t eventSvtPoint; // w21
  __int64 v116; // x24
  __int64 v117; // x25
  int32_t v118; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v121; // x21
  EventPersonalMargeUpValInfo_o *v122; // x27
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x8
  __int64 v130; // x23
  unsigned __int64 v131; // x21
  struct System_Object_array *items; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  Il2CppClass **v135; // x0
  int v136; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v139; // w29
  SupportServantData_o *v140; // x21
  int v141; // w20
  QuestRestrictionInfo_o *v142; // x8
  int32_t v143; // w21
  int32_t v144; // w27
  QuestRestrictionInfo_o *v145; // x22
  __int64 v146; // x23
  __int64 v147; // x24
  int32_t v148; // w0
  int32_t v149; // w23
  int32_t v150; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v152; // w9
  int32_t v153; // w0
  Il2CppObject v154; // q1
  int64_t v155; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v158; // x25
  bool EventUpVal_41170672; // w19
  Il2CppObject *v160; // x29
  Il2CppObject *v161; // x28
  System_Collections_Generic_List_object__o *v162; // x22
  struct EventUpValSetupInfo_o *v163; // x8
  struct System_Int32_array *v164; // x20
  __int64 v165; // x8
  unsigned __int64 v166; // x21
  int32_t v167; // w23
  __int128 v168; // q0
  int64_t v169; // x24
  int32_t v170; // w4
  int32_t BuddyPoint; // w27
  int32_t v172; // w0
  EventServantPointRankEntity_o *v173; // x0
  int32_t v174; // w25
  EventMargeItemUpValInfo_o *v175; // x24
  EventPersonalMargeUpValInfo_o *v176; // x27
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  __int64 v183; // x8
  __int64 v184; // x23
  unsigned __int64 v185; // x19
  struct System_Object_array *v186; // x8
  _QWORD *v187; // x9
  __int64 v188; // x10
  Il2CppClass **v189; // x0
  UnityEngine_Object_o *v190; // x21
  UnityEngine_Object_o *v191; // x21
  UILabel_o *v192; // x21
  UnityEngine_Object_o *v193; // x21
  int32_t v194; // w19
  int32_t v195; // w21
  _BOOL4 v196; // w26
  System_String_o *Icon_38608696; // x21
  int v198; // w29
  _BOOL4 v199; // w25
  int v200; // w24
  int32_t RarityIcon; // w22
  int32_t v202; // w22
  UISprite_o *v203; // x23
  float v204; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v207; // x21
  SkillListTreasureDeviceComponent_o *v208; // x21
  SkillInfo_array *v209; // x22
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  __int64 v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  __int64 v219; // x8
  UnityEngine_Object_o *v220; // x21
  AppendSkillListComponent_o *v221; // x21
  SkillInfo_array *v222; // x22
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  __int64 v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  __int64 v232; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v234; // x0
  SwitchUIWidgetComponent_o *v235; // x21
  UnityEngine_Object_o *v236; // x21
  UnityEngine_Object_o *v237; // x21
  float v238; // s1
  float v239; // s2
  float v240; // s0
  float v241; // s3
  UILabel_o *v242; // x21
  UnityEngine_Object_o *v243; // x21
  float v244; // s1
  float v245; // s2
  float v246; // s0
  float v247; // s3
  UILabel_o *v248; // x21
  UnityEngine_Object_o *v249; // x21
  UISprite_o *v250; // x22
  UIAtlas_o *v251; // x21
  UnityEngine_Object_o *v252; // x21
  UISprite_o *v253; // x22
  UIAtlas_o *v254; // x21
  const MethodInfo *v255; // x4
  UnityEngine_Object_o *v256; // x21
  System_String_o *v257; // x0
  System_String_o *v258; // x1
  bool v259; // w2
  SupportSelectItemDraw_o *v260; // x0
  bool v261; // w3
  UnityEngine_Object_o *v262; // x21
  bool v263; // w1
  System_String_o *v264; // x0
  const MethodInfo *v265; // x3
  System_String_o *v266; // x21
  __int64 v267; // x2
  __int64 v268; // x3
  __int64 v269; // x4
  Il2CppObject *v270; // x0
  UnityEngine_Object_o *v271; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v273; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v276; // x25
  __int64 v277; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v281; // x8
  EventCampaignEntity_o *v282; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v284; // w10
  System_Collections_Generic_List_object__o *v285; // x0
  System_Collections_Generic_List_object__o *v286; // x24
  UISprite_o *v287; // x21
  void *v288; // x23
  Il2CppClass *v289; // x24
  int32_t v290; // w23
  UnityEngine_Object_o *v291; // x21
  void *v292; // x21
  Il2CppClass *v293; // x23
  int v294; // w21
  EventMargeItemUpValInfo_o *v295; // x25
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  struct System_Object_array *v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  Il2CppClass **v305; // x0
  UISprite_o *equipSprite; // x21
  __int64 v307; // x23
  __int64 v308; // x24
  int32_t v309; // w23
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  System_Object_array *v311; // x21
  int limitCount; // w19
  UnityEngine_Object_o *v313; // x21
  UnityEngine_Object_o *v314; // x21
  struct ServantLeaderInfo_o *v315; // x8
  __int64 v316; // x21
  __int64 v317; // x22
  int32_t v318; // w21
  int32_t v319; // w0
  UnityEngine_Object_o *v320; // x21
  bool v321; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v323; // x21
  __int64 v324; // x22
  int32_t v325; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  _BOOL4 v331; // [xsp+10h] [xbp-1B0h]
  bool v332; // [xsp+14h] [xbp-1ACh]
  int32_t v333; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v334; // [xsp+18h] [xbp-1A8h]
  int32_t v335; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v342; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v344; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v345; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v346; // [xsp+40h] [xbp-180h]
  bool v347; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v351; // [xsp+58h] [xbp-168h]
  int32_t frameType; // [xsp+64h] [xbp-15Ch]
  Il2CppObject *v353; // [xsp+68h] [xbp-158h]
  Il2CppObject *v354; // [xsp+70h] [xbp-150h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+78h] [xbp-148h]
  UserServantEntity_o *v356; // [xsp+78h] [xbp-148h]
  EventCampaignEntity_array *v357; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v358; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v359; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v360; // [xsp+90h] [xbp-130h]
  Il2CppObject *v361; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v362; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v363; // [xsp+A0h] [xbp-120h]
  int v364; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v365; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v368; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v369; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v371; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v374; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  UnityEngine_Vector3_o v386; // 0:s0.4,4:s1.4,8:s2.4

  v8 = supportServantData;
  if ( (byte_4B6346D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventDetailMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantExceedMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1BE4ACC(&DataManager_TypeInfo, v20);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1BE4ACC(&EventMargeItemUpValInfo_TypeInfo, v24);
    sub_1BE4ACC(&EventPersonalMargeUpValInfo_TypeInfo, v25);
    sub_1BE4ACC(&int_TypeInfo, v26);
    sub_1BE4ACC(&long___TypeInfo, v27);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v30);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v31);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v33);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77102976, v35);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v36);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v37);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v38);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_1BE4ACC(&Rarity_TypeInfo, v41);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1BE4ACC(&SupportSelectItemDraw_TypeInfo, v44);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v45);
    sub_1BE4ACC(&StringLiteral_11684/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1BE4ACC(&StringLiteral_10442/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v47);
    sub_1BE4ACC(&StringLiteral_6561/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v48);
    sub_1BE4ACC(&StringLiteral_424/*"#,0"*/, v49);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v50);
    byte_4B6346D = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v374 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v371 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_544;
  size = switchSkillUIList->fields._size;
  v55 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v55;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v357 = eventFriendPoints;
  if ( gameObject )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_544;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_544;
      v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v62 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v377.fields.currentCryptoKey = v62;
      *(_QWORD *)&v377.fields.fakeValue = v61;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v377, 0LL);
      if ( !v60 )
        goto LABEL_544;
      v63 = 0LL;
      v354 = DataMasterBase_object__object__int___GetEntity(
               v60,
               gameObject,
               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_544;
    v63 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v63 )
      goto LABEL_544;
    v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v63[5].klass;
    monitor = v63[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v378.fields.currentCryptoKey = klass;
    *(_QWORD *)&v378.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v378, 0LL);
    if ( !v65 )
      goto LABEL_544;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v65,
                            gameObject,
                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v63 = 0LL;
  }
  equipTarget1 = 0LL;
  v354 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v358 = 0LL;
    v73 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v358 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v73 = 0;
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
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v75 = **(_QWORD **)(gameObject + 184);
    if ( !v75 )
      goto LABEL_544;
    if ( *(_DWORD *)(v75 + 24) <= (unsigned int)classPos )
      goto LABEL_545;
    if ( !backClassIcon )
      goto LABEL_544;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v75 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v77 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v77, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v80 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v80, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_544;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v92 = 0LL;
    v93 = 0;
    if ( v63 )
      goto LABEL_438;
LABEL_466:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( v358 )
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
      v308 = *(_QWORD *)&v358->fields.svtId.fields.currentCryptoKey;
      v307 = *(_QWORD *)&v358->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v383.fields.currentCryptoKey = v308;
      *(_QWORD *)&v383.fields.fakeValue = v307;
      v309 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v383, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v309, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        v311 = v92;
        limitCount = v358->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v354 )
            goto LABEL_544;
          v52 = SLODWORD(v354[5].monitor) >= limitCount;
        }
        else
        {
          v52 = 0LL;
        }
        if ( gameObject )
        {
          v92 = v311;
LABEL_493:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v52, 0LL);
          goto LABEL_494;
        }
LABEL_544:
        sub_1BE4D28(gameObject, v52);
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
      v313 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v313, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_544;
        LOBYTE(v52) = 0;
        goto LABEL_493;
      }
    }
    goto LABEL_494;
  }
  v68 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v68,
                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v362 = (ServantEntity_o *)gameObject;
  v353 = v63;
  svtId = v68;
  v351 = UserServantLeaderEntity;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v8->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v345 = this;
    if ( !servantLeaderInfo )
      goto LABEL_544;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v70 = v362;
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
    v374 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v344 = adjustAtk;
    v98 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v100 = v98;
    frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_544;
    strengthStatus = tdInfo->fields.strengthStatus;
    v342 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_41484192(servantLeaderInfo, &v371, 0, 0LL);
    eventSetupInfo = v8->fields.eventSetupInfo;
    rarity = v100;
    if ( !eventSetupInfo )
      goto LABEL_171;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_544;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_41472076 = ServantLeaderInfo__getEventUpVal_41472076(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventDetailMaster___);
      v106 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v107 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v107,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v108 = v8->fields.eventSetupInfo;
      v363 = v8;
      if ( !v108 )
        goto LABEL_544;
      v109 = v108->fields.eventIdList;
      v359 = (EventServantPointRankMaster_o *)v106;
      v333 = CardImageLimitCount;
      if ( !v109 )
        goto LABEL_544;
      v110 = *(_QWORD *)&v109->max_length;
      if ( (int)v110 >= 1 )
      {
        v111 = 0LL;
        while ( 1 )
        {
          if ( v111 >= (unsigned int)v110 )
            goto LABEL_545;
          v112 = v109->m_Items[v111 + 1];
          questRestrictionInfo = v363->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v112 )
          {
            if ( !Master_object )
              goto LABEL_544;
            v114 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                     v112,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v114
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v114, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v359;
              if ( !v359 )
                goto LABEL_544;
              if ( EventServantPointRankMaster__IsEnableEvent(v359, v112, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v117 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v116 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v379.fields.currentCryptoKey = v117;
                *(_QWORD *)&v379.fields.fakeValue = v116;
                v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v379, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v359, v112, eventSvtPoint, v118, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v70 = v362;
                v121 = (EventMargeItemUpValInfo_o *)sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_39806500(v121, v112, 0LL);
                if ( !v121 )
                  goto LABEL_544;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v121,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v107 )
                  goto LABEL_544;
                System_Collections_Generic_List_object___Insert(
                  v107,
                  0,
                  (Il2CppObject *)v121,
                  (const MethodInfo_35ECFD4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v122 = (EventPersonalMargeUpValInfo_o *)sub_1BE4D18(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v122, v112, v70, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_544;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v122 )
                goto LABEL_544;
              EventPersonalMargeUpValInfo__Add(v122, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v122, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v122, 0LL);
                if ( !gameObject )
                  goto LABEL_544;
                v129 = *(_QWORD *)(gameObject + 24);
                v130 = gameObject;
                if ( (int)v129 >= 1 )
                  break;
              }
            }
          }
LABEL_168:
          LODWORD(v110) = v109->max_length;
          if ( (__int64)++v111 >= (int)v110 )
            goto LABEL_169;
        }
        v131 = 0LL;
        while ( v131 < (unsigned int)v129 )
        {
          if ( !v107 )
            goto LABEL_544;
          v52 = *(_QWORD *)(v130 + 32 + 8 * v131);
          items = v107->fields._items;
          v133 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v107->fields._version;
          if ( !items )
            goto LABEL_544;
          v134 = v107->fields._size;
          if ( (unsigned int)v134 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v107,
              (Il2CppObject *)v52,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            v135 = &items->obj.klass + v134;
            v107->fields._size = v134 + 1;
            v135[4] = (Il2CppClass *)v52;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v135 + 4), v52, v123, v124, v125, v126, v127, v128);
          }
          LODWORD(v129) = *(_DWORD *)(v130 + 24);
          if ( (__int64)++v131 >= (int)v129 )
            goto LABEL_168;
        }
        goto LABEL_545;
      }
LABEL_169:
      if ( !v107 )
        goto LABEL_544;
      v136 = EventUpVal_41472076;
      v8 = v363;
      v68 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v333;
      v360 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v107,
                                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_171:
      v360 = 0LL;
      v136 = 0;
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
      v364 = 1;
LABEL_195:
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      this = v345;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      goto LABEL_242;
    }
    v334 = QuestRestriction;
    v139 = CardImageLimitCount;
    v140 = v8;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    v141 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    if ( v141 < 1 )
    {
      v364 = 0;
      v8 = v140;
    }
    else
    {
      v142 = v140->fields.questRestrictionInfo;
      if ( !v142 )
        goto LABEL_544;
      v8 = v140;
      v143 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41431712(v142, v143, 0LL) )
      {
        v331 = UniqueSvtRestriction;
        v144 = exceedCount;
        v145 = v8->fields.questRestrictionInfo;
        v147 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v146 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v380.fields.currentCryptoKey = v147;
        *(_QWORD *)&v380.fields.fakeValue = v146;
        v148 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v380, 0LL);
        v149 = servantLeaderInfo->fields.limitCount;
        v150 = v148;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v145 )
          goto LABEL_544;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v145,
                                              v150,
                                              v149,
                                              gameObject,
                                              v143,
                                              1,
                                              0LL);
        v68 = svtId;
        UniqueSvtRestriction = v331;
        exceedCount = v144;
        v364 = IsRestrictionServantIndividuality;
        goto LABEL_194;
      }
      v364 = 0;
    }
    v68 = svtId;
LABEL_194:
    CardImageLimitCount = v139;
    QuestRestriction = v334;
    goto LABEL_195;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v94 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v95 = *(_DWORD *)(gameObject + 264);
  lv[0] = v95;
  if ( v63 )
  {
    lv[0] = LODWORD(v63[16].monitor) + v95;
    v96 = HIDWORD(v63[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v96 = *(_DWORD *)(gameObject + 268);
  }
  v152 = *(_DWORD *)(gameObject + 272);
  v374 = v96;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v344 = v152;
  v153 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v94->fields.exceedCount;
  rarity = v153;
  frameType = UserServantEntity__getFrameType(v94, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v94, 0, 0LL);
  UserServantEntity__getSkillInfo(v94, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v94, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_544;
  strengthStatus = tdInfo->fields.strengthStatus;
  v342 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v356 = v94;
  UserServantEntity__GetAppendPassiveSkillInfo_41195936(v94, &v371, 0LL);
  if ( v8->fields.eventSetupInfo )
  {
    v335 = CardImageLimitCount;
    if ( v63 )
    {
      v154 = v63[2];
      *(Il2CppObject *)&v369.fields.currentCryptoKey = v63[1];
      *(Il2CppObject *)&v369.fields.fakeValue = v154;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v368 = v369;
      v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v368, 0LL);
    }
    else
    {
      v155 = -1LL;
    }
    v158 = v362;
    gameObject = sub_1BE4B74(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_545;
    *(_QWORD *)(gameObject + 32) = v155;
    EventUpVal_41170672 = UserServantEntity__getEventUpVal_41170672(
                            v94,
                            &eventUpVallInfo,
                            v8->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    cardParamsb = exceedCount;
    v346 = this;
    v160 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v161 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v361 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v162 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v162,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v163 = v8->fields.eventSetupInfo;
    v365 = v8;
    if ( !v163 )
      goto LABEL_544;
    v164 = v163->fields.eventIdList;
    v332 = EventUpVal_41170672;
    if ( !v164 )
      goto LABEL_544;
    v165 = *(_QWORD *)&v164->max_length;
    if ( (int)v165 >= 1 )
    {
      v166 = 0LL;
      codeIdsa = (System_Int32_array *)&v94->fields.userId;
      while ( 1 )
      {
        if ( v166 >= (unsigned int)v165 )
          goto LABEL_545;
        if ( !v160 )
          goto LABEL_544;
        v167 = v164->m_Items[v166 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v160,
                                v167,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v161 )
            goto LABEL_544;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v161, v167, 0LL) )
          {
            v168 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v369.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v369.fields.fakeValue = v168;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v367 = v369;
            v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v367, 0LL);
            v170 = UserServantEntity__getSvtId(v356, 0LL);
            gameObject = (__int64)v361;
            if ( !v361 )
              goto LABEL_544;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v361,
                   &entity,
                   v169,
                   v167,
                   v170,
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
            v172 = UserServantEntity__getSvtId(v356, 0LL);
            v173 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v161,
                     v167,
                     BuddyPoint,
                     v172,
                     0LL);
            v174 = v173 ? v173->fields.svtPointRank : 0;
            v175 = (EventMargeItemUpValInfo_o *)sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_39806500(v175, v167, 0LL);
            if ( !v175 )
              goto LABEL_544;
            EventMargeItemUpValInfo__SetServantPointInfo(v175, BuddyPoint, v174, 0, 0LL);
            if ( !v162 )
              goto LABEL_544;
            System_Collections_Generic_List_object___Insert(
              v162,
              0,
              (Il2CppObject *)v175,
              (const MethodInfo_35ECFD4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v158 = v362;
          }
          v176 = (EventPersonalMargeUpValInfo_o *)sub_1BE4D18(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v176, v167, v158, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_544;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v176 )
            goto LABEL_544;
          EventPersonalMargeUpValInfo__Add(v176, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v176, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v176, 0LL);
            if ( !gameObject )
              goto LABEL_544;
            v183 = *(_QWORD *)(gameObject + 24);
            v184 = gameObject;
            if ( (int)v183 >= 1 )
              break;
          }
        }
LABEL_238:
        LODWORD(v165) = v164->max_length;
        if ( (__int64)++v166 >= (int)v165 )
          goto LABEL_239;
      }
      v185 = 0LL;
      while ( v185 < (unsigned int)v183 )
      {
        if ( !v162 )
          goto LABEL_544;
        v52 = *(_QWORD *)(v184 + 32 + 8 * v185);
        v186 = v162->fields._items;
        v187 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v162->fields._version;
        if ( !v186 )
          goto LABEL_544;
        v188 = v162->fields._size;
        if ( (unsigned int)v188 >= v186->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v162,
            (Il2CppObject *)v52,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
        }
        else
        {
          v189 = &v186->obj.klass + v188;
          v162->fields._size = v188 + 1;
          v189[4] = (Il2CppClass *)v52;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v189 + 4), v52, v177, v178, v179, v180, v181, v182);
        }
        LODWORD(v183) = *(_DWORD *)(v184 + 24);
        if ( (__int64)++v185 >= (int)v183 )
          goto LABEL_238;
      }
LABEL_545:
      sub_1BE4D30(gameObject, v52);
    }
LABEL_239:
    if ( !v162 )
      goto LABEL_544;
    v136 = v332;
    v360 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v162,
                                              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v346;
    v8 = v365;
    v68 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v335;
  }
  else
  {
    v360 = 0LL;
    v136 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v356, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(v356, v8->fields.questRestrictionInfo, 2, 0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v356, v8->fields.questRestrictionInfo, 0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v356,
                                       v8->fields.questRestrictionInfo,
                                       0LL);
  v364 = 0;
  cardParamsa = 0LL;
LABEL_242:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v68,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_544;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v68, gameObject, 0LL, 0LL);
  v190 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v92 = (System_Object_array *)v360;
  if ( UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
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
  v191 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v191, 0LL, 0LL) )
  {
    v192 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v192 )
      goto LABEL_544;
    UILabel__set_text(v192, (System_String_o *)gameObject, 0LL);
  }
  v193 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v193, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v347 = IsDataLost;
    v194 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v195 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v196 = QuestRestriction;
    Icon_38608696 = Rarity__getIcon_38608696(rarity, exceedCount, v195, 0LL);
    v198 = v136;
    if ( exceedCount < 1 )
    {
      v199 = UniqueSvtRestriction;
      v200 = exceedCount;
      v202 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v199 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v200 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v202 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v203 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v202 >= 3 )
    {
      AtlasManager__SetEventSprite(v203, Icon_38608696, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v203, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38608696, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v204 = v200 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_544;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v386.fields.x = v204;
    v386.fields.y = y;
    v386.fields.z = z;
    UniqueSvtRestriction = v199;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v386, 0LL);
    v136 = v198;
    QuestRestriction = v196;
    TimesToRestart = v194;
    v92 = (System_Object_array *)v360;
    IsDataLost = v347;
  }
  v207 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v208 = this->fields.skillListTreasureDevice;
    v209 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_39307424(v209, 0LL);
    if ( !v208 )
      goto LABEL_544;
    SkillListTreasureDeviceComponent__Set(
      v208,
      (System_String_o *)gameObject,
      v342,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v52 = (signed __int64)this->fields.skillInfoUiWidget;
      v216 = *(_QWORD *)(gameObject + 16);
      v217 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v216 )
        goto LABEL_544;
      v218 = *(int *)(gameObject + 24);
      if ( (unsigned int)v218 >= *(_DWORD *)(v216 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v52,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
      }
      else
      {
        v219 = v216 + 8 * v218;
        *(_DWORD *)(gameObject + 24) = v218 + 1;
        *(_QWORD *)(v219 + 32) = v52;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v219 + 32), v52, v210, v211, v212, v213, v214, v215);
      }
    }
  }
  v220 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v220, 0LL, 0LL) )
  {
    if ( v371 && *(_QWORD *)&v371->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v221 = this->fields.appendSkillList;
      v222 = v371;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_39307424(v222, 0LL);
      if ( !v221 )
        goto LABEL_544;
      AppendSkillListComponent__Set(v221, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v52 = (signed __int64)this->fields.appendSkillInfoUiWidget;
        v229 = *(_QWORD *)(gameObject + 16);
        v230 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v229 )
          goto LABEL_544;
        v231 = *(int *)(gameObject + 24);
        if ( (unsigned int)v231 >= *(_DWORD *)(v229 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v52,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
        }
        else
        {
          v232 = v229 + 8 * v231;
          *(_DWORD *)(gameObject + 24) = v231 + 1;
          *(_QWORD *)(v232 + 32) = v52;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v232 + 32), v52, v223, v224, v225, v226, v227, v228);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v234 = this->fields.switchSkillUIList;
    if ( v234 )
    {
      v235 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v234,
                              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v235 )
        goto LABEL_544;
      SwitchUIWidgetComponent__Set(v235, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v236 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_544;
    if ( v8->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_39118956(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_39119200(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v237 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
  {
    v238 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v344 <= 0 )
      v239 = 1.0;
    else
      v239 = 0.015686;
    if ( v344 <= 0 )
      v238 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v240 = 1.0;
    v241 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v238 - 1), 0LL);
    v242 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_63504416((int32_t)lv, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
    if ( !v242 )
      goto LABEL_544;
    UILabel__set_text(v242, (System_String_o *)gameObject, 0LL);
  }
  v243 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v243, 0LL, 0LL) )
  {
    v244 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v245 = 1.0;
    else
      v245 = 0.015686;
    if ( adjustHp <= 0 )
      v244 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v246 = 1.0;
    v247 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v244 - 1), 0LL);
    v248 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_63504416((int32_t)&v374, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
    if ( !v248 )
      goto LABEL_544;
    UILabel__set_text(v248, (System_String_o *)gameObject, 0LL);
  }
  v249 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v249, 0LL, 0LL) )
  {
    v250 = this->fields.baseSprite;
    v251 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v250, frameType, v251, 0, 0LL);
  }
  v252 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v252, 0LL, 0LL) )
  {
    v253 = this->fields.base2Sprite;
    v254 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v253, frameType, v254, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v364 | QuestRestriction) & 1) != 0 )
  {
    v256 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v351;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v256, 0LL, 0LL) )
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v257 = LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_375;
  }
  UserServantLeaderEntity = v351;
  if ( !v8->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v362, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38593888(126, 0LL) )
    {
      v262 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v262, 0LL, 0LL) )
        goto LABEL_406;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      v263 = 1;
LABEL_405:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v263, 0LL);
LABEL_406:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
      goto LABEL_407;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v261 = 1;
      v260 = this;
      v259 = 0;
      v258 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_376;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v266 = LocalizationManager__Get((System_String_o *)StringLiteral_11684/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v369.fields.currentCryptoKey) = TimesToRestart;
      v270 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v267, v268, v269);
      v257 = System_String__Format(v266, v270, 0LL);
LABEL_375:
      v258 = v257;
      v259 = 1;
      v260 = this;
      v261 = 0;
LABEL_376:
      SupportSelectItemDraw__SetMaskMessage(v260, v258, v259, v261, v255);
      goto LABEL_407;
    }
    v271 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v271, 0LL, 0LL) )
      goto LABEL_406;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v263 = 0;
    goto LABEL_405;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v264 = LocalizationManager__Get((System_String_o *)StringLiteral_6561/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v264, 1, v265);
LABEL_407:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v273 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v273, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v73 = 0;
  v93 = v136 != 0;
  if ( !v357 )
    goto LABEL_465;
  v63 = v353;
  if ( (gameObject & 1) == 0 )
    goto LABEL_437;
  max_length = v357->max_length;
  if ( max_length < 1 )
  {
LABEL_436:
    v73 = 0;
LABEL_437:
    if ( v63 )
      goto LABEL_438;
    goto LABEL_466;
  }
  v276 = v8;
  v277 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v357->m_Items;
  do
  {
    if ( (unsigned int)v277 >= max_length )
      goto LABEL_545;
    v281 = m_Items[v277];
    if ( !v281 )
      goto LABEL_544;
    gameObject = System_Array__IndexOf_int_(
                   v281->fields.targetIds,
                   svtId,
                   (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
    max_length = v357->max_length;
    if ( (unsigned int)v277 >= max_length )
      goto LABEL_545;
    v282 = m_Items[v277];
    if ( !v282 )
      goto LABEL_544;
    targetIds = v282->fields.targetIds;
    if ( targetIds )
      v284 = targetIds->max_length == 0;
    else
      v284 = 1;
    if ( (v284 || (int)gameObject >= 0) && value < v282->fields.value )
    {
      eventId = v282->fields.eventId;
      value = v282->fields.value;
    }
    ++v277;
  }
  while ( (int)v277 < max_length );
  v8 = v276;
  if ( value < 1 )
  {
    v63 = v353;
    v92 = (System_Object_array *)v360;
    goto LABEL_436;
  }
  v285 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  v286 = v285;
  if ( v360 )
    System_Collections_Generic_List_object____ctor_56539928(
      v285,
      (System_Collections_Generic_IEnumerable_T__o *)v360,
      (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77102976);
  else
    System_Collections_Generic_List_object____ctor(
      v285,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v295 = (EventMargeItemUpValInfo_o *)sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor_39806420(v295, eventId, value, 0LL);
  if ( !v286 )
    goto LABEL_544;
  v302 = v286->fields._items;
  v303 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v286->fields._version;
  if ( !v302 )
    goto LABEL_544;
  v304 = v286->fields._size;
  if ( (unsigned int)v304 >= v302->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v286,
      (Il2CppObject *)v295,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
  }
  else
  {
    v305 = &v302->obj.klass + v304;
    v286->fields._size = v304 + 1;
    v305[4] = (Il2CppClass *)v295;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v305 + 4), (int64_t)v295, v296, v297, v298, v299, v300, v301);
  }
  v92 = System_Collections_Generic_List_object___ToArray(
          v286,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  v73 = 0;
LABEL_465:
  v63 = v353;
  if ( !v353 )
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
  v287 = (UISprite_o *)this->fields.equipSprite;
  v289 = v63[5].klass;
  v288 = v63[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v381.fields.currentCryptoKey = v289;
  *(_QWORD *)&v381.fields.fakeValue = v288;
  v290 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v381, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v287, v290, 0LL);
  v291 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
  {
    v293 = v63[6].klass;
    v292 = v63[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v382.fields.currentCryptoKey = v293;
    *(_QWORD *)&v382.fields.fakeValue = v292;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v382, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v294 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v294 >= 4 )
      {
        if ( !v354 )
          goto LABEL_544;
        v52 = SLODWORD(v354[5].monitor) >= v294;
      }
      else
      {
        v52 = 0LL;
      }
      if ( gameObject )
        goto LABEL_493;
    }
    goto LABEL_544;
  }
LABEL_494:
  v314 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v314, 0LL, 0LL) )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( (v73 & 1) == 0 )
      {
        v315 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v315 )
        {
          v317 = *(_QWORD *)&v315->fields.svtId.fields.currentCryptoKey;
          v316 = *(_QWORD *)&v315->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v384.fields.currentCryptoKey = v317;
          *(_QWORD *)&v384.fields.fakeValue = v316;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v384, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_544;
          v318 = gameObject;
          v319 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_515:
          v325 = v319;
          goto LABEL_517;
        }
      }
    }
    else if ( (v73 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v324 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v323 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v385.fields.currentCryptoKey = v324;
        *(_QWORD *)&v385.fields.fakeValue = v323;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v385, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_544;
        v318 = gameObject;
        v319 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_515;
      }
    }
    v325 = -1;
    v318 = -1;
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
      (EventMargeItemUpValInfo_array *)v92,
      v318,
      v325,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_544;
      v321 = 0;
      goto LABEL_526;
    }
    goto LABEL_527;
  }
  v320 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v320, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_544;
    v321 = v93;
LABEL_526:
    ShiningIconComponent__Set_39139932((ShiningIconComponent_o *)gameObject, v321, 0LL);
  }
LABEL_527:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v17; // x22
  UIWidget_o *v18; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6346F & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, message);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_20599/*"img_frames_mask05"*/, v11);
    sub_1BE4ACC(&StringLiteral_18714/*"datalost_party_edit"*/, v12);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v13);
    byte_4B6346F = 1;
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
    v17 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18714/*"datalost_party_edit"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v18 )
        goto LABEL_48;
      UIWidget__set_width(v18, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v17 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20599/*"img_frames_mask05"*/, 0LL);
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
    v33.fields.z = *p_z;
    v33.fields.y = *p_y;
    v33.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4B612E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4B612E6 = 1;
        }
        v31 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v31->oneVector.fields.x;
        y = v31->oneVector.fields.y;
        z = v31->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v24;
        z = 1.0;
        y = 1.0;
      }
      if ( !v25 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B612E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4B612E6 = 1;
      }
      if ( !v25 )
        goto LABEL_48;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
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
    sub_1BE4D28(gameObject, v15);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v13; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B63470 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, message);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B63470 = 1;
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
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4B612E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v9);
          byte_4B612E6 = 1;
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
      if ( !v13 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4B612E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4B612E6 = 1;
      }
      if ( !v13 )
        goto LABEL_33;
      v18 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v18->oneVector.fields.y;
      z = v18->oneVector.fields.z;
      x = v18->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v20.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v20.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v20.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v20, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1BE4D28(gameObject, v9);
  }
}