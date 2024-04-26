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
  System_String_o *v6; // x0

  if ( (byte_435433A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_15865/*"[-]"*/);
    sub_B70694(&StringLiteral_11254/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_B70694(&StringLiteral_15964/*"[FFFF00]"*/);
    byte_435433A = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_44760452(
             (System_String_o *)StringLiteral_15964/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15865/*"[-]"*/,
             0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11254/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_44761580(
           (System_String_o *)StringLiteral_15964/*"[FFFF00]"*/,
           message,
           v6,
           (System_String_o *)StringLiteral_15865/*"[-]"*/,
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
  RestrictionNotSatisfyWholeInfo_o *v7; // x19
  int v8; // w23
  char v9; // w25
  BalanceConfig_c *v10; // x0
  int32_t v11; // w22
  PartyOrganizationListViewItem_o *v12; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v14; // x25
  int32_t v15; // w26
  System_Int32_array *v16; // x0
  const MethodInfo *v17; // x2
  char v18; // w22
  int v19; // w24
  int32_t v20; // w22
  char v21; // w24
  PartyOrganizationListViewItem_o *v22; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v26; // x2
  char v27; // w23
  int v28; // w25
  const MethodInfo *v29; // x3
  bool v30; // zf
  int32_t v31; // w22
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  bool v34; // w21
  int v35; // w23
  BalanceConfig_c *v36; // x0
  int32_t v37; // w22
  PartyOrganizationListViewItem_o *v38; // x24
  ServantEntity_o *v39; // x25
  int32_t v40; // w26
  System_Int32_array *v41; // x0
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  int v44; // w22
  char v45; // w25
  BalanceConfig_c *v46; // x0
  int32_t v47; // w23
  PartyOrganizationListViewItem_o *v48; // x24
  ServantEntity_o *v49; // x25
  int32_t v50; // w26
  System_Int32_array *v51; // x0
  const MethodInfo *v52; // x2
  int v53; // w24
  int32_t v54; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v56; // x23
  ServantEntity_o *v57; // x24
  int32_t v58; // w25
  System_Int32_array *v59; // x0
  const MethodInfo *v60; // x2
  int32_t v61; // w22
  int v62; // w21
  System_String_o *v63; // x2
  const MethodInfo *v64; // x3
  bool v65; // w1
  int32_t v66; // w22
  const MethodInfo *v67; // x3

  v7 = this;
  if ( (byte_4354334 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4354334 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v20 = 0;
        v21 = 1;
LABEL_27:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v20 >= this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          v28 = 1;
          v27 = v21;
          goto LABEL_32;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0LL);
        if ( !this )
          break;
        v22 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_26;
        servantEntity = v22->fields.servantEntity;
        svtLimitCount = v22->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v22, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
        v21 = 0;
        v27 = 0;
        v28 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, v26) )
        {
LABEL_26:
          ++v20;
          goto LABEL_27;
        }
LABEL_32:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v28 == 0) | v27 & 1, (System_String_o *)this, v29);
        v30 = v28 == 0;
LABEL_124:
        v34 = !v30;
        if ( (v27 & 1) != 0 )
          return 1;
        return !v34;
      case 2:
        v31 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v31 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_107;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v31, 0LL);
            if ( this )
            {
              ++v31;
              if ( BYTE5(this[6].fields.wholeInfoPrefixLabel) )
                goto LABEL_106;
              continue;
            }
          }
          goto LABEL_136;
        }
      case 3:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v32 = System_String__Replace_44765404(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v32, v33);
        v34 = 1;
        return !v34;
      case 4:
        v35 = 0;
        v9 = 1;
        while ( 1 )
        {
          v36 = BalanceConfig_TypeInfo;
          v37 = v35;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v36 = BalanceConfig_TypeInfo;
          }
          if ( v35 >= v36->static_fields->DeckMemberMax )
            goto LABEL_58;
          ++v35;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v37 + 1,
                                                       (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v37, 0LL);
            if ( !this )
              goto LABEL_136;
            v38 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v39 = v38->fields.servantEntity;
              v40 = v38->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v38, 0LL);
              if ( !v39 )
                goto LABEL_136;
              v35 = v37 + 1;
              v41 = ServantEntity__getIndividuality(v39, v40, (int32_t)this, 0LL);
              v9 = 0;
              v18 = 0;
              v19 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v41, v42) )
                goto LABEL_59;
            }
          }
        }
      case 5:
        v44 = 0;
        v45 = 1;
        while ( 1 )
        {
LABEL_64:
          v46 = BalanceConfig_TypeInfo;
          v47 = v44;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v46 = BalanceConfig_TypeInfo;
          }
          if ( v44 >= v46->static_fields->DeckMemberMax )
          {
            v53 = 1;
            v27 = v45;
            goto LABEL_121;
          }
          ++v44;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v47 + 1,
                                                       (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v47, 0LL);
            if ( !this )
              goto LABEL_136;
            v48 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              break;
          }
        }
        if ( !v48->fields.isFollower )
        {
          v49 = v48->fields.servantEntity;
          v50 = v48->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v48, 0LL);
          if ( !v49 )
            break;
          v44 = v47 + 1;
          v51 = ServantEntity__getIndividuality(v49, v50, (int32_t)this, 0LL);
          v45 = 0;
          v27 = 0;
          v53 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v51, v52) )
            goto LABEL_121;
          goto LABEL_64;
        }
        v27 = 0;
        v53 = 0;
