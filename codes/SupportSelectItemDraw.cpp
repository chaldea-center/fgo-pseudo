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

  if ( (byte_4CC3A43 & 1) == 0 )
  {
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&SupportSelectItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_20223/*"icon_class1002"*/);
    sub_1C713B0(&StringLiteral_20221/*"icon_class007"*/);
    sub_1C713B0(&StringLiteral_20220/*"icon_class006"*/);
    sub_1C713B0(&StringLiteral_20218/*"icon_class004"*/);
    sub_1C713B0(&StringLiteral_20215/*"icon_class001"*/);
    sub_1C713B0(&StringLiteral_20222/*"icon_class1001"*/);
    sub_1C713B0(&StringLiteral_20216/*"icon_class002"*/);
    sub_1C713B0(&StringLiteral_20219/*"icon_class005"*/);
    sub_1C713B0(&StringLiteral_20217/*"icon_class003"*/);
    byte_4CC3A43 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v2 = sub_1C71458(string___TypeInfo, 9);
  if ( !v2 )
    sub_1C71608(0, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_14;
  v11 = StringLiteral_20222/*"icon_class1001"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_20222/*"icon_class1001"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_14;
  v18 = StringLiteral_20215/*"icon_class001"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_20215/*"icon_class001"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_14;
  v25 = StringLiteral_20216/*"icon_class002"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_20216/*"icon_class002"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_14;
  v32 = StringLiteral_20217/*"icon_class003"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_20217/*"icon_class003"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 56), v32, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v10 + 24) <= 4u )
    goto LABEL_14;
  v39 = StringLiteral_20218/*"icon_class004"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_20218/*"icon_class004"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 64), v39, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v10 + 24) <= 5u )
    goto LABEL_14;
  v46 = StringLiteral_20219/*"icon_class005"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_20219/*"icon_class005"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 72), v46, v40, v41, v42, v43, v44, v45);
  if ( *(_DWORD *)(v10 + 24) <= 6u
    || (v53 = StringLiteral_20220/*"icon_class006"*/,
        *(_QWORD *)(v10 + 80) = StringLiteral_20220/*"icon_class006"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 80), v53, v47, v48, v49, v50, v51, v52),
        *(_DWORD *)(v10 + 24) <= 7u)
    || (v60 = StringLiteral_20221/*"icon_class007"*/,
        *(_QWORD *)(v10 + 88) = StringLiteral_20221/*"icon_class007"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 88), v60, v54, v55, v56, v57, v58, v59),
        *(_DWORD *)(v10 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C71610(v2);
  }
  v67 = StringLiteral_20223/*"icon_class1002"*/;
  *(_QWORD *)(v10 + 96) = StringLiteral_20223/*"icon_class1002"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 96), v67, v61, v62, v63, v64, v65, v66);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->backClassIconFileList, v10, v69, v70, v71, v72, v73, v74);
  v75 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_CEEDE0;
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

  if ( (byte_4CC3A42 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC3A42 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C71608(0, v5);
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
      v10 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v14 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
      sub_1C719A4(v15);
LABEL_37:
      sub_1C71608(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C71608(0, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0);
      if ( !v23 )
        sub_1C71608(0, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0);
    }
  }
  v25 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
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
      v30 = sub_1C47738(v25, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CC3A3A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A3A = 1;
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
    sub_1C71354(
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
    sub_1C71354(
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
    sub_1C71354(
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
    sub_1C71354(
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
    sub_1C71354(
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
      sub_1C71354(
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
    sub_1C71608(transform, v4);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v51);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v59;
  sub_1C71354(
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

  if ( (byte_4CC3A3B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A3B = 1;
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
    sub_1C71608(gameObject, v4);
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

  if ( (byte_4CC3A3D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3A3D = 1;
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
    sub_1C71608(gameObject, v4);
  }
}


void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC3A40 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A40 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1C71608(0, v6);
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
  if ( (byte_4CC3A41 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A41 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1C71608(0, v6);
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
  unsigned __int64 v11; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x27
  struct EquipTargetInfo_o *equipTarget1; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  Il2CppObject *v22; // x28
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t svtId; // w22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x24
  int32_t v29; // w8
  int v30; // w8
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_43780460; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x26
  System_Collections_Generic_List_object__o *v37; // x27
  struct EventUpValSetupInfo_o *v38; // x8
  struct System_Int32_array *v39; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v41; // x22
  int32_t eventSvtPoint; // w19
  __int64 v43; // x20
  __int64 v44; // x25
  int32_t v45; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v48; // x20
  EventPersonalMargeUpValInfo_o *v49; // x19
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x8
  __int64 v57; // x29
  unsigned __int64 v58; // x28
  Il2CppObject *v59; // x25
  __int64 v60; // x20
  _DWORD *v61; // x8
  int v62; // w8
  __int64 v63; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v65; // x8
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x19
  System_Func_int__bool__o *v73; // x21
  System_Func_TSource__bool__o *v74; // x1
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  struct QuestRestrictionInfo_o *v79; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v81; // x1
  char v82; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v84; // x8
  UnityEngine_Object_o *v85; // x19
  UISprite_o *v86; // x19
  UIAtlas_o *v87; // x20
  UnityEngine_Object_o *v88; // x19
  UISprite_o *v89; // x19
  UIAtlas_o *v90; // x20
  UnityEngine_Object_o *v91; // x19
  UnityEngine_Object_o *v92; // x19
  UnityEngine_Object_o *v93; // x19
  UnityEngine_Object_o *v94; // x19
  UnityEngine_Object_o *v95; // x19
  UnityEngine_Object_o *v96; // x19
  UnityEngine_Object_o *v97; // x19
  UnityEngine_Object_o *v98; // x19
  UnityEngine_Object_o *v99; // x19
  UnityEngine_Object_o *v100; // x19
  System_Object_array *v101; // x29
  bool v102; // w22
  UISprite_o *v103; // x19
  void *v104; // x20
  Il2CppClass *v105; // x21
  int32_t v106; // w20
  UnityEngine_Object_o *v107; // x19
  void *v108; // x19
  Il2CppClass *v109; // x20
  int v110; // w19
  UserServantEntity_o *v111; // x22
  int32_t v112; // w8
  int v113; // w8
  int32_t v114; // w20
  int32_t v115; // w23
  Il2CppObject v116; // q1
  int64_t v117; // x19
  int v118; // w23
  ServantLeaderInfo_o *v119; // x19
  _BOOL4 UniqueSvtRestriction; // w24
  int v121; // w19
  int v122; // w20
  int32_t v123; // w20
  QuestRestrictionInfo_o *v124; // x19
  __int64 v125; // x21
  __int64 v126; // x22
  int32_t v127; // w0
  int32_t v128; // w21
  int32_t v129; // w22
  _BOOL4 IsRestrictionServantIndividuality; // w0
  bool EventUpVal_43460776; // w19
  Il2CppObject *v132; // x23
  Il2CppObject *v133; // x27
  Il2CppObject *v134; // x25
  System_Collections_Generic_List_object__o *v135; // x26
  struct EventUpValSetupInfo_o *v136; // x8
  struct System_Int32_array *v137; // x29
  il2cpp_array_size_t v138; // x8
  unsigned __int64 v139; // x21
  int32_t v140; // w24
  System_Collections_Generic_IEnumerable_T__o v141; // q0
  int64_t v142; // x19
  int32_t BuddyPoint; // w20
  Il2CppObject *v144; // x22
  int32_t v145; // w0
  EventServantPointRankEntity_o *v146; // x0
  int32_t v147; // w25
  EventMargeItemUpValInfo_o *v148; // x19
  EventPersonalMargeUpValInfo_o *v149; // x19
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x4
  int32_t v153; // w5
  int64_t v154; // x6
  System_String_o *v155; // x7
  int v156; // w8
  __int64 v157; // x20
  unsigned int v158; // w19
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  Il2CppClass **v162; // x0
  _BOOL4 v163; // w0
  UnityEngine_Object_o *servantClassIcon; // x19
  _BOOL4 isGrandServant; // w20
  ServantClassIconComponent_o *v166; // x19
  UnityEngine_Vector2_o *v167; // x8
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  struct SupportSelectItemDraw_StaticFields *v171; // x8
  UnityEngine_Object_o *levelLabel; // x19
  UILabel_o *v173; // x19
  UnityEngine_Object_o *raritySprite; // x19
  int32_t v175; // w19
  int32_t v176; // w20
  System_String_o *Icon_40715116; // x21
  int32_t RarityIcon; // w19
  int32_t v179; // w19
  UISprite_o *v180; // x20
  float v181; // s8
  float v182; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  SkillListTreasureDeviceComponent_o *v185; // x19
  SkillInfo_array *v186; // x20
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  __int64 v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x8
  UnityEngine_Object_o *appendSkillList; // x19
  AppendSkillListComponent_o *v198; // x19
  SkillInfo_array *v199; // x20
  int32_t v200; // w2
  int32_t v201; // w3
  System_String_o *v202; // x4
  int32_t v203; // w5
  int64_t v204; // x6
  System_String_o *v205; // x7
  __int64 v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  __int64 v209; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v211; // x0
  SwitchUIWidgetComponent_o *v212; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *attackLabel; // x19
  float v215; // s1 OVERLAPPED
  float v216; // s2
  float v217; // s0
  float v218; // s3
  UILabel_o *v219; // x19
  UnityEngine_Object_o *hpLabel; // x19
  float v221; // s1 OVERLAPPED
  float v222; // s2
  float v223; // s0
  float v224; // s3
  UILabel_o *v225; // x19
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v227; // x20
  UIAtlas_o *baseDefaultUIAtlas; // x19
  _BOOL4 v229; // w21
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v231; // x20
  UIAtlas_o *base2DefaultUIAtlas; // x19
  _BOOL4 v233; // w21
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  _BOOL4 v235; // w22
  UISprite_o *v236; // x21
  UIAtlas_o *maskSpriteDefaultAtlas; // x19
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIWidget_o *v239; // x19
  float v240; // s2 OVERLAPPED
  struct SupportSelectItemDraw_StaticFields *v241; // x9
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x9
  int v244; // s1
  float v245; // s0
  UnityEngine_Object_o *sortieMaskSprite; // x19
  const MethodInfo *v247; // x4
  _BOOL4 v248; // w22
  UISprite_o *v249; // x21
  UIAtlas_o *defaultSortieMaskAtlas; // x19
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIWidget_o *v252; // x19
  struct SupportSelectItemDraw_StaticFields *v253; // x9
  float *v254; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v256; // x19
  System_String_o *v257; // x0
  System_String_o *v258; // x1
  bool v259; // w2
  SupportSelectItemDraw_o *v260; // x0
  bool v261; // w3
  UnityEngine_Object_o *v262; // x19
  bool v263; // w1
  System_String_o *v264; // x0
  const MethodInfo *v265; // x3
  System_String_o *v266; // x19
  Il2CppObject *v267; // x0
  UnityEngine_Object_o *v268; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v272; // w8
  __int64 v273; // x19
  int32_t v274; // w21
  int32_t v275; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v277; // x8
  EventCampaignEntity_o *v278; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v280; // w10
  System_Collections_Generic_List_object__o *v281; // x0
  System_Collections_Generic_List_object__o *v282; // x20
  UISprite_o *equipSprite; // x19
  __int64 v284; // x20
  __int64 v285; // x21
  int32_t v286; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v288; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  UnityEngine_Object_o *v290; // x19
  struct ServantLeaderInfo_o *v291; // x8
  __int64 v292; // x19
  __int64 v293; // x20
  int32_t v294; // w20
  int32_t v295; // w0
  UnityEngine_Object_o *v296; // x19
  bool v297; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v299; // x19
  __int64 v300; // x20
  int32_t v301; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  UnityEngine_Object_o *v307; // x19
  EventMargeItemUpValInfo_o *v308; // x19
  int32_t v309; // w2
  int32_t v310; // w3
  System_String_o *v311; // x4
  int32_t v312; // w5
  int64_t v313; // x6
  System_String_o *v314; // x7
  struct System_Object_array *v315; // x8
  _QWORD *v316; // x9
  __int64 v317; // x10
  Il2CppClass **v318; // x0
  bool v319; // [xsp+14h] [xbp-1DCh]
  int32_t AddedHp; // [xsp+18h] [xbp-1D8h]
  int32_t AddedAtk; // [xsp+1Ch] [xbp-1D4h]
  int32_t adjustHp; // [xsp+20h] [xbp-1D0h]
  int32_t classId; // [xsp+24h] [xbp-1CCh]
  System_Int32_array *cardParams; // [xsp+28h] [xbp-1C8h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+34h] [xbp-1BCh]
  UserServantLeaderEntity_o *v326; // [xsp+38h] [xbp-1B8h]
  UserServantLeaderEntity_o *v327; // [xsp+38h] [xbp-1B8h]
  SupportSelectItemDraw_o *codeIds; // [xsp+40h] [xbp-1B0h]
  System_Int32_array *codeIdsa; // [xsp+40h] [xbp-1B0h]
  SupportSelectItemDraw_o *codeIdsb; // [xsp+40h] [xbp-1B0h]
  int32_t adjustAtk; // [xsp+48h] [xbp-1A8h]
  int32_t HpBoostValue; // [xsp+48h] [xbp-1A8h]
  int32_t treasureDeviceNum; // [xsp+4Ch] [xbp-1A4h]
  int32_t strengthStatus; // [xsp+50h] [xbp-1A0h]
  int32_t v335; // [xsp+54h] [xbp-19Ch]
  int32_t rarity; // [xsp+58h] [xbp-198h]
  int32_t limitCount; // [xsp+5Ch] [xbp-194h]
  int32_t frameType; // [xsp+60h] [xbp-190h]
  int exceedCount; // [xsp+64h] [xbp-18Ch]
  _DWORD *v340; // [xsp+68h] [xbp-188h]
  Il2CppObject *v341; // [xsp+70h] [xbp-180h]
  EventServantPointRankMaster_o *v342; // [xsp+78h] [xbp-178h]
  int32_t AtkBoostValue; // [xsp+78h] [xbp-178h]
  struct EquipTargetInfo_o *v344; // [xsp+80h] [xbp-170h]
  ServantLeaderInfo_o *v345; // [xsp+88h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+88h] [xbp-168h]
  struct System_Int32_array *v347; // [xsp+90h] [xbp-160h]
  bool IsDataLost; // [xsp+90h] [xbp-160h]
  bool v349; // [xsp+90h] [xbp-160h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectiona; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectionb; // [xsp+98h] [xbp-158h]
  EventCampaignEntity_array *v353; // [xsp+A0h] [xbp-150h]
  EventCampaignEntity_array *v354; // [xsp+A0h] [xbp-150h]
  Il2CppObject *v355; // [xsp+A8h] [xbp-148h]
  int v356; // [xsp+A8h] [xbp-148h]
  ServantEntity_o *servantEntity; // [xsp+B0h] [xbp-140h]
  int32_t value; // [xsp+BCh] [xbp-134h]
  SupportServantData_o *v359; // [xsp+C0h] [xbp-130h]
  int32_t eventId; // [xsp+C8h] [xbp-128h]
  _BOOL4 eventIda; // [xsp+C8h] [xbp-128h]
  UserServantEntity_o *eventIdb; // [xsp+C8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v364; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v365; // [xsp+110h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+138h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+144h] [xbp-ACh] BYREF
  SkillInfo_array *v368; // [xsp+148h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+150h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+158h] [xbp-98h] BYREF
  int v371; // [xsp+164h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+168h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+178h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v374; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  UnityEngine_Vector3_o v383; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3A3C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int____78677096);
    sub_1C713B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C713B0(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78581216);
    sub_1C713B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&SupportSelectItemDraw_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_1C713B0(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_1C713B0(&StringLiteral_11552/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C713B0(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C713B0(&StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C713B0(&StringLiteral_396/*"#,0"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3A3C = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v371 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v368 = 0;
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
  v14 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v14;
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
  v359 = supportServantData;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_608;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_608;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v374.fields.currentCryptoKey = v21;
      *(_QWORD *)&v374.fields.fakeValue = v20;
      v344 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v374, 0);
      if ( !v19 )
        goto LABEL_608;
      supportServantData = v359;
      v22 = 0;
      v341 = DataMasterBase_object__object__int___GetEntity(
               v19,
               gameObject,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_608;
    v22 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v22 )
      goto LABEL_608;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v375.fields.currentCryptoKey = klass;
    *(_QWORD *)&v375.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v375, 0);
    if ( !v24 )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v24,
                            gameObject,
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    supportServantData = v359;
  }
  else
  {
    v22 = 0;
  }
  v344 = 0;
  v341 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v82 = 1;
    goto LABEL_109;
  }
LABEL_37:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            svtId,
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_608;
    v355 = v22;
    servantEntity = (ServantEntity_o *)gameObject;
    value = svtId;
    classId = *(_DWORD *)(gameObject + 80);
    if ( supportServantData->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_608;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
      gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
      lv[1] = servantLeaderInfo->fields.lv;
      if ( !gameObject )
        goto LABEL_608;
      v29 = *(_DWORD *)(gameObject + 20);
      v340 = (_DWORD *)gameObject;
      lv[0] = v29;
      if ( v344 )
        lv[0] = v344->fields.atk + v29;
      adjustAtk = servantLeaderInfo->fields.adjustAtk;
      gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( !gameObject )
        goto LABEL_608;
      AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0);
      adjustHp = servantLeaderInfo->fields.adjustHp;
      gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( !gameObject )
        goto LABEL_608;
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0);
      v30 = v340[4];
      v371 = v30;
      if ( v344 )
        v371 = v344->fields.hp + v30;
      rarity = v340[6];
      exceedCount = servantLeaderInfo->fields.exceedCount;
      frameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v340[10], 0);
      limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0);
      gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_608;
      strengthStatus = tdInfo->fields.strengthStatus;
      v335 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_43794080(servantLeaderInfo, &v368, 0, 0);
      gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
      this->fields.isGrandServant = gameObject & 1;
      eventSetupInfo = supportServantData->fields.eventSetupInfo;
      v345 = servantLeaderInfo;
      if ( !eventSetupInfo )
        goto LABEL_199;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_608;
      if ( eventIdList->max_length )
      {
        v326 = UserServantLeaderEntity;
        codeIds = this;
        EventUpVal_43780460 = ServantLeaderInfo__getEventUpVal_43780460(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                supportServantData->fields.questRestrictionInfo == 0,
                                0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v342 = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v35 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_FunctionMaster___);
        v36 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        v37 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v37,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v38 = supportServantData->fields.eventSetupInfo;
        if ( !v38 )
          goto LABEL_608;
        v39 = v38->fields.eventIdList;
        v319 = EventUpVal_43780460;
        if ( !v39 )
          goto LABEL_608;
        max_length = v39->max_length;
        if ( (int)max_length >= 1 )
        {
          v41 = 0;
          collection = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
          v353 = eventFriendPoints;
          v347 = v39;
          while ( 1 )
          {
            if ( v41 >= (unsigned int)max_length )
              goto LABEL_609;
            if ( !Master_object )
              goto LABEL_608;
            eventId = v39->m_Items[v41];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    eventId,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v342 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent(v342, eventId, 0) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v44 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v43 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v376.fields.currentCryptoKey = v44;
                *(_QWORD *)&v376.fields.fakeValue = v43;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v376, 0);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v342, eventId, eventSvtPoint, v45, 0);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v48 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41995740(v48, eventId, 0);
                if ( !v48 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v48,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0);
                if ( !v37 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v37,
                  0,
                  (Il2CppObject *)v48,
                  (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v49 = (EventPersonalMargeUpValInfo_o *)sub_1C715FC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v49, eventId, servantEntity, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_608;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v49 )
                goto LABEL_608;
              EventPersonalMargeUpValInfo__Add(v49, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v49, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v49, 0);
                if ( !gameObject )
                  goto LABEL_608;
                v56 = *(_QWORD *)(gameObject + 24);
                v57 = gameObject;
                if ( (int)v56 >= 1 )
                  break;
              }
            }
LABEL_102:
            v39 = v347;
            Master_object = (Il2CppObject *)collection;
            eventFriendPoints = v353;
            v22 = v355;
            ++v41;
            LODWORD(max_length) = v347->max_length;
            if ( (__int64)v41 >= (int)max_length )
              goto LABEL_103;
          }
          v58 = 0;
          while ( v58 < (unsigned int)v56 )
          {
            v59 = *(Il2CppObject **)(v57 + 32 + 8 * v58);
            if ( !supportServantData->fields.questRestrictionInfo )
              goto LABEL_612;
            v60 = sub_1C715FC(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v60, 0);
            if ( !v59 )
              goto LABEL_608;
            v61 = v59[2].monitor;
            if ( !v61 )
              goto LABEL_608;
            if ( !v35 )
              goto LABEL_608;
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                                    v61[4],
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
            if ( !gameObject )
              goto LABEL_608;
            v62 = *(_DWORD *)(gameObject + 24);
            v63 = gameObject;
            if ( v62 == 1 || v62 == 16 )
              goto LABEL_613;
            questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              goto LABEL_608;
            if ( eventId == questRestrictionInfo->fields.eventId )
            {
LABEL_613:
              v65 = supportServantData->fields.questRestrictionInfo;
              if ( !v65 )
                goto LABEL_608;
              if ( !v36 )
                goto LABEL_608;
              gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                      (QuestPhaseMaster_o *)v36,
                                      v65->fields.questId,
                                      v65->fields.questPhase,
                                      0);
              if ( !v60 )
                goto LABEL_608;
              *(_QWORD *)(v60 + 16) = gameObject;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v60 + 16), gameObject, v66, v67, v68, v69, v70, v71);
              v72 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v63 + 80);
              if ( !v72 )
                goto LABEL_608;
              if ( !v72[1].monitor
                || (v73 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo),
                    System_Func_int__bool____ctor(
                      v73,
                      (Il2CppObject *)v60,
                      Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                      0),
                    v74 = (System_Func_TSource__bool__o *)v73,
                    supportServantData = v359,
                    gameObject = System_Linq_Enumerable__Any_int__51742760(
                                   v72,
                                   v74,
                                   (const MethodInfo_3158828 *)Method_System_Linq_Enumerable_Any_int____78677096),
                    (gameObject & 1) != 0) )
              {
LABEL_612:
                if ( !v37 )
                  goto LABEL_608;
                items = v37->fields._items;
                v76 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v37->fields._version;
                if ( !items )
                  goto LABEL_608;
                v77 = v37->fields._size;
                if ( (unsigned int)v77 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v37,
                    v59,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                }
                else
                {
                  v78 = &items->obj.klass + v77;
                  v37->fields._size = v77 + 1;
                  v78[4] = (Il2CppClass *)v59;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v78 + 4), (int32_t)v59, v50, v51, v52, v53, v54, v55);
                }
              }
            }
            LODWORD(v56) = *(_DWORD *)(v57 + 24);
            if ( (__int64)++v58 >= (int)v56 )
              goto LABEL_102;
          }
          goto LABEL_609;
        }
LABEL_103:
        v79 = supportServantData->fields.questRestrictionInfo;
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        svtId = value;
        if ( v79 )
        {
          AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                   (PartyOrganizationUtility_o *)gameObject,
                                   &isDuplicate,
                                   (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v37,
                                   0);
          gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !gameObject )
            goto LABEL_608;
          v81 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
        }
        else
        {
          v81 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v37;
        }
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       v81,
                                                                       0);
        UserServantLeaderEntity = v326;
        this = codeIds;
      }
      else
      {
LABEL_199:
        collectiona = 0;
        v319 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      eventIda = ServantLeaderInfo__getQuestRestriction(
                   servantLeaderInfo,
                   supportServantData->fields.questRestrictionInfo,
                   0);
      v119 = servantLeaderInfo;
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               supportServantData->fields.questRestrictionInfo,
                               0);
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           v119,
                                           supportServantData->fields.questRestrictionInfo,
                                           0,
                                           0);
      if ( ServantLeaderInfo__IsSlotRestriction(v119, supportServantData->fields.questRestrictionInfo, 0) )
      {
        v121 = 1;
      }
      else
      {
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v122 = *(_DWORD *)(gameObject + 56);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        if ( v122 < 1 )
          goto LABEL_228;
        if ( !supportServantData->fields.questRestrictionInfo )
          goto LABEL_608;
        v123 = *(_DWORD *)(gameObject + 60);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(
               supportServantData->fields.questRestrictionInfo,
               v123,
               0) )
        {
          v124 = supportServantData->fields.questRestrictionInfo;
          v126 = *(_QWORD *)&v345->fields.svtId.fields.currentCryptoKey;
          v125 = *(_QWORD *)&v345->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v379.fields.currentCryptoKey = v126;
          *(_QWORD *)&v379.fields.fakeValue = v125;
          v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v379, 0);
          v128 = v345->fields.limitCount;
          v129 = v127;
          gameObject = ServantLeaderInfo__getDispLimitCount(v345, 0);
          if ( !v124 )
            goto LABEL_608;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v124,
                                                v129,
                                                v128,
                                                gameObject,
                                                v123,
                                                1,
                                                0);
          supportServantData = v359;
          svtId = value;
          v121 = IsRestrictionServantIndividuality;
        }
        else
        {
LABEL_228:
          v121 = 0;
        }
      }
      AtkBoostValue = AddedAtk + adjustAtk;
      HpBoostValue = AddedHp + adjustHp;
      v118 = v319;
      IsDataLost = ServantLeaderInfo__IsDataLost(v345, supportServantData->fields.questRestrictionInfo, 0);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v345, supportServantData->fields.questRestrictionInfo, 0);
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_608;
      v111 = (UserServantEntity_o *)gameObject;
      gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0, 0);
      lv[1] = v111->fields.lv;
      if ( !gameObject )
        goto LABEL_608;
      v112 = *(_DWORD *)(gameObject + 20);
      v340 = (_DWORD *)gameObject;
      lv[0] = v112;
      if ( v22 )
        lv[0] = LODWORD(v22[16].monitor) + v112;
      AtkBoostValue = UserServantEntity__get_AtkBoostValue(v111, 0);
      HpBoostValue = UserServantEntity__get_HpBoostValue(v111, 0);
      v113 = v340[4];
      v371 = v113;
      if ( v22 )
        v371 = HIDWORD(v22[16].monitor) + v113;
      rarity = v340[6];
      exceedCount = v111->fields.exceedCount;
      frameType = UserServantEntity__GetFrameType(v111, v340[10], 0);
      limitCount = UserServantEntity__getCardImageLimitCount(v111, 0, 0);
      UserServantEntity__getSkillInfo(v111, &skillInfoList, -1, -1, 1, 0, -1, 0);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v111, &tdInfo, -1, -1, 0, 0);
      if ( !tdInfo )
        goto LABEL_608;
      v114 = tdInfo->fields.lv;
      v115 = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_43489344(v111, &v368, 0);
      this->fields.isGrandServant = UserServantEntity__IsGrandServant(v111, 0);
      strengthStatus = v115;
      v335 = v114;
      if ( supportServantData->fields.eventSetupInfo )
      {
        if ( v22 )
        {
          v116 = v22[2];
          *(Il2CppObject *)&v365.fields.currentCryptoKey = v22[1];
          *(Il2CppObject *)&v365.fields.fakeValue = v116;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v364 = v365;
          v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v364, 0);
        }
        else
        {
          v117 = -1;
        }
        gameObject = sub_1C71458(long___TypeInfo, 1);
        if ( !gameObject )
          goto LABEL_608;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_609;
        *(_QWORD *)(gameObject + 32) = v117;
        EventUpVal_43460776 = UserServantEntity__getEventUpVal_43460776(
                                v111,
                                &eventUpVallInfo,
                                supportServantData->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0,
                                1,
                                0,
                                1,
                                0);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v327 = UserServantLeaderEntity;
        codeIdsb = this;
        v132 = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v354 = eventFriendPoints;
        v133 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v134 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v135 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v135,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v136 = supportServantData->fields.eventSetupInfo;
        if ( !v136 )
          goto LABEL_608;
        v137 = v136->fields.eventIdList;
        v349 = EventUpVal_43460776;
        if ( !v137 )
          goto LABEL_608;
        v138 = v137->max_length;
        if ( (int)v138 >= 1 )
        {
          collectionb = (System_Collections_Generic_IEnumerable_T__o *)&v111->fields.userId;
          v139 = 0;
          eventIdb = v111;
          while ( 1 )
          {
            if ( v139 >= (unsigned int)v138 )
              goto LABEL_609;
            if ( !v132 )
              goto LABEL_608;
            v140 = v137->m_Items[v139];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v132,
                                    v140,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v133 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v133, v140, 0) )
              {
                v141 = collectionb[1];
                *(System_Collections_Generic_IEnumerable_T__o *)&v365.fields.currentCryptoKey = *collectionb;
                *(System_Collections_Generic_IEnumerable_T__o *)&v365.fields.fakeValue = v141;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v363 = v365;
                v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v363, 0);
                gameObject = UserServantEntity__getSvtId(v111, 0);
                if ( !v134 )
                  goto LABEL_608;
                if ( UserEventServantPointMaster__TryGetEntity(
                       (UserEventServantPointMaster_o *)v134,
                       &entity,
                       v142,
                       v140,
                       gameObject,
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
                v144 = v134;
                v145 = UserServantEntity__getSvtId(eventIdb, 0);
                v146 = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)v133,
                         v140,
                         BuddyPoint,
                         v145,
                         0);
                v147 = v146 ? v146->fields.svtPointRank : 0;
                v148 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41995740(v148, v140, 0);
                if ( !v148 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(v148, BuddyPoint, v147, 0, 0);
                if ( !v135 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v135,
                  0,
                  (Il2CppObject *)v148,
                  (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v134 = v144;
                v111 = eventIdb;
              }
              v149 = (EventPersonalMargeUpValInfo_o *)sub_1C715FC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v149, v140, servantEntity, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_608;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v149 )
                goto LABEL_608;
              EventPersonalMargeUpValInfo__Add(v149, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v149, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v149, 0);
                if ( !gameObject )
                  goto LABEL_608;
                v156 = *(_DWORD *)(gameObject + 24);
                v157 = gameObject;
                if ( v156 >= 1 )
                  break;
              }
            }
LABEL_274:
            LODWORD(v138) = v137->max_length;
            if ( (__int64)++v139 >= (int)v138 )
              goto LABEL_275;
          }
          v158 = 0;
          while ( v158 < v156 )
          {
            v11 = *(_QWORD *)(v157 + 8LL * (int)v158 + 32);
            if ( !v11 )
              goto LABEL_608;
            if ( *(_DWORD *)(v11 + 60) != 111 )
            {
              if ( !v135 )
                goto LABEL_608;
              v159 = v135->fields._items;
              v160 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v135->fields._version;
              if ( !v159 )
                goto LABEL_608;
              v161 = v135->fields._size;
              if ( (unsigned int)v161 >= LODWORD(v159->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v135,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
              }
              else
              {
                v162 = &v159->obj.klass + v161;
                v135->fields._size = v161 + 1;
                v162[4] = (Il2CppClass *)v11;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v162 + 4), v11, v150, v151, v152, v153, v154, v155);
              }
            }
            v156 = *(_DWORD *)(v157 + 24);
            if ( (int)++v158 >= v156 )
              goto LABEL_274;
          }
LABEL_609:
          sub_1C71610(gameObject);
        }
LABEL_275:
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v118 = v349;
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v135,
                                                                       0);
        UserServantLeaderEntity = v327;
        this = codeIdsb;
        supportServantData = v359;
        eventFriendPoints = v354;
      }
      else
      {
        collectiona = 0;
        v118 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList(v111, 0);
      eventIda = UserServantEntity__getQuestRestriction(
                   v111,
                   supportServantData->fields.questRestrictionInfo,
                   rarity,
                   2,
                   0);
      UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                               v111,
                               supportServantData->fields.questRestrictionInfo,
                               0);
      v163 = UserServantEntity__IsUniqueIndividualityRestriction(
               v111,
               supportServantData->fields.questRestrictionInfo,
               0);
      svtId = value;
      v121 = 0;
      IsUniqueIndividualityRestriction = v163;
      TimesToRestart = 0;
      IsDataLost = 0;
      cardParams = 0;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_608;
    v356 = v121;
    gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)gameObject,
                   svtId,
                   limitCount,
                   0);
    if ( !this->fields.servantNarrowTexture )
      goto LABEL_608;
    UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0, 0);
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
          frameType,
          0,
          this->fields.isGrandServant,
          0,
          0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_608;
        ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0);
        isGrandServant = this->fields.isGrandServant;
        v166 = this->fields.servantClassIcon;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        }
        v167 = *(UnityEngine_Vector2_o **)(gameObject + 184);
        if ( isGrandServant )
        {
          if ( !v166 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v166, v167[1], 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
          x = static_fields->GrandClassNamePosition.fields.x;
          y = static_fields->GrandClassNamePosition.fields.y;
        }
        else
        {
          if ( !v166 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v166, *v167, 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          v171 = SupportSelectItemDraw_TypeInfo->static_fields;
          x = v171->ClassNamePosition.fields.x;
          y = v171->ClassNamePosition.fields.y;
        }
        ServantClassIconComponent__RePositionClassName(
          (ServantClassIconComponent_o *)gameObject,
          *(UnityEngine_Vector2_o *)&x,
          0);
      }
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      v173 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
      if ( !v173 )
        goto LABEL_608;
      UILabel__set_text(v173, (System_String_o *)gameObject, 0);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v175 = lv[1];
      v176 = v340[10];
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon_40715116 = Rarity__getIcon_40715116(rarity, exceedCount, v175, v176, 0);
      if ( exceedCount < 1 )
      {
        v179 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_608;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v176, exceedCount, 0, 0, 0);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_608;
        v179 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v176,
                 lv[1],
                 RarityIcon,
                 0,
                 0);
      }
      v180 = this->fields.raritySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( v179 >= 3 )
      {
        AtlasManager__SetEventSprite(v180, Icon_40715116, 0);
      }
      else
      {
        AtlasManager__SetCommon(v180, 0);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_608;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_40715116, 0);
      }
      gameObject = (__int64)this->fields.raritySprite;
      supportServantData = v359;
      if ( !gameObject )
        goto LABEL_608;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v181 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_608;
      v182 = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v383.fields.x = v181;
      v383.fields.y = v182;
      v383.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v383, 0);
    }
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v185 = this->fields.skillListTreasureDevice;
      v186 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_41555228(v186, 0);
      if ( !v185 )
        goto LABEL_608;
      SkillListTreasureDeviceComponent__Set(
        v185,
        (System_String_o *)gameObject,
        v335,
        strengthStatus,
        treasureDeviceNum,
        0,
        0);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v11 = (unsigned __int64)this->fields.skillInfoUiWidget;
        v193 = *(_QWORD *)(gameObject + 16);
        v194 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v193 )
          goto LABEL_608;
        v195 = *(int *)(gameObject + 24);
        if ( (unsigned int)v195 >= *(_DWORD *)(v193 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
        }
        else
        {
          v196 = v193 + 8 * v195;
          *(_DWORD *)(gameObject + 24) = v195 + 1;
          *(_QWORD *)(v196 + 32) = v11;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v196 + 32), v11, v187, v188, v189, v190, v191, v192);
        }
      }
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
    {
      if ( v368 && v368->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v198 = this->fields.appendSkillList;
        v199 = v368;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__GetLevelList_41555228(v199, 0);
        if ( !v198 )
          goto LABEL_608;
        AppendSkillListComponent__Set(v198, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          v11 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
          v206 = *(_QWORD *)(gameObject + 16);
          v207 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(gameObject + 28);
          if ( !v206 )
            goto LABEL_608;
          v208 = *(int *)(gameObject + 24);
          if ( (unsigned int)v208 >= *(_DWORD *)(v206 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              (Il2CppObject *)v11,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
          }
          else
          {
            v209 = v206 + 8 * v208;
            *(_DWORD *)(gameObject + 24) = v208 + 1;
            *(_QWORD *)(v209 + 32) = v11;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v209 + 32), v11, v200, v201, v202, v203, v204, v205);
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
      v211 = this->fields.switchSkillUIList;
      if ( v211 )
      {
        v212 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v211,
                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v212 )
          goto LABEL_608;
        SwitchUIWidgetComponent__Set(v212, (UIWidget_array *)gameObject, 0, 0);
      }
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_608;
      if ( supportServantData->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_41270752(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0);
      else
        ServantCommandCardListComponent__Set_41270996(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          codeIdsa,
          2,
          0,
          0);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
    {
      v215 = 0.92157;
      gameObject = (__int64)this->fields.attackLabel;
      if ( AtkBoostValue <= 0 )
        v216 = 1.0;
      else
        v216 = 0.015686;
      if ( AtkBoostValue <= 0 )
        v215 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v217 = 1.0;
      v218 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v215 - 1), 0);
      v219 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_65540220((int32_t)lv, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
      if ( !v219 )
        goto LABEL_608;
      UILabel__set_text(v219, (System_String_o *)gameObject, 0);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
    {
      v221 = 0.92157;
      gameObject = (__int64)this->fields.hpLabel;
      if ( HpBoostValue <= 0 )
        v222 = 1.0;
      else
        v222 = 0.015686;
      if ( HpBoostValue <= 0 )
        v221 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v223 = 1.0;
      v224 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v221 - 1), 0);
      v225 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_65540220((int32_t)&v371, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
      if ( !v225 )
        goto LABEL_608;
      UILabel__set_text(v225, (System_String_o *)gameObject, 0);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v227 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      v229 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v227, frameType, baseDefaultUIAtlas, 0, v229, 0);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
    {
      v231 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      v233 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v231, frameType, base2DefaultUIAtlas, 0, v233, 0);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    supportServantData = v359;
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
      v235 = this->fields.isGrandServant;
      v236 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v235,
                     v236,
                     maskSpriteDefaultSpriteName,
                     maskSpriteDefaultAtlas,
                     0);
      v239 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v359;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v239 )
          goto LABEL_608;
        UIWidget__set_width(v239, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
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
        v240 = 0.0;
        v241 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v241->GrandMaskPosition05.fields.y;
        p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&v241->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v359;
        if ( !v239 )
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
        v240 = this->fields.maskSpriteDefaultPosition.fields.z;
        p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
      v244 = *(_DWORD *)p_y;
      v245 = p_GrandMaskPosition05->fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        *(UnityEngine_Vector3_o *)(&v240 - 2),
        0);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
    {
      v248 = this->fields.isGrandServant;
      v249 = this->fields.sortieMaskSprite;
      defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
      defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v248,
                     v249,
                     defaultSortieMaskSpriteName,
                     defaultSortieMaskAtlas,
                     0);
      v252 = (UIWidget_o *)this->fields.sortieMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v359;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v252 )
          goto LABEL_608;
        UIWidget__set_width(v252, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
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
        v253 = SupportSelectItemDraw_TypeInfo->static_fields;
        v254 = &v253->GrandMaskPosition05.fields.y;
        p_defaultSortieMaskPosition = &v253->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v359;
        if ( !v252 )
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
        v254 = &this->fields.defaultSortieMaskPosition.fields.y;
        p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
      }
      v384.fields.y = *v254;
      v384.fields.x = p_defaultSortieMaskPosition->fields.x;
      v384.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v384, 0);
    }
    if ( ((v356 | eventIda) & 1) != 0 )
    {
      v256 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v256, 0, 0) )
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
      v257 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      goto LABEL_459;
    }
    if ( supportServantData->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
      goto LABEL_472;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40699620(126, 0) )
    {
      v262 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v262, 0, 0) )
        goto LABEL_490;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v263 = 1;
    }
    else
    {
LABEL_472:
      if ( IsUniqueIndividualityRestriction || UniqueSvtRestriction )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v264 = LocalizationManager__Get((System_String_o *)StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
        SupportSelectItemDraw__SetWarningMessage(this, v264, 1, v265);
LABEL_491:
        friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0, 0) )
        {
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
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
        v82 = 0;
        v102 = v118 != 0;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          v272 = eventFriendPoints->max_length;
          if ( v272 < 1 )
          {
            v82 = 0;
          }
          else
          {
            v273 = 0;
            v274 = 0;
            v275 = 0;
            m_Items = eventFriendPoints->m_Items;
            do
            {
              if ( (unsigned int)v273 >= v272 )
                goto LABEL_609;
              v277 = m_Items[v273];
              if ( !v277 )
                goto LABEL_608;
              gameObject = System_Array__IndexOf_int_(
                             v277->fields.targetIds,
                             value,
                             (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___);
              v272 = eventFriendPoints->max_length;
              if ( (unsigned int)v273 >= v272 )
                goto LABEL_609;
              v278 = m_Items[v273];
              if ( !v278 )
                goto LABEL_608;
              targetIds = v278->fields.targetIds;
              if ( targetIds )
                v280 = LODWORD(targetIds->max_length) == 0;
              else
                v280 = 1;
              if ( (v280 || (int)gameObject >= 0) && v275 < v278->fields.value )
              {
                v274 = v278->fields.eventId;
                v275 = v278->fields.value;
              }
              ++v273;
            }
            while ( (int)v273 < v272 );
            if ( v275 >= 1 )
            {
              v281 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
              v282 = v281;
              if ( collectiona )
                System_Collections_Generic_List_object____ctor_58785804(
                  v281,
                  collectiona,
                  (const MethodInfo_381000C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78581216);
              else
                System_Collections_Generic_List_object____ctor(
                  v281,
                  (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
              v308 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_41995660(v308, v274, v275, 0);
              if ( !v282 )
                goto LABEL_608;
              v315 = v282->fields._items;
              v316 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v282->fields._version;
              supportServantData = v359;
              if ( !v315 )
                goto LABEL_608;
              v317 = v282->fields._size;
              if ( (unsigned int)v317 >= LODWORD(v315->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v282,
                  (Il2CppObject *)v308,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
              }
              else
              {
                v318 = &v315->obj.klass + v317;
                v282->fields._size = v317 + 1;
                v318[4] = (Il2CppClass *)v308;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v318 + 4),
                  (int32_t)v308,
                  v309,
                  v310,
                  v311,
                  v312,
                  v313,
                  v314);
              }
              v101 = System_Collections_Generic_List_object___ToArray(
                       v282,
                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              v82 = 0;
              if ( !v22 )
                goto LABEL_522;
              goto LABEL_184;
            }
            supportServantData = v359;
            v82 = 0;
          }
        }
        v101 = (System_Object_array *)collectiona;
        if ( !v22 )
          goto LABEL_522;
        goto LABEL_184;
      }
      if ( IsDataLost )
      {
        v261 = 1;
        v260 = this;
        v259 = 0;
        v258 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_460;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v266 = LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
        LODWORD(v365.fields.currentCryptoKey) = TimesToRestart;
        v267 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v365);
        v257 = System_String__Format(v266, v267, 0);
LABEL_459:
        v258 = v257;
        v259 = 1;
        v260 = this;
        v261 = 0;
LABEL_460:
        SupportSelectItemDraw__SetMaskMessage(v260, v258, v259, v261, v247);
        goto LABEL_491;
      }
      v268 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v268, 0, 0) )
      {
LABEL_490:
        SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
        goto LABEL_491;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v263 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v263, 0);
    goto LABEL_490;
  }
  v82 = 0;
LABEL_109:
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  backClassIcon = this->fields.backClassIcon;
  if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v84 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
  if ( !v84 )
    goto LABEL_608;
  if ( *(_DWORD *)(v84 + 24) <= (unsigned int)classPos )
    goto LABEL_609;
  if ( !backClassIcon )
    goto LABEL_608;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v84 + 8LL * classPos + 32), 0);
  v85 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    v86 = this->fields.baseSprite;
    v87 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v86, 9, v87, 0, 0, 0);
  }
  v88 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v88, 0, 0) )
  {
    v89 = this->fields.base2Sprite;
    v90 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v89, 9, v90, 0, 0, 0);
  }
  v91 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v91, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v92 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v92, 0, 0) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v93 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v93, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v94 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v94, 0, 0) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v95 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v95, 0, 0) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v96 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v96, 0, 0) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
  v97 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v97, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v98 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v98, 0, 0) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v99 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v99, 0, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_608;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
  }
  v100 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v100, 0, 0) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v101 = 0;
  v102 = 0;
  if ( !v22 )
  {
LABEL_522:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    if ( v344 )
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
      v285 = *(_QWORD *)&v344->fields.svtId.fields.currentCryptoKey;
      v284 = *(_QWORD *)&v344->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v380.fields.currentCryptoKey = v285;
      *(_QWORD *)&v380.fields.fakeValue = v284;
      v286 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v380, 0);
      ImagePartsGroupIdxs_k__BackingField = v344->fields._ImagePartsGroupIdxs_k__BackingField;
      v288 = v286;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v288, ImagePartsGroupIdxs_k__BackingField, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      supportServantData = v359;
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        v110 = v344->fields.limitCount;
        goto LABEL_536;
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
      v307 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v307, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        LOBYTE(v11) = 0;
        goto LABEL_541;
      }
    }
    goto LABEL_542;
  }
LABEL_184:
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
  v103 = (UISprite_o *)this->fields.equipSprite;
  v105 = v22[5].klass;
  v104 = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v377.fields.currentCryptoKey = v105;
  *(_QWORD *)&v377.fields.fakeValue = v104;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v377, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v103, v106, 0, 0);
  v107 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  supportServantData = v359;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v107, 0, 0) )
  {
    v109 = v22[6].klass;
    v108 = v22[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v378.fields.currentCryptoKey = v109;
    *(_QWORD *)&v378.fields.fakeValue = v108;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v378, 0);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_608;
    v110 = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_536:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( v110 >= 4 )
    {
      if ( !v341 )
        goto LABEL_608;
      v11 = SLODWORD(v341[5].monitor) >= v110;
    }
    else
    {
      v11 = 0;
    }
    if ( gameObject )
    {
LABEL_541:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0);
      goto LABEL_542;
    }
LABEL_608:
    sub_1C71608(gameObject, v11);
  }
LABEL_542:
  v290 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v290, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v82 & 1) == 0 )
      {
        v291 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v291 )
        {
          v293 = *(_QWORD *)&v291->fields.svtId.fields.currentCryptoKey;
          v292 = *(_QWORD *)&v291->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v381.fields.currentCryptoKey = v293;
          *(_QWORD *)&v381.fields.fakeValue = v292;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v381, 0);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_608;
          v294 = gameObject;
          v295 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_563:
          v301 = v295;
          goto LABEL_565;
        }
      }
    }
    else if ( (v82 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v300 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v299 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v382.fields.currentCryptoKey = v300;
        *(_QWORD *)&v382.fields.fakeValue = v299;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v382, 0);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_608;
        v294 = gameObject;
        v295 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_563;
      }
    }
    v301 = -1;
    v294 = -1;
LABEL_565:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_608;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v101,
      v294,
      v301,
      equipSvtId,
      0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_608;
      v297 = 0;
      goto LABEL_574;
    }
    goto LABEL_575;
  }
  v296 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v296, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_608;
    v297 = v102;
LABEL_574:
    ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)gameObject, v297, 0);
  }
LABEL_575:
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

  if ( (byte_4CC3A3E & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SupportSelectItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_20477/*"img_frames_mask05"*/);
    sub_1C713B0(&StringLiteral_18519/*"datalost_party_edit"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3A3E = 1;
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
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18519/*"datalost_party_edit"*/, 0);
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
             (System_String_o *)StringLiteral_20477/*"img_frames_mask05"*/,
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
        if ( !byte_4CC0D0E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D0E = 1;
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
      if ( !byte_4CC0D0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
    sub_1C71608(gameObject, v10);
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

  if ( (byte_4CC3A3F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3A3F = 1;
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
        if ( !byte_4CC0D0E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D0E = 1;
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
      if ( !byte_4CC0D0E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
    sub_1C71608(gameObject, v8);
  }
}


void SupportSelectItemDraw___c__DisplayClass66_0___ctor(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SupportSelectItemDraw___c__DisplayClass66_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  SupportSelectItemDraw___c__DisplayClass66_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4CC3A44 & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass66_0_o *)sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CC3A44 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1C71608(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
}