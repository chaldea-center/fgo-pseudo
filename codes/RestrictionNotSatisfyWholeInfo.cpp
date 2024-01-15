void __fastcall RestrictionNotSatisfyWholeInfo___ctor(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
        RestrictionNotSatisfyWholeInfo_o *this,
        System_String_o *message,
        bool isAddFixMessage,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x0

  if ( (byte_40FC84B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, message);
    sub_B16FFC(&StringLiteral_15581/*"[-]"*/, v6);
    sub_B16FFC(&StringLiteral_11064/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_B16FFC(&StringLiteral_15680/*"[FFFF00]"*/, v8);
    byte_40FC84B = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_43746016(
             (System_String_o *)StringLiteral_15680/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15581/*"[-]"*/,
             0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11064/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_43747144(
           (System_String_o *)StringLiteral_15680/*"[FFFF00]"*/,
           message,
           v9,
           (System_String_o *)StringLiteral_15581/*"[-]"*/,
           0LL);
}


void __fastcall RestrictionNotSatisfyWholeInfo__Awake(RestrictionNotSatisfyWholeInfo_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionWholeEntity_o *restrictionWholeEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w23
  char v12; // w25
  BalanceConfig_c *v13; // x0
  int32_t v14; // w22
  PartyOrganizationListViewItem_o *v15; // x0
  PartyOrganizationListViewItem_o *v16; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v18; // x25
  int32_t v19; // w26
  int32_t v20; // w0
  System_Int32_array *v21; // x0
  const MethodInfo *v22; // x2
  char v23; // w22
  int v24; // w24
  int32_t v25; // w22
  char v26; // w24
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v28; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  int32_t DispImageLimitCount; // w0
  System_Int32_array *Individuality; // x0
  const MethodInfo *v33; // x2
  char v34; // w23
  int v35; // w25
  BalanceConfig_c *v36; // x0
  System_String_o *summary; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  bool v40; // zf
  int32_t v41; // w22
  BalanceConfig_c *v42; // x0
  PartyOrganizationListViewItem_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  const MethodInfo *v46; // x3
  bool v47; // w21
  int v48; // w23
  BalanceConfig_c *v49; // x0
  int32_t v50; // w22
  PartyOrganizationListViewItem_o *v51; // x0
  PartyOrganizationListViewItem_o *v52; // x24
  ServantEntity_o *v53; // x25
  int32_t v54; // w26
  int32_t v55; // w0
  System_Int32_array *v56; // x0
  const MethodInfo *v57; // x2
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  const MethodInfo *v60; // x3
  int v61; // w22
  char v62; // w25
  BalanceConfig_c *v63; // x0
  int32_t v64; // w23
  PartyOrganizationListViewItem_o *v65; // x0
  PartyOrganizationListViewItem_o *v66; // x24
  ServantEntity_o *v67; // x25
  int32_t v68; // w26
  int32_t v69; // w0
  System_Int32_array *v70; // x0
  const MethodInfo *v71; // x2
  int v72; // w24
  int32_t v73; // w22
  PartyOrganizationListViewItem_o *v74; // x0
  BalanceConfig_c *v75; // x0
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v77; // x0
  PartyOrganizationListViewItem_o *v78; // x23
  ServantEntity_o *v79; // x24
  int32_t v80; // w25
  int32_t v81; // w0
  System_Int32_array *v82; // x0
  const MethodInfo *v83; // x2
  int32_t v84; // w22
  BalanceConfig_c *v85; // x0
  PartyOrganizationListViewItem_o *v86; // x0
  int v87; // w21
  System_String_o *v88; // x0
  System_String_o *v89; // x2
  const MethodInfo *v90; // x3
  bool v91; // w1
  int32_t v92; // w22
  BalanceConfig_c *v93; // x0
  PartyOrganizationListViewItem_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  const MethodInfo *v97; // x3
  System_String_o *v99; // x0

  if ( (byte_40FC845 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, restrictionWholeEntity);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FC845 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v25 = 0;
        v26 = 1;
LABEL_27:
        v36 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v36 = BalanceConfig_TypeInfo;
        }
        if ( v25 >= v36->static_fields->DeckMemberMax )
        {
          v35 = 1;
          v34 = v26;
          goto LABEL_32;
        }
        if ( !partyItem )
          break;
        Member = PartyListViewItem__GetMember(partyItem, v25, 0LL);
        if ( !Member )
          break;
        v28 = Member;
        if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0LL) )
          goto LABEL_26;
        servantEntity = v28->fields.servantEntity;
        svtLimitCount = v28->fields.svtLimitCount;
        DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(v28, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, DispImageLimitCount, 0LL);
        v26 = 0;
        v34 = 0;
        v35 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, v33) )
        {
LABEL_26:
          ++v25;
          goto LABEL_27;
        }