LABEL_121:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v53 == 0) | v27 & 1, (System_String_o *)this, v67);
        v30 = v53 == 0;
        goto LABEL_124;
      case 6:
      case 7:
        v8 = 0;
        v9 = 1;
        while ( 1 )
        {
LABEL_6:
          v10 = BalanceConfig_TypeInfo;
          v11 = v8;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v10 = BalanceConfig_TypeInfo;
          }
          if ( v8 >= v10->static_fields->DeckMemberMax )
          {
LABEL_58:
            v19 = 1;
            v18 = v9;
            goto LABEL_59;
          }
          ++v8;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v11 + 1,
                                                       (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v11, 0LL);
            if ( !this )
              goto LABEL_136;
            v12 = (PartyOrganizationListViewItem_o *)this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
        }
        targetVals2 = restrictionWholeEntity->fields.targetVals2;
        if ( !targetVals2 )
          break;
        if ( targetVals2->max_length != 1 || v12->fields.isFollower )
        {
          v14 = v12->fields.servantEntity;
          v15 = v12->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v12, 0LL);
          if ( !v14 )
            break;
          v8 = v11 + 1;
          v16 = ServantEntity__getIndividuality(v14, v15, (int32_t)this, 0LL);
          v9 = 0;
          v18 = 0;
          v19 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v16, v17) )
            goto LABEL_59;
          goto LABEL_6;
        }
        v18 = 0;
        v19 = 0;
LABEL_59:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v19 == 0) | v18 & 1, (System_String_o *)this, v43);
        v34 = v19 != 0;
        if ( (v18 & 1) == 0 )
          return !v34;
        return 1;
      case 8:
        v54 = 0;
LABEL_82:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v54 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v54, 0LL);
          if ( !this )
            break;
          if ( !*((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5) || !BYTE3(this[4].fields.wholeInfoLabel) )
          {
            ++v54;
            goto LABEL_82;
          }
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (this[6].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[4].fields.wholeInfoPrefixLabel) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            if ( i >= this[3].fields.wholeInfoLabel->fields.mWidth )
              break;
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !this )
              goto LABEL_136;
            v56 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v57 = v56->fields.servantEntity;
              v58 = v56->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v56, 0LL);
              if ( !v57 )
                goto LABEL_136;
              v59 = ServantEntity__getIndividuality(v57, v58, (int32_t)this, 0LL);
              if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v59, v60) )
                goto LABEL_107;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_106:
        v62 = 0;
        goto LABEL_108;
      case 9:
        v61 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v61 >= this[3].fields.wholeInfoLabel->fields.mPivot )
          {
LABEL_107:
            v62 = 1;
LABEL_108:
            this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
            if ( this )
            {
              v63 = System_String__Replace_44765404(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_26/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v65 = v62 == 0;
              v34 = v62 != 0;
LABEL_132:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v65, v63, v64);
              return !v34;
            }
          }
          else if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v61, 0LL);
            if ( this )
            {
              ++v61;
              if ( HIBYTE(this[4].fields.m_CachedPtr) )
                goto LABEL_106;
              continue;
            }
          }
          break;
        }
        break;
      case 0xA:
        v66 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v66 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            break;
          if ( !partyItem )
            goto LABEL_136;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v66, 0LL);
          if ( !this )
            goto LABEL_136;
          if ( !BYTE6(this[6].fields.wholeInfoPrefixLabel) )
          {
            ++v66;
            if ( SLODWORD(this[6].fields.wholeInfoLabel) <= 0 )
              continue;
          }
          v34 = 0;
          goto LABEL_130;
        }
        v34 = 1;
