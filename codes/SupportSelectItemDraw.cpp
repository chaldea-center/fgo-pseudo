void SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  SupportSelectItemDraw_c *v1; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  SupportSelectItemDraw_c *v75; // x8
  struct SupportSelectItemDraw_StaticFields *v76; // x8

  if ( (byte_4E00F34 & 1) == 0 )
  {
    sub_1CE6700(&string___TypeInfo);
    sub_1CE6700(&SupportSelectItemDraw_TypeInfo);
    sub_1CE6700(&StringLiteral_20438/*"icon_class1002"*/);
    sub_1CE6700(&StringLiteral_20436/*"icon_class007"*/);
    sub_1CE6700(&StringLiteral_20435/*"icon_class006"*/);
    sub_1CE6700(&StringLiteral_20433/*"icon_class004"*/);
    sub_1CE6700(&StringLiteral_20430/*"icon_class001"*/);
    sub_1CE6700(&StringLiteral_20437/*"icon_class1001"*/);
    sub_1CE6700(&StringLiteral_20431/*"icon_class002"*/);
    sub_1CE6700(&StringLiteral_20434/*"icon_class005"*/);
    sub_1CE6700(&StringLiteral_20432/*"icon_class003"*/);
    byte_4E00F34 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v2 = sub_1CE67A8(string___TypeInfo, 9);
  if ( !v2 )
    sub_1CE6958(0, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_14;
  v11 = StringLiteral_20437/*"icon_class1001"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_20437/*"icon_class1001"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_14;
  v18 = StringLiteral_20430/*"icon_class001"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_20430/*"icon_class001"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_14;
  v25 = StringLiteral_20431/*"icon_class002"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_20431/*"icon_class002"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_14;
  v32 = StringLiteral_20432/*"icon_class003"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_20432/*"icon_class003"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 56), v32, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v10 + 24) <= 4u )
    goto LABEL_14;
  v39 = StringLiteral_20433/*"icon_class004"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_20433/*"icon_class004"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 64), v39, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v10 + 24) <= 5u )
    goto LABEL_14;
  v46 = StringLiteral_20434/*"icon_class005"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_20434/*"icon_class005"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 72), v46, v40, v41, v42, v43, v44, v45);
  if ( *(_DWORD *)(v10 + 24) <= 6u
    || (v53 = StringLiteral_20435/*"icon_class006"*/,
        *(_QWORD *)(v10 + 80) = StringLiteral_20435/*"icon_class006"*/,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 80), v53, v47, v48, v49, v50, v51, v52),
        *(_DWORD *)(v10 + 24) <= 7u)
    || (v60 = StringLiteral_20436/*"icon_class007"*/,
        *(_QWORD *)(v10 + 88) = StringLiteral_20436/*"icon_class007"*/,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 88), v60, v54, v55, v56, v57, v58, v59),
        *(_DWORD *)(v10 + 24) <= 8u) )
  {
LABEL_14:
    sub_1CE6960(v2);
  }
  v67 = StringLiteral_20438/*"icon_class1002"*/;
  *(_QWORD *)(v10 + 96) = StringLiteral_20438/*"icon_class1002"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 96), v67, v61, v62, v63, v64, v65, v66);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->backClassIconFileList, v10, v69, v70, v71, v72, v73, v74);
  v75 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_D24AE0;
  v76 = v75->static_fields;
  v76->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&v76->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v76->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  __int64 naturalAligment; // x9
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

  if ( (byte_4E00F33 & 1) == 0 )
  {
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UnityEngine_Transform_TypeInfo);
    byte_4E00F33 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1CE6958(0, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1CE6958(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_16:
      v14 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_37;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1CE6CF4(v15);
LABEL_37:
      sub_1CE6958(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1CE6958(0, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0);
      if ( !v23 )
        sub_1CE6958(0, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0);
    }
  }
  v25 = sub_1CE683C(Enumerator, System_IDisposable_TypeInfo);
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
      v30 = sub_1CBCA7C(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UISprite_o *v14; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *sortieMaskSprite; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UISprite_o *v31; // x8
  struct UIAtlas_o *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct UISprite_o *v39; // x8
  struct System_String_o *v40; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UISprite_o *v48; // x8
  struct UIAtlas_o *v49; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UISprite_o *v57; // x8
  struct UIAtlas_o *v58; // x1
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E00F2B & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00F2B = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v14 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v14 )
      goto LABEL_46;
    mSpriteName = v14->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultSpriteName,
      (int32_t)mSpriteName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.restrictionMaskSprite;
    if ( !v22 )
      goto LABEL_46;
    mAtlas = v22->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
      (int32_t)mAtlas,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v31 = this->fields.sortieMaskSprite;
    if ( !v31 )
      goto LABEL_46;
    v32 = v31->fields.mAtlas;
    this->fields.defaultSortieMaskAtlas = v32;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultSortieMaskAtlas,
      (int32_t)v32,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v39 = this->fields.sortieMaskSprite;
    if ( !v39 )
      goto LABEL_46;
    v40 = v39->fields.mSpriteName;
    this->fields.defaultSortieMaskSpriteName = v40;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultSortieMaskSpriteName,
      (int32_t)v40,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    transform = this->fields.sortieMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.defaultSortieMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    v67 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultSortieMaskPosition.fields.x = v67.fields.x;
    this->fields.defaultSortieMaskPosition.fields.y = v67.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v48 = this->fields.baseSprite;
    if ( !v48 )
      goto LABEL_46;
    v49 = v48->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v49;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)v49,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v57 = this->fields.base2Sprite;
    if ( v57 )
    {
      v58 = v57->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v58;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v58,
        (int32_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      goto LABEL_45;
    }
LABEL_46:
    sub_1CE6958(transform, v4);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v51);
  v59 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v59;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
}


void SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4E00F2C & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00F2C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1CE6958(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4E00F2E & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00F2E = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_1CE6958(gameObject, v4);
  }
}


void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4E00F31 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00F31 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1CE6958(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetEquipAlpha(SupportSelectItemDraw_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4E00F32 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00F32 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1CE6958(0, v6);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v7->klass->vtable._8_set_alpha.methodPtr)(
      v7,
      v7->klass->vtable._8_set_alpha.method,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  unsigned __int64 v10; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x28
  struct EquipTargetInfo_o *equipTarget1; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x19
  __int64 v19; // x20
  __int64 v20; // x21
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v22; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x22
  __int64 v27; // x19
  __int64 v28; // x20
  int32_t v29; // w20
  ServantEntity_o *v30; // x19
  int32_t v31; // w0
  int32_t v32; // w21
  int32_t v33; // w8
  _DWORD *v34; // x19
  int32_t AddedHp; // w0
  int v36; // w8
  int32_t FrameType; // w0
  ServantLeaderInfo_o *v38; // x19
  int32_t v39; // w22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v44; // x21
  Il2CppObject *v45; // x23
  System_Collections_Generic_List_object__o *v46; // x22
  struct EventUpValSetupInfo_o *v47; // x8
  struct System_Int32_array *v48; // x9
  il2cpp_array_size_t max_length; // x8
  _QWORD *v50; // x24
  unsigned __int64 v51; // x10
  int32_t v52; // w29
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v55; // x20
  EventPersonalMargeUpValInfo_o *v56; // x19
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x8
  __int64 v70; // x25
  unsigned __int64 v71; // x20
  Il2CppObject *v72; // x19
  _DWORD *v73; // x8
  int v74; // w8
  __int64 v75; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v77; // x8
  _QWORD *v78; // x28
  Il2CppObject *v79; // x24
  SupportServantData_o *v80; // x23
  System_Func_int__bool__o *v81; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  struct System_Object_array *items; // x8
  __int64 v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  struct QuestRestrictionInfo_o *v93; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v95; // x1
  char v96; // w24
  Il2CppObject *v97; // x23
  UISprite_o *backClassIcon; // x19
  __int64 v99; // x8
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v101; // x19
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v104; // x19
  UIAtlas_o *base2DefaultUIAtlas; // x20
  UnityEngine_Object_o *servantClassIcon; // x19
  UnityEngine_Object_o *levelLabel; // x19
  UnityEngine_Object_o *raritySprite; // x19
  UnityEngine_Object_o *attackLabel; // x19
  UnityEngine_Object_o *hpLabel; // x19
  UnityEngine_Object_o *sortieMaskSprite; // x19
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  UnityEngine_Object_o *appendSkillList; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  bool v116; // w22
  UISprite_o *equipSprite; // x19
  __int64 v118; // x20
  __int64 v119; // x21
  int32_t v120; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v122; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  int limitCount; // w19
  UserServantEntity_o *v125; // x19
  __int64 v126; // x19
  __int64 v127; // x20
  int32_t v128; // w22
  ServantEntity_o *v129; // x20
  int32_t v130; // w8
  int32_t AtkBoostValue; // w23
  int32_t HpBoostValue; // w20
  int v133; // w8
  Il2CppObject v134; // q1
  int64_t v135; // x19
  UnityEngine_Object_o *v136; // x19
  int v137; // w23
  int v138; // w20
  int32_t v139; // w19
  QuestRestrictionInfo_o *v140; // x20
  int32_t v141; // w21
  bool EventUpVal_44304984; // w19
  Il2CppObject *v143; // x23
  Il2CppObject *v144; // x27
  Il2CppObject *v145; // x26
  System_Collections_Generic_List_object__o *v146; // x24
  struct EventUpValSetupInfo_o *v147; // x8
  struct System_Int32_array *v148; // x29
  il2cpp_array_size_t v149; // x8
  ServantEntity_o *v150; // x25
  unsigned __int64 v151; // x21
  int32_t v152; // w20
  __int128 v153; // q0
  int32_t BuddyPoint; // w19
  Il2CppObject *v155; // x22
  EventServantPointRankEntity_o *v156; // x0
  int32_t v157; // w26
  EventMargeItemUpValInfo_o *v158; // x25
  EventPersonalMargeUpValInfo_o *v159; // x19
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  int v166; // w8
  __int64 v167; // x19
  unsigned int v168; // w20
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  Il2CppClass **v172; // x0
  UnityEngine_Object_o *v173; // x19
  _BOOL4 isGrandServant; // w20
  ServantClassIconComponent_o *v175; // x19
  UnityEngine_Vector2_o *v176; // x8
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  struct SupportSelectItemDraw_StaticFields *v180; // x8
  UnityEngine_Object_o *v181; // x19
  UILabel_o *v182; // x19
  UnityEngine_Object_o *v183; // x19
  int32_t v184; // w19
  int32_t v185; // w20
  System_String_o *Icon_41585092; // x19
  int32_t RarityIcon; // w21
  int32_t v188; // w20
  UISprite_o *v189; // x21
  float v190; // s8
  float v191; // s9
  float z; // s10
  UnityEngine_Object_o *v193; // x19
  SkillListTreasureDeviceComponent_o *v194; // x19
  SkillInfo_array *v195; // x20
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  __int64 v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  __int64 v205; // x8
  UnityEngine_Object_o *v206; // x19
  AppendSkillListComponent_o *v207; // x19
  SkillInfo_array *v208; // x20
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  __int64 v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  __int64 v218; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v220; // x0
  SwitchUIWidgetComponent_o *v221; // x19
  UnityEngine_Object_o *v222; // x19
  UnityEngine_Object_o *v223; // x19
  float v224; // s1 OVERLAPPED
  float v225; // s2
  float v226; // s0
  float v227; // s3
  UILabel_o *v228; // x19
  UnityEngine_Object_o *v229; // x19
  float v230; // s1 OVERLAPPED
  float v231; // s2
  float v232; // s0
  float v233; // s3
  UILabel_o *v234; // x19
  UnityEngine_Object_o *v235; // x19
  UISprite_o *v236; // x20
  UIAtlas_o *v237; // x19
  _BOOL4 v238; // w21
  UnityEngine_Object_o *v239; // x19
  UISprite_o *v240; // x20
  UIAtlas_o *v241; // x19
  _BOOL4 v242; // w21
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  _BOOL4 v244; // w22
  UISprite_o *v245; // x21
  UIAtlas_o *maskSpriteDefaultAtlas; // x19
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIWidget_o *v248; // x19
  float v249; // s2 OVERLAPPED
  struct SupportSelectItemDraw_StaticFields *v250; // x9
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x9
  int v253; // s1
  float v254; // s0
  UnityEngine_Object_o *v255; // x19
  const MethodInfo *v256; // x4
  _BOOL4 v257; // w22
  UISprite_o *v258; // x21
  UIAtlas_o *defaultSortieMaskAtlas; // x19
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIWidget_o *v261; // x19
  struct SupportSelectItemDraw_StaticFields *v262; // x9
  float *v263; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v265; // x19
  System_String_o *v266; // x0
  System_String_o *v267; // x1
  bool v268; // w2
  SupportSelectItemDraw_o *v269; // x0
  bool v270; // w3
  UnityEngine_Object_o *v271; // x19
  bool v272; // w1
  System_String_o *v273; // x0
  const MethodInfo *v274; // x3
  System_String_o *v275; // x19
  Il2CppObject *v276; // x0
  UnityEngine_Object_o *v277; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *v279; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v281; // w8
  __int64 v282; // x21
  int32_t eventId; // w19
  int32_t value; // w20
  EventCampaignEntity_o **m_Items; // x23
  EventCampaignEntity_o *v286; // x8
  EventCampaignEntity_o *v287; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v289; // w10
  System_Collections_Generic_List_object__o *v290; // x0
  System_Collections_Generic_List_object__o *v291; // x21
  UISprite_o *v292; // x19
  void *v293; // x20
  Il2CppClass *v294; // x21
  int32_t v295; // w20
  UnityEngine_Object_o *v296; // x19
  void *v297; // x19
  Il2CppClass *v298; // x20
  UnityEngine_Object_o *v299; // x19
  ServantLeaderInfo_o *v300; // x0
  EventMargeItemUpValInfo_array *v301; // x20
  int32_t v302; // w19
  int32_t v303; // w0
  UnityEngine_Object_o *v304; // x19
  bool v305; // w1
  UserServantEntity_o *userServantEntity; // x0
  int32_t v307; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v313; // x23
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  struct System_Object_array *v320; // x8
  _QWORD *v321; // x9
  __int64 v322; // x10
  Il2CppClass **v323; // x0
  UserServantLeaderEntity_o *v324; // [xsp+18h] [xbp-1E8h]
  bool v325; // [xsp+20h] [xbp-1E0h]
  int32_t v326; // [xsp+24h] [xbp-1DCh]
  int32_t AddedAtk; // [xsp+28h] [xbp-1D8h]
  int32_t adjustHp; // [xsp+2Ch] [xbp-1D4h]
  int32_t adjustAtk; // [xsp+30h] [xbp-1D0h]
  int32_t classId; // [xsp+34h] [xbp-1CCh]
  SupportSelectItemDraw_o *cardParams; // [xsp+38h] [xbp-1C8h]
  System_Int32_array *cardParamsa; // [xsp+38h] [xbp-1C8h]
  SupportSelectItemDraw_o *cardParamsb; // [xsp+38h] [xbp-1C8h]
  int32_t v334; // [xsp+40h] [xbp-1C0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+40h] [xbp-1C0h]
  int32_t v336; // [xsp+40h] [xbp-1C0h]
  int32_t treasureDeviceNum; // [xsp+44h] [xbp-1BCh]
  int32_t strengthStatus; // [xsp+48h] [xbp-1B8h]
  int32_t v339; // [xsp+4Ch] [xbp-1B4h]
  int32_t baseSvtId; // [xsp+50h] [xbp-1B0h]
  int32_t rarity; // [xsp+54h] [xbp-1ACh]
  _DWORD *v342; // [xsp+58h] [xbp-1A8h]
  int exceedCount; // [xsp+64h] [xbp-19Ch]
  __int64 v344; // [xsp+68h] [xbp-198h]
  EventServantPointRankMaster_o *v345; // [xsp+70h] [xbp-190h]
  _BOOL4 UniqueSvtRestriction; // [xsp+70h] [xbp-190h]
  System_Int32_array *codeIds; // [xsp+78h] [xbp-188h]
  System_Int32_array *codeIdsa; // [xsp+78h] [xbp-188h]
  Il2CppObject *v349; // [xsp+80h] [xbp-180h]
  int v350; // [xsp+80h] [xbp-180h]
  Il2CppObject *v351; // [xsp+88h] [xbp-178h]
  struct EquipTargetInfo_o *v352; // [xsp+90h] [xbp-170h]
  struct EquipTargetInfo_o *v353; // [xsp+90h] [xbp-170h]
  ServantLeaderInfo_o *v354; // [xsp+98h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+98h] [xbp-168h]
  ServantEntity_o *v356; // [xsp+A0h] [xbp-160h]
  int32_t v357; // [xsp+ACh] [xbp-154h]
  int v358; // [xsp+ACh] [xbp-154h]
  GrandQuestFolderBoardItem_o *p_monitor; // [xsp+B0h] [xbp-150h]
  bool IsDataLost; // [xsp+B0h] [xbp-150h]
  bool v361; // [xsp+B0h] [xbp-150h]
  Il2CppObject *object; // [xsp+B8h] [xbp-148h]
  _BOOL4 objecta; // [xsp+B8h] [xbp-148h]
  SupportServantData_o *objectb; // [xsp+B8h] [xbp-148h]
  UserServantEntity_o *v365; // [xsp+C0h] [xbp-140h]
  UserServantEntity_o *v366; // [xsp+C0h] [xbp-140h]
  _BOOL4 QuestRestriction; // [xsp+C0h] [xbp-140h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+C8h] [xbp-138h]
  int32_t svtId; // [xsp+DCh] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v371; // [xsp+E0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v372; // [xsp+100h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v373; // [xsp+120h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+140h] [xbp-C0h] BYREF
  bool isDuplicate; // [xsp+14Ch] [xbp-B4h] BYREF
  int32_t limitCountStage[2]; // [xsp+150h] [xbp-B0h] BYREF
  SkillInfo_array *v377; // [xsp+158h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+160h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+168h] [xbp-98h] BYREF
  int v380; // [xsp+174h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+178h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+188h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  UnityEngine_Vector3_o v390; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v391; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E00F2D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_IndexOf_int___);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_int____79945504);
    sub_1CE6700(&EventMargeItemUpValInfo_TypeInfo);
    sub_1CE6700(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&long___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79848656);
    sub_1CE6700(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&SupportSelectItemDraw_TypeInfo);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_1CE6700(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_1CE6700(&StringLiteral_11669/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1CE6700(&StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1CE6700(&StringLiteral_6504/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1CE6700(&StringLiteral_397/*"#,0"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00F2D = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v380 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  *(_QWORD *)limitCountStage = 0;
  v377 = 0;
  isDuplicate = 0;
  entity = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_608;
  size = switchSkillUIList->fields._size;
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_608;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_608;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0);
  eventUpVallInfo = 0;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_608;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_608;
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v383.fields.currentCryptoKey = v20;
      *(_QWORD *)&v383.fields.fakeValue = v19;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v383, 0);
      if ( !v18 )
        goto LABEL_608;
      gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v18,
                              gameObject,
                              (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v344 = gameObject;
      v351 = 0;
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_608;
    v22 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v22 )
      goto LABEL_608;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v351 = v22;
    klass = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v384.fields.currentCryptoKey = klass;
    *(_QWORD *)&v384.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v384, 0);
    if ( !v23 )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v23,
                            gameObject,
                            (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v351 = 0;
  }
  equipTarget1 = 0;
  v344 = gameObject;
  if ( !UserServantLeaderEntity )
  {
    v96 = 1;
    goto LABEL_113;
  }
LABEL_37:
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v96 = 0;
LABEL_113:
    gameObject = (__int64)this->fields.backClassIcon;
    v97 = v351;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    backClassIcon = this->fields.backClassIcon;
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v99 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
    if ( !v99 )
      goto LABEL_608;
    if ( *(_DWORD *)(v99 + 24) <= (unsigned int)classPos )
      goto LABEL_609;
    if ( !backClassIcon )
      goto LABEL_608;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v99 + 8LL * classPos + 32), 0);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v101 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v101, 9, baseDefaultUIAtlas, 0, 0, 0, 0);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
    {
      v104 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v104, 9, base2DefaultUIAtlas, 0, 0, 0);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_608;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_608;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_608;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_608;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0, 0) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    collection = 0;
    v116 = 0;
    if ( v351 )
      goto LABEL_532;
LABEL_188:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    if ( equipTarget1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v119 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v118 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v386.fields.currentCryptoKey = v119;
      *(_QWORD *)&v386.fields.fakeValue = v118;
      v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v386, 0);
      ImagePartsGroupIdxs_k__BackingField = equipTarget1->fields._ImagePartsGroupIdxs_k__BackingField;
      v122 = v120;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v122, ImagePartsGroupIdxs_k__BackingField, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        limitCount = equipTarget1->fields.limitCount;
        goto LABEL_547;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v136 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v136, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        LOBYTE(v10) = 0;
        goto LABEL_552;
      }
    }
    goto LABEL_553;
  }
  if ( supportServantData->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_608;
    gameObject = (__int64)ServantLeaderInfo__get_BaseServantEntity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_608;
    v28 = *(_QWORD *)(gameObject + 16);
    v27 = *(_QWORD *)(gameObject + 24);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v385.fields.currentCryptoKey = v28;
    *(_QWORD *)&v385.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v385, 0);
    gameObject = (__int64)ServantLeaderInfo__GetServantEntity(servantLeaderInfo, -1, 0);
    if ( !gameObject )
      goto LABEL_608;
    v30 = (ServantEntity_o *)gameObject;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(gameObject + 16),
            0);
    v32 = v30->fields.classId;
    svtId = v31;
    v356 = v30;
    gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    lv[1] = servantLeaderInfo->fields.lv;
    if ( !gameObject )
      goto LABEL_608;
    v33 = *(_DWORD *)(gameObject + 20);
    v34 = (_DWORD *)gameObject;
    lv[0] = v33;
    if ( equipTarget1 )
      lv[0] = equipTarget1->fields.atk + v33;
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_608;
    AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0);
    adjustHp = servantLeaderInfo->fields.adjustHp;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_608;
    classId = v32;
    baseSvtId = v29;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0);
    v36 = v34[4];
    v326 = AddedHp;
    v380 = v36;
    if ( equipTarget1 )
      v380 = equipTarget1->fields.hp + v36;
    rarity = v34[6];
    v342 = v34;
    exceedCount = servantLeaderInfo->fields.exceedCount;
    FrameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v34[10], 0);
    v38 = servantLeaderInfo;
    v39 = FrameType;
    ServantLeaderInfo__getSkillInfo(v38, &skillInfoList, -1, 0);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(v38, &tdInfo, -1, 0);
    if ( !tdInfo )
      goto LABEL_608;
    strengthStatus = tdInfo->fields.strengthStatus;
    v339 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_44711028(v38, &v377, 0, 0);
    v354 = v38;
    gameObject = ServantLeaderInfo__get_IsGrandSvt(v38, 0);
    this->fields.isGrandServant = gameObject & 1;
    eventSetupInfo = supportServantData->fields.eventSetupInfo;
    if ( !eventSetupInfo )
      goto LABEL_202;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_608;
    if ( eventIdList->max_length )
    {
      v334 = v39;
      EventUpVal = ServantLeaderInfo__getEventUpVal(
                     v38,
                     &eventUpVallInfo,
                     eventSetupInfo,
                     supportServantData->fields.questRestrictionInfo == 0,
                     0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v44 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v45 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_FunctionMaster___);
      v46 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v47 = supportServantData->fields.eventSetupInfo;
      if ( !v47 )
        goto LABEL_608;
      v48 = v47->fields.eventIdList;
      v345 = (EventServantPointRankMaster_o *)v44;
      v325 = EventUpVal;
      v324 = UserServantLeaderEntity;
      cardParams = this;
      if ( !v48 )
        goto LABEL_608;
      max_length = v48->max_length;
      if ( (int)max_length >= 1 )
      {
        v50 = &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        v51 = 0;
        v352 = equipTarget1;
        codeIds = v48;
        v349 = Master_object;
        while ( 1 )
        {
          if ( v51 >= (unsigned int)max_length )
            goto LABEL_609;
          v365 = (UserServantEntity_o *)v51;
          v52 = v48->m_Items[v51];
          object = (Il2CppObject *)sub_1CE694C(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
          System_Object___ctor(object, 0);
          if ( !Master_object )
            goto LABEL_608;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  v52,
                                  (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                (gameObject & 1) == 0) )
          {
            if ( !v345 )
              goto LABEL_608;
            if ( EventServantPointRankMaster__IsEnableEvent(v345, v52, 0) )
            {
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                               v345,
                               v52,
                               v354->fields.eventSvtPoint,
                               svtId,
                               0);
              if ( EnableEntity )
                svtPointRank = EnableEntity->fields.svtPointRank;
              else
                svtPointRank = 0;
              v55 = (EventMargeItemUpValInfo_o *)sub_1CE694C(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_42871760(v55, v52, 0);
              if ( !v55 )
                goto LABEL_608;
              EventMargeItemUpValInfo__SetServantPointInfo(v55, v354->fields.eventSvtPoint, svtPointRank, 1, 0);
              if ( !v46 )
                goto LABEL_608;
              System_Collections_Generic_List_object___Insert(
                v46,
                0,
                (Il2CppObject *)v55,
                (const MethodInfo_3906D18 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            v56 = (EventPersonalMargeUpValInfo_o *)sub_1CE694C(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v56, v52, v356, 0);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_608;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
            if ( !v56 )
              goto LABEL_608;
            EventPersonalMargeUpValInfo__Add(v56, (EventDropItemUpValInfo_array *)gameObject, 0);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v56, 0);
            if ( (gameObject & 1) == 0 )
            {
              if ( supportServantData->fields.questRestrictionInfo )
              {
                gameObject = (__int64)supportServantData->fields.eventSetupInfo;
                if ( !gameObject )
                  goto LABEL_608;
                gameObject = (__int64)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                        (EventUpValSetupInfo_o *)gameObject,
                                        v52,
                                        0);
                v10 = gameObject;
              }
              else
              {
                v10 = 0;
              }
              if ( !object )
                goto LABEL_608;
              object[1].klass = (Il2CppClass *)v10;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)&object[1], v10, v57, v58, v59, v60, v61, v62);
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v56, 0);
              if ( !gameObject )
                goto LABEL_608;
              v69 = *(_QWORD *)(gameObject + 24);
              v70 = gameObject;
              if ( (int)v69 >= 1 )
                break;
            }
          }
LABEL_106:
          v48 = codeIds;
          Master_object = v349;
          equipTarget1 = v352;
          LODWORD(max_length) = codeIds->max_length;
          v51 = (unsigned __int64)&v365->klass + 1;
          if ( (__int64)&v365->klass + 1 >= (int)max_length )
            goto LABEL_107;
        }
        v71 = 0;
        p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
        v357 = v52;
        while ( v71 < (unsigned int)v69 )
        {
          v72 = *(Il2CppObject **)(v70 + 32 + 8 * v71);
          if ( !supportServantData->fields.questRestrictionInfo )
            goto LABEL_612;
          if ( !v72 )
            goto LABEL_608;
          v73 = v72[2].monitor;
          if ( !v73 )
            goto LABEL_608;
          if ( !v45 )
            goto LABEL_608;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                                  v73[4],
                                  (const MethodInfo_34E925C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( !gameObject )
            goto LABEL_608;
          v74 = *(_DWORD *)(gameObject + 24);
          v75 = gameObject;
          if ( v74 == 1 || v74 == 16 )
            goto LABEL_613;
          questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_608;
          if ( v52 == questRestrictionInfo->fields.eventId )
          {
LABEL_613:
            v77 = *(_QWORD *)(gameObject + 80);
            if ( !v77 )
              goto LABEL_608;
            if ( !*(_QWORD *)(v77 + 24) )
              goto LABEL_612;
            gameObject = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)object[1].klass, 0);
            if ( (gameObject & 1) == 0 )
            {
              v78 = v50;
              v79 = v45;
              v80 = supportServantData;
              v81 = (System_Func_int__bool__o *)p_monitor->klass;
              v82 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v75 + 80);
              if ( !p_monitor->klass )
              {
                v81 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v81,
                  object,
                  Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                  0);
                object[1].monitor = v81;
                sub_1CE66A4(p_monitor, (int32_t)v81, v83, v84, v85, v86, v87, v88);
              }
              gameObject = System_Linq_Enumerable__Any_int__52501540(
                             v82,
                             (System_Func_TSource__bool__o *)v81,
                             (const MethodInfo_3211C24 *)Method_System_Linq_Enumerable_Any_int____79945504);
              supportServantData = v80;
              v45 = v79;
              v50 = v78;
              v52 = v357;
              if ( (gameObject & 1) != 0 )
              {
LABEL_612:
                if ( !v46 )
                  goto LABEL_608;
                items = v46->fields._items;
                v90 = *v50;
                ++v46->fields._version;
                if ( !items )
                  goto LABEL_608;
                v91 = v46->fields._size;
                if ( (unsigned int)v91 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v46,
                    v72,
                    *(const MethodInfo_3905F68 **)(*(_QWORD *)(*(_QWORD *)(v90 + 32) + 192LL) + 112LL));
                }
                else
                {
                  v92 = &items->obj.klass + v91;
                  v46->fields._size = v91 + 1;
                  v92[4] = (Il2CppClass *)v72;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)v72, v63, v64, v65, v66, v67, v68);
                }
              }
            }
          }
          LODWORD(v69) = *(_DWORD *)(v70 + 24);
          if ( (__int64)++v71 >= (int)v69 )
            goto LABEL_106;
        }
        goto LABEL_609;
      }
LABEL_107:
      v93 = supportServantData->fields.questRestrictionInfo;
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      this = cardParams;
      UserServantLeaderEntity = v324;
      if ( v93 )
      {
        AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                 (PartyOrganizationUtility_o *)gameObject,
                                 &isDuplicate,
                                 (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v46,
                                 0);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v95 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
      }
      else
      {
        v95 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v46;
      }
      v39 = v334;
      collection = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                    (PartyOrganizationUtility_o *)gameObject,
                                                                    v95,
                                                                    0);
    }
    else
    {
LABEL_202:
      collection = 0;
      v325 = 0;
    }
    codeIdsa = ServantLeaderInfo__getCommandCodeIdList(v354, 0);
    cardParamsa = v354->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(v354, supportServantData->fields.questRestrictionInfo, 0);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             v354,
                             supportServantData->fields.questRestrictionInfo,
                             0);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         v354,
                                         supportServantData->fields.questRestrictionInfo,
                                         0,
                                         0);
    if ( ServantLeaderInfo__IsSlotRestriction(v354, supportServantData->fields.questRestrictionInfo, 0) )
    {
      objecta = 1;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      v138 = *(_DWORD *)(gameObject + 80);
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      if ( v138 < 1 )
        goto LABEL_241;
      if ( !supportServantData->fields.questRestrictionInfo )
        goto LABEL_608;
      v139 = *(_DWORD *)(gameObject + 84);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(
             supportServantData->fields.questRestrictionInfo,
             v139,
             0) )
      {
        v140 = supportServantData->fields.questRestrictionInfo;
        v141 = v354->fields.limitCount;
        gameObject = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(v354, -1, 0);
        if ( !v140 )
          goto LABEL_608;
        objecta = QuestRestrictionInfo__IsRestrictionServantIndividuality(v140, svtId, v141, gameObject, v139, 1, 0);
      }
      else
      {
LABEL_241:
        objecta = 0;
      }
    }
    v358 = AddedAtk + adjustAtk;
    v350 = v326 + adjustHp;
    v137 = v325;
    IsDataLost = ServantLeaderInfo__IsDataLost(v354, supportServantData->fields.questRestrictionInfo, 0);
    TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v354, supportServantData->fields.questRestrictionInfo, 0);
  }
  else
  {
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            UserServantLeaderEntity->fields.userSvtId,
                            (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !gameObject )
      goto LABEL_608;
    v125 = (UserServantEntity_o *)gameObject;
    gameObject = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    v366 = v125;
    v127 = *(_QWORD *)(gameObject + 16);
    v126 = *(_QWORD *)(gameObject + 24);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v387.fields.currentCryptoKey = v127;
    *(_QWORD *)&v387.fields.fakeValue = v126;
    v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v387, 0);
    gameObject = (__int64)UserServantEntity__GetServantEntity(v366, -1, 0);
    if ( !gameObject )
      goto LABEL_608;
    v129 = (ServantEntity_o *)gameObject;
    svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(gameObject + 16),
              0);
    v356 = v129;
    classId = v129->fields.classId;
    gameObject = (__int64)UserServantEntity__GetOverwriteStatus(v366, 0, 0);
    lv[1] = v366->fields.lv;
    if ( !gameObject )
      goto LABEL_608;
    v130 = *(_DWORD *)(gameObject + 20);
    v342 = (_DWORD *)gameObject;
    lv[0] = v130;
    if ( v351 )
      lv[0] = LODWORD(v351[25].monitor) + v130;
    baseSvtId = v128;
    AtkBoostValue = UserServantEntity__get_AtkBoostValue(v366, 0);
    HpBoostValue = UserServantEntity__get_HpBoostValue(v366, 0);
    v133 = v342[4];
    v380 = v133;
    if ( v351 )
      v380 = HIDWORD(v351[25].monitor) + v133;
    rarity = v342[6];
    exceedCount = v366->fields.exceedCount;
    v39 = UserServantEntity__GetFrameType(v366, v342[10], 0);
    UserServantEntity__getSkillInfo(v366, &skillInfoList, -1, -1, 1, 0, -1, 0);
    gameObject = UserServantEntity__getTreasureDeviceInfo(v366, &tdInfo, -1, -1, 0, 0);
    if ( !tdInfo )
      goto LABEL_608;
    strengthStatus = tdInfo->fields.strengthStatus;
    v339 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    UserServantEntity__GetAppendPassiveSkillInfo_44331936(v366, &v377, 0);
    this->fields.isGrandServant = UserServantEntity__IsGrandServant(v366, 0);
    v350 = HpBoostValue;
    v358 = AtkBoostValue;
    if ( supportServantData->fields.eventSetupInfo )
    {
      if ( v351 )
      {
        v134 = v351[2];
        *(Il2CppObject *)&v373.fields.currentCryptoKey = v351[1];
        *(Il2CppObject *)&v373.fields.fakeValue = v134;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v372 = v373;
        v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v372, 0);
      }
      else
      {
        v135 = -1;
      }
      gameObject = sub_1CE67A8(long___TypeInfo, 1);
      if ( !gameObject )
        goto LABEL_608;
      if ( !*(_DWORD *)(gameObject + 24) )
        goto LABEL_609;
      *(_QWORD *)(gameObject + 32) = v135;
      EventUpVal_44304984 = UserServantEntity__getEventUpVal_44304984(
                              v366,
                              &eventUpVallInfo,
                              supportServantData->fields.eventSetupInfo,
                              (System_Int64_array *)gameObject,
                              0,
                              1,
                              0,
                              1,
                              0);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      objectb = supportServantData;
      v143 = DataManager__GetMasterData_object_(
               (DataManager_o *)gameObject,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v353 = equipTarget1;
      v144 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v145 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v146 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v146,
        (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v147 = objectb->fields.eventSetupInfo;
      if ( !v147 )
        goto LABEL_608;
      v148 = v147->fields.eventIdList;
      v361 = EventUpVal_44304984;
      v336 = v39;
      cardParamsb = this;
      if ( !v148 )
        goto LABEL_608;
      v149 = v148->max_length;
      v150 = v356;
      if ( (int)v149 >= 1 )
      {
        v151 = 0;
        while ( 1 )
        {
          if ( v151 >= (unsigned int)v149 )
            goto LABEL_609;
          if ( !v143 )
            goto LABEL_608;
          v152 = v148->m_Items[v151];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v143,
                                  v152,
                                  (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                (gameObject & 1) == 0) )
          {
            if ( !v144 )
              goto LABEL_608;
            if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v144, v152, 0) )
            {
              v153 = *(_OWORD *)&v366->fields.userId.fields.fakeValue;
              *(_OWORD *)&v373.fields.currentCryptoKey = *(_OWORD *)&v366->fields.userId.fields.currentCryptoKey;
              *(_OWORD *)&v373.fields.fakeValue = v153;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v371 = v373;
              gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v371, 0);
              if ( !v145 )
                goto LABEL_608;
              if ( UserEventServantPointMaster__TryGetEntity(
                     (UserEventServantPointMaster_o *)v145,
                     &entity,
                     gameObject,
                     v152,
                     svtId,
                     0) )
              {
                gameObject = (__int64)entity;
                if ( !entity )
                  goto LABEL_608;
                BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
              }
              else
              {
                BuddyPoint = 0;
              }
              v155 = v145;
              v156 = EventServantPointRankMaster__GetEnableEntity(
                       (EventServantPointRankMaster_o *)v144,
                       v152,
                       BuddyPoint,
                       svtId,
                       0);
              v157 = v156 ? v156->fields.svtPointRank : 0;
              v158 = (EventMargeItemUpValInfo_o *)sub_1CE694C(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_42871760(v158, v152, 0);
              if ( !v158 )
                goto LABEL_608;
              EventMargeItemUpValInfo__SetServantPointInfo(v158, BuddyPoint, v157, 0, 0);
              if ( !v146 )
                goto LABEL_608;
              System_Collections_Generic_List_object___Insert(
                v146,
                0,
                (Il2CppObject *)v158,
                (const MethodInfo_3906D18 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              v145 = v155;
              v150 = v356;
            }
            v159 = (EventPersonalMargeUpValInfo_o *)sub_1CE694C(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v159, v152, v150, 0);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_608;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
            if ( !v159 )
              goto LABEL_608;
            EventPersonalMargeUpValInfo__Add(v159, (EventDropItemUpValInfo_array *)gameObject, 0);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v159, 0);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v159, 0);
              if ( !gameObject )
                goto LABEL_608;
              v166 = *(_DWORD *)(gameObject + 24);
              v167 = gameObject;
              if ( v166 >= 1 )
                break;
            }
          }
LABEL_287:
          LODWORD(v149) = v148->max_length;
          if ( (__int64)++v151 >= (int)v149 )
            goto LABEL_288;
        }
        v168 = 0;
        while ( v168 < v166 )
        {
          v10 = *(_QWORD *)(v167 + 8LL * (int)v168 + 32);
          if ( !v10 )
            goto LABEL_608;
          if ( *(_DWORD *)(v10 + 60) != 111 )
          {
            if ( !v146 )
              goto LABEL_608;
            v169 = v146->fields._items;
            v170 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v146->fields._version;
            if ( !v169 )
              goto LABEL_608;
            v171 = v146->fields._size;
            if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v146,
                (Il2CppObject *)v10,
                *(const MethodInfo_3905F68 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
            }
            else
            {
              v172 = &v169->obj.klass + v171;
              v146->fields._size = v171 + 1;
              v172[4] = (Il2CppClass *)v10;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v172 + 4), v10, v160, v161, v162, v163, v164, v165);
            }
          }
          v166 = *(_DWORD *)(v167 + 24);
          if ( (int)++v168 >= v166 )
            goto LABEL_287;
        }
LABEL_609:
        sub_1CE6960(gameObject);
      }
LABEL_288:
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      v137 = v361;
      collection = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                    (PartyOrganizationUtility_o *)gameObject,
                                                                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v146,
                                                                    0);
      this = cardParamsb;
      supportServantData = objectb;
      equipTarget1 = v353;
      v39 = v336;
    }
    else
    {
      collection = 0;
      v137 = 0;
    }
    codeIdsa = UserServantEntity__getCommandCodeIdList(v366, 0);
    TimesToRestart = 0;
    IsDataLost = 0;
    objecta = 0;
    IsUniqueIndividualityRestriction = 0;
    UniqueSvtRestriction = 0;
    QuestRestriction = 0;
    cardParamsa = 0;
  }
  UserServantLeaderEntity__TryGetNarrowFigureLimitCountStage(
    UserServantLeaderEntity,
    &limitCountStage[1],
    limitCountStage,
    0);
  gameObject = (__int64)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_608;
  UINarrowFigureTexture__SetCharacter(
    (UINarrowFigureTexture_o *)gameObject,
    limitCountStage[1],
    limitCountStage[0],
    0,
    0);
  v173 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v173, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_608;
      ServantClassIconComponent__SetImage(
        (ServantClassIconComponent_o *)gameObject,
        classId,
        v39,
        0,
        this->fields.isGrandServant,
        0,
        0);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_608;
      ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0);
      isGrandServant = this->fields.isGrandServant;
      v175 = this->fields.servantClassIcon;
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      }
      v176 = *(UnityEngine_Vector2_o **)(gameObject + 184);
      if ( isGrandServant )
      {
        if ( !v175 )
          goto LABEL_608;
        ServantClassIconComponent__RePositionClassIcon(v175, v176[1], 0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_608;
        static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
        x = static_fields->GrandClassNamePosition.fields.x;
        y = static_fields->GrandClassNamePosition.fields.y;
      }
      else
      {
        if ( !v175 )
          goto LABEL_608;
        ServantClassIconComponent__RePositionClassIcon(v175, *v176, 0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_608;
        v180 = SupportSelectItemDraw_TypeInfo->static_fields;
        x = v180->ClassNamePosition.fields.x;
        y = v180->ClassNamePosition.fields.y;
      }
      ServantClassIconComponent__RePositionClassName(
        (ServantClassIconComponent_o *)gameObject,
        *(UnityEngine_Vector2_o *)&x,
        0);
    }
  }
  v181 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v181, 0, 0) )
  {
    v182 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
    if ( !v182 )
      goto LABEL_608;
    UILabel__set_text(v182, (System_String_o *)gameObject, 0);
  }
  v183 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v183, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v184 = lv[1];
    v185 = v342[10];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_41585092 = Rarity__getIcon_41585092(rarity, exceedCount, v184, v185, 0);
    if ( exceedCount < 1 )
    {
      v188 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_608;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v185, exceedCount, 0, 0, 0);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_608;
      v188 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, v185, lv[1], RarityIcon, 0, 0);
    }
    v189 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v188 >= 3 )
    {
      AtlasManager__SetEventSprite(v189, Icon_41585092, 0);
    }
    else
    {
      AtlasManager__SetCommon(v189, 0);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_608;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_41585092, 0);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_608;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v190 = exceedCount >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_608;
    v191 = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    v390.fields.x = v190;
    v390.fields.y = v191;
    v390.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v390, 0);
  }
  v193 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v193, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v194 = this->fields.skillListTreasureDevice;
    v195 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_42427444(v195, 0);
    if ( !v194 )
      goto LABEL_608;
    SkillListTreasureDeviceComponent__Set(
      v194,
      (System_String_o *)gameObject,
      v339,
      strengthStatus,
      treasureDeviceNum,
      0,
      0,
      0);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v10 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v202 = *(_QWORD *)(gameObject + 16);
      v203 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v202 )
        goto LABEL_608;
      v204 = *(int *)(gameObject + 24);
      if ( (unsigned int)v204 >= *(_DWORD *)(v202 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v10,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
      }
      else
      {
        v205 = v202 + 8 * v204;
        *(_DWORD *)(gameObject + 24) = v204 + 1;
        *(_QWORD *)(v205 + 32) = v10;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v205 + 32), v10, v196, v197, v198, v199, v200, v201);
      }
    }
  }
  v206 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v206, 0, 0) )
  {
    if ( v377 && v377->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v207 = this->fields.appendSkillList;
      v208 = v377;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_42427444(v208, 0);
      if ( !v207 )
        goto LABEL_608;
      AppendSkillListComponent__Set(v207, (System_String_o *)gameObject, 0);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v10 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v215 = *(_QWORD *)(gameObject + 16);
        v216 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v215 )
          goto LABEL_608;
        v217 = *(int *)(gameObject + 24);
        if ( (unsigned int)v217 >= *(_DWORD *)(v215 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v10,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
        }
        else
        {
          v218 = v215 + 8 * v217;
          *(_DWORD *)(gameObject + 24) = v217 + 1;
          *(_QWORD *)(v218 + 32) = v10;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v218 + 32), v10, v209, v210, v211, v212, v213, v214);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
  {
    v220 = this->fields.switchSkillUIList;
    if ( v220 )
    {
      v221 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v220,
                              (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v221 )
        goto LABEL_608;
      SwitchUIWidgetComponent__Set(v221, (UIWidget_array *)gameObject, 0, 0);
    }
  }
  v222 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v222, 0, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_608;
    if ( supportServantData->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_42224604(
        (ServantCommandCardListComponent_o *)gameObject,
        baseSvtId,
        svtId,
        cardParamsa,
        codeIdsa,
        2,
        0,
        0);
    else
      ServantCommandCardListComponent__Set_42224868(
        (ServantCommandCardListComponent_o *)gameObject,
        baseSvtId,
        svtId,
        codeIdsa,
        2,
        0,
        0);
  }
  v223 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v223, 0, 0) )
  {
    v224 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v358 <= 0 )
      v225 = 1.0;
    else
      v225 = 0.015686;
    if ( v358 <= 0 )
      v224 = 1.0;
    if ( !gameObject )
      goto LABEL_608;
    v226 = 1.0;
    v227 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v224 - 1), 0);
    v228 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_66631324((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v228 )
      goto LABEL_608;
    UILabel__set_text(v228, (System_String_o *)gameObject, 0);
  }
  v229 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v229, 0, 0) )
  {
    v230 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( v350 <= 0 )
      v231 = 1.0;
    else
      v231 = 0.015686;
    if ( v350 <= 0 )
      v230 = 1.0;
    if ( !gameObject )
      goto LABEL_608;
    v232 = 1.0;
    v233 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v230 - 1), 0);
    v234 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_66631324((int32_t)&v380, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v234 )
      goto LABEL_608;
    UILabel__set_text(v234, (System_String_o *)gameObject, 0);
  }
  v235 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v235, 0, 0) )
  {
    v236 = this->fields.baseSprite;
    v237 = this->fields.baseDefaultUIAtlas;
    v238 = this->fields.isGrandServant;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v236, v39, v237, 0, v238, 0, 0);
  }
  v239 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v239, 0, 0) )
  {
    v240 = this->fields.base2Sprite;
    v241 = this->fields.base2DefaultUIAtlas;
    v242 = this->fields.isGrandServant;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v240, v39, v241, 0, v242, 0);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    v244 = this->fields.isGrandServant;
    v245 = this->fields.restrictionMaskSprite;
    maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
    maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   v244,
                   v245,
                   maskSpriteDefaultSpriteName,
                   maskSpriteDefaultAtlas,
                   0);
    v248 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v248 )
        goto LABEL_608;
      UIWidget__set_width(v248, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
        0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v249 = 0.0;
      v250 = SupportSelectItemDraw_TypeInfo->static_fields;
      p_y = &v250->GrandMaskPosition05.fields.y;
      p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&v250->GrandMaskPosition05;
    }
    else
    {
      if ( !v248 )
        goto LABEL_608;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultWidth, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v249 = this->fields.maskSpriteDefaultPosition.fields.z;
      p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v253 = *(_DWORD *)p_y;
    v254 = p_GrandMaskPosition05->fields.x;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)gameObject,
      *(UnityEngine_Vector3_o *)(&v249 - 2),
      0);
  }
  v255 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v255, 0, 0) )
  {
    v257 = this->fields.isGrandServant;
    v258 = this->fields.sortieMaskSprite;
    defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
    defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   v257,
                   v258,
                   defaultSortieMaskSpriteName,
                   defaultSortieMaskAtlas,
                   0);
    v261 = (UIWidget_o *)this->fields.sortieMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v261 )
        goto LABEL_608;
      UIWidget__set_width(v261, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
        0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v262 = SupportSelectItemDraw_TypeInfo->static_fields;
      v263 = &v262->GrandMaskPosition05.fields.y;
      p_defaultSortieMaskPosition = &v262->GrandMaskPosition05;
    }
    else
    {
      if ( !v261 )
        goto LABEL_608;
      UIWidget__set_width((UIWidget_o *)this->fields.sortieMaskSprite, this->fields.defaultSortieMaskWidth, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultSortieMaskHeight, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v263 = &this->fields.defaultSortieMaskPosition.fields.y;
      p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
    }
    v391.fields.y = *v263;
    v391.fields.x = p_defaultSortieMaskPosition->fields.x;
    v391.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v391, 0);
  }
  if ( objecta || QuestRestriction )
  {
    v265 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v265, 0, 0) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v266 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_470;
  }
  if ( !supportServantData->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v356, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41569468(126, 0) )
    {
      v271 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v271, 0, 0) )
        goto LABEL_501;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v272 = 1;
LABEL_500:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v272, 0);
LABEL_501:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
      goto LABEL_502;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v270 = 1;
      v269 = this;
      v268 = 0;
      v267 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_471;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v275 = LocalizationManager__Get((System_String_o *)StringLiteral_11669/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
      LODWORD(v373.fields.currentCryptoKey) = TimesToRestart;
      v276 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v373);
      v266 = System_String__Format(v275, v276, 0);
LABEL_470:
      v267 = v266;
      v268 = 1;
      v269 = this;
      v270 = 0;
LABEL_471:
      SupportSelectItemDraw__SetMaskMessage(v269, v267, v268, v270, v256);
      goto LABEL_502;
    }
    v277 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v277, 0, 0) )
      goto LABEL_501;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    v272 = 0;
    goto LABEL_500;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v273 = LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
  SupportSelectItemDraw__SetWarningMessage(this, v273, 1, v274);
LABEL_502:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0, 0) )
  {
    v279 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v279, 0, 0) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
  v96 = 0;
  v116 = v137 != 0;
  if ( !eventFriendPoints )
    goto LABEL_606;
  v97 = v351;
  if ( (gameObject & 1) == 0 )
    goto LABEL_531;
  v281 = eventFriendPoints->max_length;
  if ( v281 < 1 )
    goto LABEL_530;
  v282 = 0;
  eventId = 0;
  value = 0;
  m_Items = eventFriendPoints->m_Items;
  do
  {
    if ( (unsigned int)v282 >= v281 )
      goto LABEL_609;
    v286 = m_Items[v282];
    if ( !v286 )
      goto LABEL_608;
    gameObject = System_Array__IndexOf_int_(
                   v286->fields.targetIds,
                   svtId,
                   (const MethodInfo_330B610 *)Method_System_Array_IndexOf_int___);
    v281 = eventFriendPoints->max_length;
    if ( (unsigned int)v282 >= v281 )
      goto LABEL_609;
    v287 = m_Items[v282];
    if ( !v287 )
      goto LABEL_608;
    targetIds = v287->fields.targetIds;
    if ( targetIds )
      v289 = LODWORD(targetIds->max_length) == 0;
    else
      v289 = 1;
    if ( (v289 || (int)gameObject >= 0) && value < v287->fields.value )
    {
      eventId = v287->fields.eventId;
      value = v287->fields.value;
    }
    ++v282;
  }
  while ( (int)v282 < v281 );
  v97 = v351;
  if ( value < 1 )
  {
LABEL_530:
    v96 = 0;
LABEL_531:
    if ( v97 )
      goto LABEL_532;
    goto LABEL_188;
  }
  v290 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  v291 = v290;
  if ( collection )
    System_Collections_Generic_List_object____ctor_59791452(
      v290,
      collection,
      (const MethodInfo_390585C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79848656);
  else
    System_Collections_Generic_List_object____ctor(
      v290,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v313 = (EventMargeItemUpValInfo_o *)sub_1CE694C(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor_42871680(v313, eventId, value, 0);
  if ( !v291 )
    goto LABEL_608;
  v320 = v291->fields._items;
  v321 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v291->fields._version;
  if ( !v320 )
    goto LABEL_608;
  v322 = v291->fields._size;
  if ( (unsigned int)v322 >= LODWORD(v320->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v291,
      (Il2CppObject *)v313,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v321[4] + 192LL) + 112LL));
  }
  else
  {
    v323 = &v320->obj.klass + v322;
    v291->fields._size = v322 + 1;
    v323[4] = (Il2CppClass *)v313;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v323 + 4), (int32_t)v313, v314, v315, v316, v317, v318, v319);
  }
  v96 = 0;
  collection = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                v291,
                                                                (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_606:
  v97 = v351;
  if ( !v351 )
    goto LABEL_188;
LABEL_532:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v292 = (UISprite_o *)this->fields.equipSprite;
  v294 = v97[5].klass;
  v293 = v97[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v388.fields.currentCryptoKey = v294;
  *(_QWORD *)&v388.fields.fakeValue = v293;
  v295 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v388, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v292, v295, 0, 0);
  v296 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v296, 0, 0) )
  {
    v298 = v97[6].klass;
    v297 = v97[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v389.fields.currentCryptoKey = v298;
    *(_QWORD *)&v389.fields.fakeValue = v297;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v389, 0);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_608;
    limitCount = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_547:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( limitCount >= 4 )
    {
      if ( !v344 )
        goto LABEL_608;
      v10 = *(_DWORD *)(v344 + 88) >= limitCount;
    }
    else
    {
      v10 = 0;
    }
    if ( gameObject )
    {
LABEL_552:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
      goto LABEL_553;
    }
LABEL_608:
    sub_1CE6958(gameObject, v10);
  }
LABEL_553:
  v299 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v299, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v96 & 1) == 0 )
      {
        v300 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v300 )
        {
          gameObject = ServantLeaderInfo__GetServantId(v300, -1, 0);
          v301 = (EventMargeItemUpValInfo_array *)collection;
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_608;
          v302 = gameObject;
          v303 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_570:
          v307 = v303;
          goto LABEL_572;
        }
      }
    }
    else if ( (v96 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        gameObject = UserServantEntity__GetServantId(userServantEntity, -1, 0);
        v301 = (EventMargeItemUpValInfo_array *)collection;
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_608;
        v302 = gameObject;
        v303 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_570;
      }
    }
    v301 = (EventMargeItemUpValInfo_array *)collection;
    v307 = -1;
    v302 = -1;
LABEL_572:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_608;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)gameObject, v301, v302, v307, equipSvtId, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_608;
      v305 = 0;
      goto LABEL_581;
    }
    goto LABEL_582;
  }
  v304 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v304, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_608;
    v305 = v116;
LABEL_581:
    ShiningIconComponent__Set_42252400((ShiningIconComponent_o *)gameObject, v305, 0);
  }
LABEL_582:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_608;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
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
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_608;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v12; // x21
  UIWidget_o *v13; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float z; // s2 OVERLAPPED
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  _BOOL4 isGrandServant; // w23
  UISprite_o *v19; // x22
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  UIWidget_o *sortieMaskSprite; // x21
  struct SupportSelectItemDraw_StaticFields *v22; // x9
  int v23; // s1
  float x; // s0
  float v25; // s0
  float v26; // s8
  UnityEngine_Transform_o *v27; // x20
  float restrictionMaskMessageWidth; // s0
  float v29; // s0 OVERLAPPED
  float v30; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4E00F2F & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&SupportSelectItemDraw_TypeInfo);
    sub_1CE6700(&StringLiteral_20694/*"img_frames_mask05"*/);
    sub_1CE6700(&StringLiteral_18697/*"datalost_party_edit"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00F2F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isDataLost )
    {
      v12 = this->fields.restrictionMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18697/*"datalost_party_edit"*/, 0);
      v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v13 )
        goto LABEL_56;
      UIWidget__set_width(v13, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_56;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_56;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_56;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      isGrandServant = this->fields.isGrandServant;
      v19 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
             isGrandServant,
             v19,
             (System_String_o *)StringLiteral_20694/*"img_frames_mask05"*/,
             maskSpriteDefaultAtlas,
             0) )
      {
        sortieMaskSprite = (UIWidget_o *)this->fields.sortieMaskSprite;
        gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !sortieMaskSprite )
          goto LABEL_56;
        UIWidget__set_width(sortieMaskSprite, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_height(
          (UIWidget_o *)gameObject,
          SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
          0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_56;
        z = 0.0;
        v22 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v22->GrandMaskPosition05.fields.y;
        p_DATA_LOST_MASK_POSITION = (struct UnityEngine_Vector3_o *)&v22->GrandMaskPosition05;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_56;
        z = this->fields.maskSpriteDefaultPosition.fields.z;
        p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
    }
    v23 = *(_DWORD *)p_y;
    x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)gameObject,
      *(UnityEngine_Vector3_o *)(&z - 2),
      0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_56;
    if ( isScale )
    {
      LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_56;
      v26 = v25;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v26 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4DFE0AE )
        {
          gameObject = (UnityEngine_Component_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
          byte_4DFE0AE = 1;
        }
        v33 = UnityEngine_Vector3_TypeInfo->static_fields;
        v29 = v33->oneVector.fields.x;
        y = v33->oneVector.fields.y;
        v30 = v33->oneVector.fields.z;
      }
      else
      {
        v29 = restrictionMaskMessageWidth / v26;
        v30 = 1.0;
        y = 1.0;
      }
      if ( !v27 )
        goto LABEL_56;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4DFE0AE )
      {
        gameObject = (UnityEngine_Component_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
        byte_4DFE0AE = 1;
      }
      if ( !v27 )
        goto LABEL_56;
      v32 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v32->oneVector.fields.y;
      v30 = v32->oneVector.fields.z;
      v29 = v32->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v29, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_56:
    sub_1CE6958(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetWarningMessage(
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
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E00F30 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00F30 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4DFE0AE )
        {
          gameObject = (UnityEngine_Component_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
          byte_4DFE0AE = 1;
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
      if ( !byte_4DFE0AE )
      {
        gameObject = (UnityEngine_Component_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
        byte_4DFE0AE = 1;
      }
      if ( !v12 )
        goto LABEL_33;
      v17 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v17->oneVector.fields.y;
      z = v17->oneVector.fields.z;
      x = v17->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v19.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v19.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v19.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v19, 0);
        return;
      }
    }
LABEL_33:
    sub_1CE6958(gameObject, v8);
  }
}


void SupportSelectItemDraw___c__DisplayClass66_0___ctor(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectItemDraw___c__DisplayClass66_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  if ( (byte_4E00F35 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E00F35 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questIndividualityArray,
           individuality,
           (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
}