LABEL_32:
        summary = restrictionWholeEntity->fields.summary;
        if ( !summary )
          break;
        v38 = System_String__Replace_43750968(
                summary,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !this )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (v35 == 0) | v34 & 1, v38, v39);
        v40 = v35 == 0;
LABEL_124:
        v47 = !v40;
        if ( (v34 & 1) != 0 )
          return 1;
        return !v47;
      case 2:
        v41 = 0;
        while ( 2 )
        {
          v42 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v42 = BalanceConfig_TypeInfo;
          }
          if ( v41 >= v42->static_fields->DeckMemberMax )
            goto LABEL_107;
          if ( partyItem )
          {
            v43 = PartyListViewItem__GetMember(partyItem, v41, 0LL);
            if ( v43 )
            {
              ++v41;
              if ( v43->fields._IsAllOutBattle_k__BackingField )
                goto LABEL_106;
              continue;
            }
          }
          goto LABEL_136;
        }
      case 3:
        v44 = restrictionWholeEntity->fields.summary;
        if ( !v44 )
          break;
        v45 = System_String__Replace_43750968(
                v44,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, 0, v45, v46);
        v47 = 1;
        return !v47;
      case 4:
        v48 = 0;
        v12 = 1;
        while ( 1 )
        {
          v49 = BalanceConfig_TypeInfo;
          v50 = v48;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          if ( v48 >= v49->static_fields->DeckMemberMax )
            goto LABEL_58;
          ++v48;
          if ( System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                 v50 + 1,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            if ( !partyItem )
              goto LABEL_136;
            v51 = PartyListViewItem__GetMember(partyItem, v50, 0LL);
            if ( !v51 )
              goto LABEL_136;
            v52 = v51;
            if ( !PartyOrganizationListViewItem__get_IsEmpty(v51, 0LL) )
            {
              v53 = v52->fields.servantEntity;
              v54 = v52->fields.svtLimitCount;
              v55 = PartyOrganizationListViewItem__GetDispImageLimitCount(v52, 0LL);
              if ( !v53 )
                goto LABEL_136;
              v48 = v50 + 1;
              v56 = ServantEntity__getIndividuality(v53, v54, v55, 0LL);
              v12 = 0;
              v23 = 0;
              v24 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v56, v57) )
                goto LABEL_59;
            }
          }
        }
      case 5:
        v61 = 0;
        v62 = 1;
        while ( 1 )
        {
LABEL_64:
          v63 = BalanceConfig_TypeInfo;
          v64 = v61;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v63 = BalanceConfig_TypeInfo;
          }
          if ( v61 >= v63->static_fields->DeckMemberMax )
          {
            v72 = 1;
            v34 = v62;
            goto LABEL_121;
          }
          ++v61;
          if ( System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                 v64 + 1,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            if ( !partyItem )
              goto LABEL_136;
            v65 = PartyListViewItem__GetMember(partyItem, v64, 0LL);
            if ( !v65 )
              goto LABEL_136;
            v66 = v65;
            if ( !PartyOrganizationListViewItem__get_IsEmpty(v65, 0LL) )
              break;
          }
        }
        if ( !v66->fields.isFollower )
        {
          v67 = v66->fields.servantEntity;
          v68 = v66->fields.svtLimitCount;
          v69 = PartyOrganizationListViewItem__GetDispImageLimitCount(v66, 0LL);
          if ( !v67 )
            break;
          v61 = v64 + 1;
          v70 = ServantEntity__getIndividuality(v67, v68, v69, 0LL);
          v62 = 0;
          v34 = 0;
          v72 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v70, v71) )
            goto LABEL_121;
          goto LABEL_64;
        }
        v34 = 0;
        v72 = 0;