LABEL_130:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v63 = System_String__Replace_44765404(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v65 = !v34;
        goto LABEL_132;
      default:
        return 1;
    }
  }
LABEL_136:
  sub_B7076C(this, restrictionWholeEntity);
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_String_o *Member; // x0
  int v7; // w20
  System_String_o *v8; // x0
  bool v9; // w20
  const MethodInfo *v10; // x3

  if ( (byte_4354336 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_11250/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354336 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v5 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v5, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v5;
    if ( ((unsigned __int64)Member[10].klass & 0x8000000000000000LL) == 0 )
    {
      v7 = 0;
      goto LABEL_13;
    }
  }
  v7 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11250/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B7076C(Member, partyItem);
  v8 = System_String__Replace_44765404(
         Member,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v9 = v7 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v9, v8, v10);
  return v9;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_String_o *Member; // x0
  int v7; // w20
  System_String_o *v8; // x0
  bool v9; // w20
  const MethodInfo *v10; // x3

  if ( (byte_4354337 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_10494/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354337 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v5 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v5, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v5;
    if ( LOBYTE(Member[14].monitor) )
    {
      v7 = 0;
      goto LABEL_13;
    }
  }
  v7 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B7076C(Member, partyItem);
  v8 = System_String__Replace_44765404(
         Member,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v9 = v7 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v9, v8, v10);
  return v9;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_String_o *Member; // x0
  int v7; // w20
  System_String_o *v8; // x0
  bool v9; // w20
  const MethodInfo *v10; // x3

  if ( (byte_4354335 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_11253/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354335 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v5 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v5, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v5;
    if ( BYTE2(Member[8].fields.m_stringLength) )
    {
      v7 = 0;
      goto LABEL_13;
    }
  }
  v7 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11253/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B7076C(Member, partyItem);
  v8 = System_String__Replace_44765404(
         Member,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v9 = v7 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v9, v8, v10);
  return v9;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_29670576(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v11; // w20
  int wholeInfoPrefixLabel_low; // w24
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3
  bool v15; // w1
  int32_t v16; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v18; // x23
  ServantEntity_o *v19; // x24
  int32_t v20; // w25
  System_Int32_array *v21; // x0
  const MethodInfo *v22; // x2
  int32_t v23; // w22
  PartyOrganizationListViewItem_o *v24; // x21
  char v25; // w21
  int32_t v26; // w22
  int32_t v27; // w23
  int v28; // w24
  int32_t v29; // w22
  char v30; // w25
  PartyOrganizationListViewItem_o *v31; // x23
  ServantEntity_o *v32; // x24
  int32_t v33; // w25
  System_Int32_array *v34; // x0
  const MethodInfo *v35; // x2
  int32_t v36; // w22
  char v37; // w25
  PartyOrganizationListViewItem_o *v38; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v42; // x2
  char v43; // w23
  const MethodInfo *v44; // x3
  int v45; // w23
  BalanceConfig_c *v46; // x0
  int32_t v47; // w22
  RestrictionNotSatisfyWholeInfo_o *v48; // x24
  struct System_Int32_array *targetVals; // x8
  int32_t v50; // w22
  int32_t v51; // w22
  RestrictionNotSatisfyWholeInfo_o *v52; // x23
  struct System_Int32_array *v53; // x8
  int32_t v54; // w22
  const MethodInfo *v55; // x3
  ServantEntity_o *v56; // x22
  int32_t v57; // w23
  System_Int32_array *v58; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  __int64 v61; // x0

  v8 = this;
  if ( (byte_4354338 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4354338 = 1;
  }
  if ( restrictionEntity )
  {
    this = (RestrictionNotSatisfyWholeInfo_o *)(&dword_0 + 1);
    switch ( restrictionEntity->fields.type )
    {
      case 1:
        v36 = 0;
        v37 = 1;
LABEL_88:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v36 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v36, 0LL);
          if ( !this )
            break;
          v38 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            goto LABEL_87;
          servantEntity = v38->fields.servantEntity;
          svtLimitCount = v38->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v38, 0LL);
          if ( !servantEntity )
            break;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
          v37 = 0;
          v43 = 0;
          wholeInfoPrefixLabel_low = 0;
          if ( !RestrictionEntity__IsRestriction_29661252(restrictionEntity, Individuality, v42) )
          {
LABEL_87:
            ++v36;
            goto LABEL_88;
          }
        }
        else
        {
          wholeInfoPrefixLabel_low = 1;
          v43 = v37;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v43 & 1,
              (System_String_o *)this,
              v44);
            if ( (v43 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 6:
        v50 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v50 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v50, 0LL);
            if ( this )
            {
              ++v50;
              if ( BYTE2(this[4].fields.m_CachedPtr) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 7:
        v45 = 0;
        v30 = 1;
        while ( 1 )
        {
          v46 = BalanceConfig_TypeInfo;
          v47 = v45;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v46 = BalanceConfig_TypeInfo;
          }
          if ( v45 >= v46->static_fields->DeckMemberMax )
            goto LABEL_109;
          ++v45;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                       v47 + 1,
                                                       (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_163;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v47, 0LL);
            if ( !this )
              goto LABEL_163;
            v48 = this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              targetVals = restrictionEntity->fields.targetVals;
              if ( !targetVals )
                goto LABEL_163;
              wholeInfoPrefixLabel_low = LOBYTE(v48[2].fields.wholeInfoPrefixLabel);
              if ( targetVals->max_length != 1 )
              {
                v30 = 0;
                v45 = v47 + 1;
                if ( wholeInfoPrefixLabel_low )
                  goto LABEL_109;
                continue;
              }
              v30 = 0;
              goto LABEL_151;
            }
          }
        }
      case 8:
        v29 = 0;
        v30 = 1;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v29 >= this[3].fields.wholeInfoLabel->fields.mWidth )
          goto LABEL_150;
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
        if ( !this )
          break;
        v31 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_75;
        if ( v31->fields.isFollower )
        {
          v30 = 0;
LABEL_150:
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          v32 = v31->fields.servantEntity;
          v33 = v31->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v31, 0LL);
          if ( !v32 )
            break;
          v34 = ServantEntity__getIndividuality(v32, v33, (int32_t)this, 0LL);
          v30 = 0;
          if ( !RestrictionEntity__IsSearchVals_29660908(restrictionEntity, v34, v35) )
          {
LABEL_75:
            ++v29;
            goto LABEL_76;
          }
LABEL_109:
          wholeInfoPrefixLabel_low = 1;
        }
LABEL_151:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v30 & 1,
              (System_String_o *)this,
              v55);
            if ( (v30 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 9:
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, 0, 0LL);
        if ( !this )
          break;
        v24 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
        {
          v25 = 0;
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          if ( v24->fields.isFollower )
          {
            wholeInfoPrefixLabel_low = 0;
          }
          else
          {
            v56 = v24->fields.servantEntity;
            v57 = v24->fields.svtLimitCount;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v24, 0LL);
            if ( !v56 )
              break;
            v58 = ServantEntity__getIndividuality(v56, v57, (int32_t)this, 0LL);
            wholeInfoPrefixLabel_low = RestrictionEntity__IsSearchVals_29660908(restrictionEntity, v58, v59);
          }
          v25 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44765404(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v8 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
          v8,
          (wholeInfoPrefixLabel_low == 0) | v25 ^ 1,
          (System_String_o *)this,
          v60);
        if ( (v25 & 1) == 0 )
        {
LABEL_161:
          LOBYTE(this) = 1;
          return (char)this;
        }
LABEL_146:
        LOBYTE(this) = wholeInfoPrefixLabel_low == 0;
        return (char)this;
      case 0xA:
        v27 = 0;
        v28 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v27 < this[3].fields.wholeInfoLabel->fields.mPivot )
          {
            if ( partyItem )
            {
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v27, 0LL);
              if ( this )
              {
                v28 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
                ++v27;
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
          v53 = restrictionEntity->fields.targetVals;
          if ( !v53 )
            break;
          if ( !v53->max_length )
          {
LABEL_164:
            v61 = sub_B70798(this);
            sub_B70738(v61, 0LL);
          }
          wholeInfoPrefixLabel_low = v28 == v53->m_Items[1];
        }
        else
        {
LABEL_142:
          wholeInfoPrefixLabel_low = 1;
        }
LABEL_143:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          v13 = System_String__Replace_44765404(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v15 = wholeInfoPrefixLabel_low == 0;
LABEL_145:
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v15, v13, v14);
          goto LABEL_146;
        }
        break;
      case 0xB:
        v51 = 0;
        v28 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v51 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_129;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v51, 0LL);
            if ( this )
            {
              v52 = this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
                v28 += LOBYTE(v52[2].fields.wholeInfoPrefixLabel) ^ 1;
              ++v51;
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
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(
                                                     partyItem,
                                                     targetVals2->m_Items[1] - 1,
                                                     0LL);
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                     (PartyOrganizationListViewItem_o *)this,
                                                     0LL);
        name = restrictionEntity->fields.name;
        if ( !name )
          break;
        v11 = (char)this;
        wholeInfoPrefixLabel_low = ((unsigned __int8)this & 1) == 0;
        v13 = System_String__Replace_44765404(
                name,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v15 = v11 & 1;
        goto LABEL_145;
      case 0xD:
        v54 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v54 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v54, 0LL);
            if ( this )
            {
              ++v54;
              if ( BYTE5(this[6].fields.wholeInfoPrefixLabel) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xE:
        v16 = 0;
LABEL_17:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v16 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v16, 0LL);
          if ( !this )
            break;
          if ( !*((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5) || !BYTE3(this[4].fields.wholeInfoLabel) )
          {
            ++v16;
            goto LABEL_17;
          }
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (this[6].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this[4].fields.wholeInfoPrefixLabel) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
            }
            if ( i >= this[3].fields.wholeInfoLabel->fields.mWidth )
              break;
            if ( !partyItem )
              goto LABEL_163;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
            if ( !this )
              goto LABEL_163;
            v18 = (PartyOrganizationListViewItem_o *)this;
            if ( *((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v19 = v18->fields.servantEntity;
              v20 = v18->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v18, 0LL);
              if ( !v19 )
                goto LABEL_163;
              v21 = ServantEntity__getIndividuality(v19, v20, (int32_t)this, 0LL);
              if ( RestrictionEntity__IsSearchVals_29660908(restrictionEntity, v21, v22) )
                goto LABEL_142;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_141:
        wholeInfoPrefixLabel_low = 0;
        goto LABEL_143;
      case 0xF:
        v26 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v26 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v26, 0LL);
            if ( this )
            {
              ++v26;
              if ( HIBYTE(this[4].fields.m_CachedPtr) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0x11:
        v23 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v23 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v23, 0LL);
            if ( this )
            {
              if ( BYTE6(this[6].fields.wholeInfoPrefixLabel) )
                goto LABEL_141;
              ++v23;
              if ( SLODWORD(this[6].fields.wholeInfoLabel) > 0 )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      default:
        return (char)this;
    }
  }
LABEL_163:
  sub_B7076C(this, restrictionEntity);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
        RestrictionNotSatisfyWholeInfo_o *this,
        bool isWarning,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Component_o *notSatisfySprite; // x0
  UILabel_o *wholeInfoPrefixLabel; // x21
  RestrictionNotSatisfyWholeInfo_o *v9; // x0
  const MethodInfo *v10; // x3
  struct UILabel_o *wholeInfoLabel; // x20
  RestrictionNotSatisfyWholeInfo_o *v12; // x0
  const MethodInfo *v13; // x3
  System_String_o *v14; // x1

  if ( (byte_4354339 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_24233/*"・"*/);
    byte_4354339 = 1;
  }
  notSatisfySprite = (UnityEngine_Component_o *)this->fields.notSatisfySprite;
  if ( !notSatisfySprite )
    goto LABEL_13;
  notSatisfySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(notSatisfySprite, 0LL);
  if ( !notSatisfySprite )
    goto LABEL_13;
  if ( !isWarning )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 0, 0LL);
    notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoPrefixLabel;
    if ( notSatisfySprite )
    {
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_24233/*"・"*/, 0LL);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B7076C(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0LL);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_24233/*"・"*/,
                                                  0,
                                                  v10);
  if ( !wholeInfoPrefixLabel )
    goto LABEL_13;
  UILabel__set_text(wholeInfoPrefixLabel, (System_String_o *)notSatisfySprite, 0LL);
  wholeInfoLabel = this->fields.wholeInfoLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v12,
                                                  message,
                                                  1,
                                                  v13);
  if ( !wholeInfoLabel )
    goto LABEL_13;
  v14 = (System_String_o *)notSatisfySprite;
  notSatisfySprite = (UnityEngine_Component_o *)wholeInfoLabel;
LABEL_12:
  UILabel__set_text((UILabel_o *)notSatisfySprite, v14, 0LL);
}