LABEL_121:
        v95 = restrictionWholeEntity->fields.summary;
        if ( !v95 )
          break;
        v96 = System_String__Replace_43750968(
                v95,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !this )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (v72 == 0) | v34 & 1, v96, v97);
        v40 = v72 == 0;
        goto LABEL_124;
      case 6:
      case 7:
        v11 = 0;
        v12 = 1;
        while ( 1 )
        {
LABEL_6:
          v13 = BalanceConfig_TypeInfo;
          v14 = v11;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v13 = BalanceConfig_TypeInfo;
          }
          if ( v11 >= v13->static_fields->DeckMemberMax )
          {
LABEL_58:
            v24 = 1;
            v23 = v12;
            goto LABEL_59;
          }
          ++v11;
          if ( System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                 v14 + 1,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            if ( !partyItem )
              goto LABEL_136;
            v15 = PartyListViewItem__GetMember(partyItem, v14, 0LL);
            if ( !v15 )
              goto LABEL_136;
            v16 = v15;
            if ( !PartyOrganizationListViewItem__get_IsEmpty(v15, 0LL) )
              break;
          }
        }
        targetVals2 = restrictionWholeEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( targetVals2->max_length != 1 || v16->fields.isFollower )
        {
          v18 = v16->fields.servantEntity;
          v19 = v16->fields.svtLimitCount;
          v20 = PartyOrganizationListViewItem__GetDispImageLimitCount(v16, 0LL);
          if ( !v18 )
            break;
          v11 = v14 + 1;
          v21 = ServantEntity__getIndividuality(v18, v19, v20, 0LL);
          v12 = 0;
          v23 = 0;
          v24 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v21, v22) )
            goto LABEL_59;
          goto LABEL_6;
        }
        v23 = 0;
        v24 = 0;
LABEL_59:
        v58 = restrictionWholeEntity->fields.summary;
        if ( !v58 )
          break;
        v59 = System_String__Replace_43750968(
                v58,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !this )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (v24 == 0) | v23 & 1, v59, v60);
        v47 = v24 != 0;
        if ( (v23 & 1) == 0 )
          return !v47;
        return 1;
      case 8:
        v73 = 0;
LABEL_82:
        v75 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v75 = BalanceConfig_TypeInfo;
        }
        if ( v73 < v75->static_fields->DeckMemberMax )
        {
          if ( !partyItem )
            break;
          v74 = PartyListViewItem__GetMember(partyItem, v73, 0LL);
          if ( !v74 )
            break;
          if ( !v74->fields.isFixedServantPositionRestriction || !v74->fields.isRestrictionNeedStarting )
          {
            ++v73;
            goto LABEL_82;
          }
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v75);
              v75 = BalanceConfig_TypeInfo;
            }
            if ( i >= v75->static_fields->DeckMainMemberMax )
              break;
            if ( !partyItem )
              goto LABEL_136;
            v77 = PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !v77 )
              goto LABEL_136;
            v78 = v77;
            if ( !PartyOrganizationListViewItem__get_IsEmpty(v77, 0LL) )
            {
              v79 = v78->fields.servantEntity;
              v80 = v78->fields.svtLimitCount;
              v81 = PartyOrganizationListViewItem__GetDispImageLimitCount(v78, 0LL);
              if ( !v79 )
                goto LABEL_136;
              v82 = ServantEntity__getIndividuality(v79, v80, v81, 0LL);
              if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v82, v83) )
                goto LABEL_107;
            }
            v75 = BalanceConfig_TypeInfo;
          }
        }
LABEL_106:
        v87 = 0;
        goto LABEL_108;
      case 9:
        v84 = 0;
        while ( 2 )
        {
          v85 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v85 = BalanceConfig_TypeInfo;
          }
          if ( v84 >= v85->static_fields->DeckMemberMax )
          {
LABEL_107:
            v87 = 1;
LABEL_108:
            v88 = restrictionWholeEntity->fields.summary;
            if ( v88 )
            {
              v89 = System_String__Replace_43750968(
                      v88,
                      (System_String_o *)StringLiteral_26/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v91 = v87 == 0;
              v47 = v87 != 0;
LABEL_132:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v91, v89, v90);
              return !v47;
            }
          }
          else if ( partyItem )
          {
            v86 = PartyListViewItem__GetMember(partyItem, v84, 0LL);
            if ( v86 )
            {
              ++v84;
              if ( v86->fields.isUniqueIndividualityRestriction )
                goto LABEL_106;
              continue;
            }
          }
          break;
        }
        break;
      case 0xA:
        v92 = 0;
        while ( 1 )
        {
          v93 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v93 = BalanceConfig_TypeInfo;
          }
          if ( v92 >= v93->static_fields->DeckMemberMax )
            break;
          if ( !partyItem )
            goto LABEL_136;
          v94 = PartyListViewItem__GetMember(partyItem, v92, 0LL);
          if ( !v94 )
            goto LABEL_136;
          if ( !v94->fields._IsDataLost_k__BackingField )
          {
            ++v92;
            if ( v94->fields._TimesToRestart_k__BackingField <= 0 )
              continue;
          }
          v47 = 0;
          goto LABEL_130;
        }
        v47 = 1;
LABEL_130:
        v99 = restrictionWholeEntity->fields.summary;
        if ( !v99 )
          break;
        v89 = System_String__Replace_43750968(
                v99,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v91 = !v47;
        goto LABEL_132;
      default:
        return 1;
    }
  }
LABEL_136:
  sub_B170D4();
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w21
  BalanceConfig_c *v10; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  int v12; // w20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  bool v15; // w20
  const MethodInfo *v16; // x3

  if ( (byte_40FC847 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v6);
    sub_B16FFC(&StringLiteral_11060/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC847 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v9 >= v10->static_fields->DeckMemberMax )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( (Member->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  v12 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11060/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !v13 )
LABEL_18:
    sub_B170D4();
  v14 = System_String__Replace_43750968(
          v13,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = v12 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15, v14, v16);
  return v15;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w21
  BalanceConfig_c *v10; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  int v12; // w20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  bool v15; // w20
  const MethodInfo *v16; // x3

  if ( (byte_40FC848 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v6);
    sub_B16FFC(&StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC848 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v9 >= v10->static_fields->DeckMemberMax )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( Member->fields._IsNotSupportSingle_k__BackingField )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  v12 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !v13 )
LABEL_18:
    sub_B170D4();
  v14 = System_String__Replace_43750968(
          v13,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = v12 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15, v14, v16);
  return v15;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w21
  BalanceConfig_c *v10; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  int v12; // w20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  bool v15; // w20
  const MethodInfo *v16; // x3

  if ( (byte_40FC846 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v6);
    sub_B16FFC(&StringLiteral_11063/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC846 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v9 >= v10->static_fields->DeckMemberMax )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( Member->fields.isUniqueSvtRestriction )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  v12 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11063/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !v13 )
LABEL_18:
    sub_B170D4();
  v14 = System_String__Replace_43750968(
          v13,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = v12 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v15, v14, v16);
  return v15;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_29679100(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0
  struct System_Int32_array *targetVals2; // x8
  PartyOrganizationListViewItem_o *v14; // x0
  bool IsEmpty; // w0
  System_String_o *v16; // x8
  bool v17; // w20
  int isFollower; // w24
  System_String_o *v19; // x2
  const MethodInfo *v20; // x3
  bool v21; // w1
  int32_t v22; // w22
  PartyOrganizationListViewItem_o *v23; // x0
  BalanceConfig_c *v24; // x0
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v26; // x0
  PartyOrganizationListViewItem_o *v27; // x23
  ServantEntity_o *v28; // x24
  int32_t v29; // w25
  int32_t v30; // w0
  System_Int32_array *v31; // x0
  const MethodInfo *v32; // x2
  int32_t v33; // w22
  BalanceConfig_c *v34; // x0
  PartyOrganizationListViewItem_o *v35; // x0
  PartyOrganizationListViewItem_o *v36; // x0
  PartyOrganizationListViewItem_o *v37; // x21
  char v38; // w21
  int32_t v39; // w22
  BalanceConfig_c *v40; // x0
  PartyOrganizationListViewItem_o *v41; // x0
  int32_t v42; // w23
  int v43; // w24
  PartyOrganizationListViewItem_o *v44; // x0
  int32_t v45; // w22
  char v46; // w25
  PartyOrganizationListViewItem_o *v47; // x0
  PartyOrganizationListViewItem_o *v48; // x23
  ServantEntity_o *v49; // x24
  int32_t v50; // w25
  int32_t v51; // w0
  System_Int32_array *v52; // x0
  const MethodInfo *v53; // x2
  BalanceConfig_c *v54; // x0
  int32_t v55; // w22
  char v56; // w25
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v58; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  int32_t DispImageLimitCount; // w0
  System_Int32_array *Individuality; // x0
  const MethodInfo *v63; // x2
  char v64; // w23
  BalanceConfig_c *v65; // x0
  System_String_o *name; // x0
  System_String_o *v67; // x0
  const MethodInfo *v68; // x3
  int v69; // w23
  BalanceConfig_c *v70; // x0
  int32_t v71; // w22
  PartyOrganizationListViewItem_o *v72; // x0
  PartyOrganizationListViewItem_o *v73; // x24
  struct System_Int32_array *targetVals; // x8
  int32_t v75; // w22
  BalanceConfig_c *v76; // x0
  PartyOrganizationListViewItem_o *v77; // x0
  int32_t v78; // w22
  PartyOrganizationListViewItem_o *v79; // x0
  PartyOrganizationListViewItem_o *v80; // x23
  struct System_Int32_array *v81; // x8
  int32_t v82; // w22
  BalanceConfig_c *v83; // x0
  PartyOrganizationListViewItem_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  ServantEntity_o *v89; // x22
  int32_t v90; // w23
  int32_t v91; // w0
  System_Int32_array *v92; // x0
  const MethodInfo *v93; // x2
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  const MethodInfo *v96; // x3

  if ( (byte_40FC849 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, restrictionEntity);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FC849 = 1;
  }
  if ( restrictionEntity )
  {
    v12 = (BalanceConfig_c *)(&dword_0 + 1);
    switch ( restrictionEntity->fields.type )
    {
      case 1:
        v55 = 0;
        v56 = 1;
LABEL_88:
        v65 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v65 = BalanceConfig_TypeInfo;
        }
        if ( v55 < v65->static_fields->DeckMemberMax )
        {
          if ( !partyItem )
            break;
          Member = PartyListViewItem__GetMember(partyItem, v55, 0LL);
          if ( !Member )
            break;
          v58 = Member;
          if ( PartyOrganizationListViewItem__get_IsEmpty(Member, 0LL) )
            goto LABEL_87;
          servantEntity = v58->fields.servantEntity;
          svtLimitCount = v58->fields.svtLimitCount;
          DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(v58, 0LL);
          if ( !servantEntity )
            break;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, DispImageLimitCount, 0LL);
          v56 = 0;
          v64 = 0;
          isFollower = 0;
          if ( !RestrictionEntity__IsRestriction_29671008(restrictionEntity, Individuality, v63) )
          {
LABEL_87:
            ++v55;
            goto LABEL_88;
          }
        }
        else
        {
          isFollower = 1;
          v64 = v56;
        }
        name = restrictionEntity->fields.name;
        if ( name )
        {
          v67 = System_String__Replace_43750968(
                  name,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          if ( this )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (isFollower == 0) | v64 & 1, v67, v68);
            if ( (v64 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 6:
        v75 = 0;
        while ( 2 )
        {
          v76 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v76 = BalanceConfig_TypeInfo;
          }
          if ( v75 >= v76->static_fields->DeckMemberMax )
            goto LABEL_142;
          if ( partyItem )
          {
            v77 = PartyListViewItem__GetMember(partyItem, v75, 0LL);
            if ( v77 )
            {
              ++v75;
              if ( v77->fields.isUniqueSvtRestriction )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 7:
        v69 = 0;
        v46 = 1;
        while ( 1 )
        {
          v70 = BalanceConfig_TypeInfo;
          v71 = v69;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v70 = BalanceConfig_TypeInfo;
          }
          if ( v69 >= v70->static_fields->DeckMemberMax )
            goto LABEL_109;
          ++v69;
          if ( System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                 v71 + 1,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            if ( !partyItem )
              goto LABEL_163;
            v72 = PartyListViewItem__GetMember(partyItem, v71, 0LL);
            if ( !v72 )
              goto LABEL_163;
            v73 = v72;
            if ( !PartyOrganizationListViewItem__get_IsEmpty(v72, 0LL) )
            {
              targetVals = restrictionEntity->fields.targetVals;
              if ( !targetVals )
                goto LABEL_163;
              isFollower = v73->fields.isFollower;
              if ( targetVals->max_length != 1 )
              {
                v46 = 0;
                v69 = v71 + 1;
                if ( isFollower )
                  goto LABEL_109;
                continue;
              }
              v46 = 0;
              goto LABEL_151;
            }
          }
        }
      case 8:
        v45 = 0;
        v46 = 1;
LABEL_76:
        v54 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v54 = BalanceConfig_TypeInfo;
        }
        if ( v45 >= v54->static_fields->DeckMainMemberMax )
          goto LABEL_150;
        if ( !partyItem )
          break;
        v47 = PartyListViewItem__GetMember(partyItem, v45, 0LL);
        if ( !v47 )
          break;
        v48 = v47;
        if ( PartyOrganizationListViewItem__get_IsEmpty(v47, 0LL) )
          goto LABEL_75;
        if ( v48->fields.isFollower )
        {
          v46 = 0;
LABEL_150:
          isFollower = 0;
        }
        else
        {
          v49 = v48->fields.servantEntity;
          v50 = v48->fields.svtLimitCount;
          v51 = PartyOrganizationListViewItem__GetDispImageLimitCount(v48, 0LL);
          if ( !v49 )
            break;
          v52 = ServantEntity__getIndividuality(v49, v50, v51, 0LL);
          v46 = 0;
          if ( !RestrictionEntity__IsSearchVals_29670664(restrictionEntity, v52, v53) )
          {
LABEL_75:
            ++v45;
            goto LABEL_76;
          }
LABEL_109:
          isFollower = 1;
        }
LABEL_151:
        v86 = restrictionEntity->fields.name;
        if ( v86 )
        {
          v87 = System_String__Replace_43750968(
                  v86,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          if ( this )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (isFollower == 0) | v46 & 1, v87, v88);
            if ( (v46 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 9:
        if ( !partyItem )
          break;
        v36 = PartyListViewItem__GetMember(partyItem, 0, 0LL);
        if ( !v36 )
          break;
        v37 = v36;
        if ( PartyOrganizationListViewItem__get_IsEmpty(v36, 0LL) )
        {
          v38 = 0;
          isFollower = 0;
        }
        else
        {
          if ( v37->fields.isFollower )
          {
            isFollower = 0;
          }
          else
          {
            v89 = v37->fields.servantEntity;
            v90 = v37->fields.svtLimitCount;
            v91 = PartyOrganizationListViewItem__GetDispImageLimitCount(v37, 0LL);
            if ( !v89 )
              break;
            v92 = ServantEntity__getIndividuality(v89, v90, v91, 0LL);
            isFollower = RestrictionEntity__IsSearchVals_29670664(restrictionEntity, v92, v93);
          }
          v38 = 1;
        }
        v94 = restrictionEntity->fields.name;
        if ( !v94 )
          break;
        v95 = System_String__Replace_43750968(
                v94,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( !this )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, (isFollower == 0) | v38 ^ 1, v95, v96);
        if ( (v38 & 1) == 0 )
        {
LABEL_161:
          LOBYTE(v12) = 1;
          return (char)v12;
        }
LABEL_146:
        LOBYTE(v12) = isFollower == 0;
        return (char)v12;
      case 0xA:
        v42 = 0;
        v43 = 0;
        while ( 2 )
        {
          v12 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v12 = BalanceConfig_TypeInfo;
          }
          if ( v42 < v12->static_fields->DeckMemberMax )
          {
            if ( partyItem )
            {
              v44 = PartyListViewItem__GetMember(partyItem, v42, 0LL);
              if ( v44 )
              {
                v43 += !PartyOrganizationListViewItem__get_IsEmpty(v44, 0LL);
                ++v42;
                continue;
              }
            }
            goto LABEL_163;
          }
          break;
        }
        if ( !questRestrictionInfo )
          break;
        if ( questRestrictionInfo->fields.isNpcMultipleBattle )
          goto LABEL_142;
LABEL_129:
        if ( restrictionEntity->fields.rangeType == 1 )
        {
          v81 = restrictionEntity->fields.targetVals;
          if ( !v81 )
            break;
          if ( !v81->max_length )
          {
LABEL_164:
            sub_B17100(v12, restrictionEntity, partyItem);
            sub_B170A0();
          }
          isFollower = v43 == v81->m_Items[1];
        }
        else
        {
LABEL_142:
          isFollower = 1;
        }
LABEL_143:
        v85 = restrictionEntity->fields.name;
        if ( v85 )
        {
          v19 = System_String__Replace_43750968(
                  v85,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v21 = isFollower == 0;
LABEL_145:
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v21, v19, v20);
          goto LABEL_146;
        }
        break;
      case 0xB:
        v78 = 0;
        v43 = 0;
        while ( 2 )
        {
          v12 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v12 = BalanceConfig_TypeInfo;
          }
          if ( v78 >= v12->static_fields->DeckMemberMax )
            goto LABEL_129;
          if ( partyItem )
          {
            v79 = PartyListViewItem__GetMember(partyItem, v78, 0LL);
            if ( v79 )
            {
              v80 = v79;
              if ( !PartyOrganizationListViewItem__get_IsEmpty(v79, 0LL) )
                v43 += !v80->fields.isFollower;
              ++v78;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xC:
      case 0x10:
        targetVals2 = restrictionEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( !targetVals2->max_length )
          goto LABEL_164;
        if ( !partyItem )
          break;
        v14 = PartyListViewItem__GetMember(partyItem, targetVals2->m_Items[1] - 1, 0LL);
        if ( !v14 )
          break;
        IsEmpty = PartyOrganizationListViewItem__get_IsEmpty(v14, 0LL);
        v16 = restrictionEntity->fields.name;
        if ( !v16 )
          break;
        v17 = IsEmpty;
        isFollower = !IsEmpty;
        v19 = System_String__Replace_43750968(
                v16,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v21 = v17;
        goto LABEL_145;
      case 0xD:
        v82 = 0;
        while ( 2 )
        {
          v83 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v83 = BalanceConfig_TypeInfo;
          }
          if ( v82 >= v83->static_fields->DeckMemberMax )
            goto LABEL_142;
          if ( partyItem )
          {
            v84 = PartyListViewItem__GetMember(partyItem, v82, 0LL);
            if ( v84 )
            {
              ++v82;
              if ( v84->fields._IsAllOutBattle_k__BackingField )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xE:
        v22 = 0;
LABEL_17:
        v24 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v24 = BalanceConfig_TypeInfo;
        }
        if ( v22 < v24->static_fields->DeckMemberMax )
        {
          if ( !partyItem )
            break;
          v23 = PartyListViewItem__GetMember(partyItem, v22, 0LL);
          if ( !v23 )
            break;
          if ( !v23->fields.isFixedServantPositionRestriction || !v23->fields.isRestrictionNeedStarting )
          {
            ++v22;
            goto LABEL_17;
          }
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v24);
              v24 = BalanceConfig_TypeInfo;
            }
            if ( i >= v24->static_fields->DeckMainMemberMax )
              break;
            if ( !partyItem )
              goto LABEL_163;
            v26 = PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !v26 )
              goto LABEL_163;
            v27 = v26;
            if ( v26->fields.isFixedServantPositionRestriction && !PartyOrganizationListViewItem__get_IsEmpty(v26, 0LL) )
            {
              v28 = v27->fields.servantEntity;
              v29 = v27->fields.svtLimitCount;
              v30 = PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0LL);
              if ( !v28 )
                goto LABEL_163;
              v31 = ServantEntity__getIndividuality(v28, v29, v30, 0LL);
              if ( RestrictionEntity__IsSearchVals_29670664(restrictionEntity, v31, v32) )
                goto LABEL_142;
            }
            v24 = BalanceConfig_TypeInfo;
          }
        }
LABEL_141:
        isFollower = 0;
        goto LABEL_143;
      case 0xF:
        v39 = 0;
        while ( 2 )
        {
          v40 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v40 = BalanceConfig_TypeInfo;
          }
          if ( v39 >= v40->static_fields->DeckMemberMax )
            goto LABEL_142;
          if ( partyItem )
          {
            v41 = PartyListViewItem__GetMember(partyItem, v39, 0LL);
            if ( v41 )
            {
              ++v39;
              if ( v41->fields.isUniqueIndividualityRestriction )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0x11:
        v33 = 0;
        while ( 2 )
        {
          v34 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v34 = BalanceConfig_TypeInfo;
          }
          if ( v33 >= v34->static_fields->DeckMemberMax )
            goto LABEL_142;
          if ( partyItem )
          {
            v35 = PartyListViewItem__GetMember(partyItem, v33, 0LL);
            if ( v35 )
            {
              if ( v35->fields._IsDataLost_k__BackingField )
                goto LABEL_141;
              ++v33;
              if ( v35->fields._TimesToRestart_k__BackingField > 0 )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      default:
        return (char)v12;
    }
  }
LABEL_163:
  sub_B170D4();
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        RestrictionNotSatisfyWholeInfo_o *this,
        bool isWarning,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Component_o *notSatisfySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v9; // x21
  RestrictionNotSatisfyWholeInfo_o *v10; // x0
  const MethodInfo *v11; // x3
  System_String_o *fixed; // x0
  struct UILabel_o *v13; // x20
  RestrictionNotSatisfyWholeInfo_o *v14; // x0
  const MethodInfo *v15; // x3
  System_String_o *v16; // x0
  System_String_o *v17; // x1
  UILabel_o *wholeInfoLabel; // x0
  UILabel_o *wholeInfoPrefixLabel; // x0

  if ( (byte_40FC84A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23742/*"・"*/, isWarning);
    byte_40FC84A = 1;
  }
  notSatisfySprite = (UnityEngine_Component_o *)this->fields.notSatisfySprite;
  if ( !notSatisfySprite )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(notSatisfySprite, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  if ( !isWarning )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
    if ( wholeInfoPrefixLabel )
    {
      UILabel__set_text(wholeInfoPrefixLabel, (System_String_o *)StringLiteral_23742/*"・"*/, 0LL);
      wholeInfoLabel = this->fields.wholeInfoLabel;
      if ( wholeInfoLabel )
      {
        v17 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v9 = this->fields.wholeInfoPrefixLabel;
  fixed = RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(v10, (System_String_o *)StringLiteral_23742/*"・"*/, 0, v11);
  if ( !v9 )
    goto LABEL_13;
  UILabel__set_text(v9, fixed, 0LL);
  v13 = this->fields.wholeInfoLabel;
  v16 = RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(v14, message, 1, v15);
  if ( !v13 )
    goto LABEL_13;
  v17 = v16;
  wholeInfoLabel = v13;
LABEL_12:
  UILabel__set_text(wholeInfoLabel, v17, 0LL);
}