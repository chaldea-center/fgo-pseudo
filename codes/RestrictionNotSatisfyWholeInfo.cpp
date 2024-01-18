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

  if ( (byte_418BB6C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, message);
    sub_B2C35C(&StringLiteral_15644/*"[-]"*/, v6);
    sub_B2C35C(&StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v7);
    sub_B2C35C(&StringLiteral_15743/*"[FFFF00]"*/, v8);
    byte_418BB6C = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_44307816(
             (System_String_o *)StringLiteral_15743/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15644/*"[-]"*/,
             0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_44308944(
           (System_String_o *)StringLiteral_15743/*"[FFFF00]"*/,
           message,
           v9,
           (System_String_o *)StringLiteral_15644/*"[-]"*/,
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w23
  char v12; // w25
  BalanceConfig_c *v13; // x0
  int32_t v14; // w22
  PartyOrganizationListViewItem_o *v15; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v17; // x25
  int32_t v18; // w26
  System_Int32_array *v19; // x0
  const MethodInfo *v20; // x2
  char v21; // w22
  int v22; // w24
  int32_t v23; // w22
  char v24; // w24
  PartyOrganizationListViewItem_o *v25; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v29; // x2
  char v30; // w23
  int v31; // w25
  const MethodInfo *v32; // x3
  bool v33; // zf
  int32_t v34; // w22
  System_String_o *v35; // x0
  const MethodInfo *v36; // x3
  bool v37; // w21
  int v38; // w23
  BalanceConfig_c *v39; // x0
  int32_t v40; // w22
  PartyOrganizationListViewItem_o *v41; // x24
  ServantEntity_o *v42; // x25
  int32_t v43; // w26
  System_Int32_array *v44; // x0
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  int v47; // w22
  char v48; // w25
  BalanceConfig_c *v49; // x0
  int32_t v50; // w23
  PartyOrganizationListViewItem_o *v51; // x24
  ServantEntity_o *v52; // x25
  int32_t v53; // w26
  System_Int32_array *v54; // x0
  const MethodInfo *v55; // x2
  int v56; // w24
  int32_t v57; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v59; // x23
  ServantEntity_o *v60; // x24
  int32_t v61; // w25
  System_Int32_array *v62; // x0
  const MethodInfo *v63; // x2
  int32_t v64; // w22
  int v65; // w21
  System_String_o *v66; // x2
  const MethodInfo *v67; // x3
  bool v68; // w1
  int32_t v69; // w22
  const MethodInfo *v70; // x3

  v7 = this;
  if ( (byte_418BB66 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, restrictionWholeEntity);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v9);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418BB66 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v23 = 0;
        v24 = 1;
LABEL_27:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v23 >= this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          v31 = 1;
          v30 = v24;
          goto LABEL_32;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v23, 0LL);
        if ( !this )
          break;
        v25 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_26;
        servantEntity = v25->fields.servantEntity;
        svtLimitCount = v25->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v25, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
        v24 = 0;
        v30 = 0;
        v31 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, v29) )
        {
LABEL_26:
          ++v23;
          goto LABEL_27;
        }
LABEL_32:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v31 == 0) | v30 & 1, (System_String_o *)this, v32);
        v33 = v31 == 0;
LABEL_124:
        v37 = !v33;
        if ( (v30 & 1) != 0 )
          return 1;
        return !v37;
      case 2:
        v34 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v34 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_107;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v34, 0LL);
            if ( this )
            {
              ++v34;
              if ( BYTE5(this[6].fields.notSatisfySprite) )
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
        v35 = System_String__Replace_44312768(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v35, v36);
        v37 = 1;
        return !v37;
      case 4:
        v38 = 0;
        v12 = 1;
        while ( 1 )
        {
          v39 = BalanceConfig_TypeInfo;
          v40 = v38;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v39 = BalanceConfig_TypeInfo;
          }
          if ( v38 >= v39->static_fields->DeckMemberMax )
            goto LABEL_58;
          ++v38;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v40 + 1,
                                                       (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v40, 0LL);
            if ( !this )
              goto LABEL_136;
            v41 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v42 = v41->fields.servantEntity;
              v43 = v41->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v41, 0LL);
              if ( !v42 )
                goto LABEL_136;
              v38 = v40 + 1;
              v44 = ServantEntity__getIndividuality(v42, v43, (int32_t)this, 0LL);
              v12 = 0;
              v21 = 0;
              v22 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v44, v45) )
                goto LABEL_59;
            }
          }
        }
      case 5:
        v47 = 0;
        v48 = 1;
        while ( 1 )
        {
LABEL_64:
          v49 = BalanceConfig_TypeInfo;
          v50 = v47;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          if ( v47 >= v49->static_fields->DeckMemberMax )
          {
            v56 = 1;
            v30 = v48;
            goto LABEL_121;
          }
          ++v47;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v50 + 1,
                                                       (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v50, 0LL);
            if ( !this )
              goto LABEL_136;
            v51 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              break;
          }
        }
        if ( !v51->fields.isFollower )
        {
          v52 = v51->fields.servantEntity;
          v53 = v51->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v51, 0LL);
          if ( !v52 )
            break;
          v47 = v50 + 1;
          v54 = ServantEntity__getIndividuality(v52, v53, (int32_t)this, 0LL);
          v48 = 0;
          v30 = 0;
          v56 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v54, v55) )
            goto LABEL_121;
          goto LABEL_64;
        }
        v30 = 0;
        v56 = 0;
LABEL_121:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v56 == 0) | v30 & 1, (System_String_o *)this, v70);
        v33 = v56 == 0;
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
            v22 = 1;
            v21 = v12;
            goto LABEL_59;
          }
          ++v11;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v14 + 1,
                                                       (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v14, 0LL);
            if ( !this )
              goto LABEL_136;
            v15 = (PartyOrganizationListViewItem_o *)this;
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
        if ( targetVals2->max_length != 1 || v15->fields.isFollower )
        {
          v17 = v15->fields.servantEntity;
          v18 = v15->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v15, 0LL);
          if ( !v17 )
            break;
          v11 = v14 + 1;
          v19 = ServantEntity__getIndividuality(v17, v18, (int32_t)this, 0LL);
          v12 = 0;
          v21 = 0;
          v22 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v19, v20) )
            goto LABEL_59;
          goto LABEL_6;
        }
        v21 = 0;
        v22 = 0;
LABEL_59:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v22 == 0) | v21 & 1, (System_String_o *)this, v46);
        v37 = v22 != 0;
        if ( (v21 & 1) == 0 )
          return !v37;
        return 1;
      case 8:
        v57 = 0;
LABEL_82:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v57 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v57, 0LL);
          if ( !this )
            break;
          if ( !BYTE5(this[4].monitor) || !BYTE3(this[4].fields.wholeInfoPrefixLabel) )
          {
            ++v57;
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
            v59 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v60 = v59->fields.servantEntity;
              v61 = v59->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v59, 0LL);
              if ( !v60 )
                goto LABEL_136;
              v62 = ServantEntity__getIndividuality(v60, v61, (int32_t)this, 0LL);
              if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v62, v63) )
                goto LABEL_107;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_106:
        v65 = 0;
        goto LABEL_108;
      case 9:
        v64 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v64 >= this[3].fields.wholeInfoLabel->fields.mPivot )
          {
LABEL_107:
            v65 = 1;
LABEL_108:
            this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
            if ( this )
            {
              v66 = System_String__Replace_44312768(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_26/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v68 = v65 == 0;
              v37 = v65 != 0;
LABEL_132:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v68, v66, v67);
              return !v37;
            }
          }
          else if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v64, 0LL);
            if ( this )
            {
              ++v64;
              if ( BYTE3(this[4].monitor) )
                goto LABEL_106;
              continue;
            }
          }
          break;
        }
        break;
      case 0xA:
        v69 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v69 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            break;
          if ( !partyItem )
            goto LABEL_136;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v69, 0LL);
          if ( !this )
            goto LABEL_136;
          if ( !BYTE6(this[6].fields.notSatisfySprite) )
          {
            ++v69;
            if ( SLODWORD(this[6].fields.wholeInfoPrefixLabel) <= 0 )
              continue;
          }
          v37 = 0;
          goto LABEL_130;
        }
        v37 = 1;
LABEL_130:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v66 = System_String__Replace_44312768(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v68 = !v37;
        goto LABEL_132;
      default:
        return 1;
    }
  }
LABEL_136:
  sub_B2C434(this, restrictionWholeEntity);
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
  System_String_o *Member; // x0
  int v11; // w20
  System_String_o *v12; // x0
  bool v13; // w20
  const MethodInfo *v14; // x3

  if ( (byte_418BB68 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418BB68 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v9 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( (*(_QWORD *)&Member[9].fields & 0x8000000000000000LL) == 0 )
    {
      v11 = 0;
      goto LABEL_13;
    }
  }
  v11 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B2C434(Member, partyItem);
  v12 = System_String__Replace_44312768(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v13 = v11 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v13, v12, v14);
  return v13;
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
  System_String_o *Member; // x0
  int v11; // w20
  System_String_o *v12; // x0
  bool v13; // w20
  const MethodInfo *v14; // x3

  if ( (byte_418BB69 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418BB69 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v9 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( LOBYTE(Member[13].fields.m_stringLength) )
    {
      v11 = 0;
      goto LABEL_13;
    }
  }
  v11 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B2C434(Member, partyItem);
  v12 = System_String__Replace_44312768(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v13 = v11 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v13, v12, v14);
  return v13;
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
  System_String_o *Member; // x0
  int v11; // w20
  System_String_o *v12; // x0
  bool v13; // w20
  const MethodInfo *v14; // x3

  if ( (byte_418BB67 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418BB67 = 1;
  }
  v9 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v9 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v9, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v9;
    if ( BYTE2(Member[8].monitor) )
    {
      v11 = 0;
      goto LABEL_13;
    }
  }
  v11 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B2C434(Member, partyItem);
  v12 = System_String__Replace_44312768(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v13 = v11 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v13, v12, v14);
  return v13;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_32869092(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v14; // w20
  int wholeInfoPrefixLabel_low; // w24
  System_String_o *v16; // x2
  const MethodInfo *v17; // x3
  bool v18; // w1
  int32_t v19; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v21; // x23
  ServantEntity_o *v22; // x24
  int32_t v23; // w25
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w22
  PartyOrganizationListViewItem_o *v27; // x21
  char v28; // w21
  int32_t v29; // w22
  int32_t v30; // w23
  int v31; // w24
  int32_t v32; // w22
  char v33; // w25
  PartyOrganizationListViewItem_o *v34; // x23
  ServantEntity_o *v35; // x24
  int32_t v36; // w25
  System_Int32_array *v37; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w22
  char v40; // w25
  PartyOrganizationListViewItem_o *v41; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v45; // x2
  char v46; // w23
  const MethodInfo *v47; // x3
  int v48; // w23
  BalanceConfig_c *v49; // x0
  int32_t v50; // w22
  RestrictionNotSatisfyWholeInfo_o *v51; // x24
  struct System_Int32_array *targetVals; // x8
  int32_t v53; // w22
  int32_t v54; // w22
  RestrictionNotSatisfyWholeInfo_o *v55; // x23
  struct System_Int32_array *v56; // x8
  int32_t v57; // w22
  const MethodInfo *v58; // x3
  ServantEntity_o *v59; // x22
  int32_t v60; // w23
  System_Int32_array *v61; // x0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x3
  __int64 v64; // x0

  v8 = this;
  if ( (byte_418BB6A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, restrictionEntity);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v10);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418BB6A = 1;
  }
  if ( restrictionEntity )
  {
    this = (RestrictionNotSatisfyWholeInfo_o *)(&dword_0 + 1);
    switch ( restrictionEntity->fields.type )
    {
      case 1:
        v39 = 0;
        v40 = 1;
LABEL_88:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v39 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v39, 0LL);
          if ( !this )
            break;
          v41 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            goto LABEL_87;
          servantEntity = v41->fields.servantEntity;
          svtLimitCount = v41->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v41, 0LL);
          if ( !servantEntity )
            break;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
          v40 = 0;
          v46 = 0;
          wholeInfoPrefixLabel_low = 0;
          if ( !RestrictionEntity__IsRestriction_32861000(restrictionEntity, Individuality, v45) )
          {
LABEL_87:
            ++v39;
            goto LABEL_88;
          }
        }
        else
        {
          wholeInfoPrefixLabel_low = 1;
          v46 = v40;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v46 & 1,
              (System_String_o *)this,
              v47);
            if ( (v46 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 6:
        v53 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v53 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v53, 0LL);
            if ( this )
            {
              ++v53;
              if ( BYTE2(this[4].monitor) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 7:
        v48 = 0;
        v33 = 1;
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
            goto LABEL_109;
          ++v48;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                       v50 + 1,
                                                       (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_163;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v50, 0LL);
            if ( !this )
              goto LABEL_163;
            v51 = this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              targetVals = restrictionEntity->fields.targetVals;
              if ( !targetVals )
                goto LABEL_163;
              wholeInfoPrefixLabel_low = LOBYTE(v51[2].fields.wholeInfoPrefixLabel);
              if ( targetVals->max_length != 1 )
              {
                v33 = 0;
                v48 = v50 + 1;
                if ( wholeInfoPrefixLabel_low )
                  goto LABEL_109;
                continue;
              }
              v33 = 0;
              goto LABEL_151;
            }
          }
        }
      case 8:
        v32 = 0;
        v33 = 1;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v32 >= this[3].fields.wholeInfoLabel->fields.mWidth )
          goto LABEL_150;
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
        if ( !this )
          break;
        v34 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_75;
        if ( v34->fields.isFollower )
        {
          v33 = 0;
LABEL_150:
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          v35 = v34->fields.servantEntity;
          v36 = v34->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v34, 0LL);
          if ( !v35 )
            break;
          v37 = ServantEntity__getIndividuality(v35, v36, (int32_t)this, 0LL);
          v33 = 0;
          if ( !RestrictionEntity__IsSearchVals_32860656(restrictionEntity, v37, v38) )
          {
LABEL_75:
            ++v32;
            goto LABEL_76;
          }
LABEL_109:
          wholeInfoPrefixLabel_low = 1;
        }
LABEL_151:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v33 & 1,
              (System_String_o *)this,
              v58);
            if ( (v33 & 1) != 0 )
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
        v27 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
        {
          v28 = 0;
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          if ( v27->fields.isFollower )
          {
            wholeInfoPrefixLabel_low = 0;
          }
          else
          {
            v59 = v27->fields.servantEntity;
            v60 = v27->fields.svtLimitCount;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0LL);
            if ( !v59 )
              break;
            v61 = ServantEntity__getIndividuality(v59, v60, (int32_t)this, 0LL);
            wholeInfoPrefixLabel_low = RestrictionEntity__IsSearchVals_32860656(restrictionEntity, v61, v62);
          }
          v28 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44312768(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v8 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
          v8,
          (wholeInfoPrefixLabel_low == 0) | v28 ^ 1,
          (System_String_o *)this,
          v63);
        if ( (v28 & 1) == 0 )
        {
LABEL_161:
          LOBYTE(this) = 1;
          return (char)this;
        }
LABEL_146:
        LOBYTE(this) = wholeInfoPrefixLabel_low == 0;
        return (char)this;
      case 0xA:
        v30 = 0;
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
          if ( v30 < this[3].fields.wholeInfoLabel->fields.mPivot )
          {
            if ( partyItem )
            {
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v30, 0LL);
              if ( this )
              {
                v31 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
                ++v30;
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
          v56 = restrictionEntity->fields.targetVals;
          if ( !v56 )
            break;
          if ( !v56->max_length )
          {
LABEL_164:
            v64 = sub_B2C460(this);
            sub_B2C400(v64, 0LL);
          }
          wholeInfoPrefixLabel_low = v31 == v56->m_Items[1];
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
          v16 = System_String__Replace_44312768(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v18 = wholeInfoPrefixLabel_low == 0;
LABEL_145:
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v18, v16, v17);
          goto LABEL_146;
        }
        break;
      case 0xB:
        v54 = 0;
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
          if ( v54 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_129;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v54, 0LL);
            if ( this )
            {
              v55 = this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
                v31 += LOBYTE(v55[2].fields.wholeInfoPrefixLabel) ^ 1;
              ++v54;
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
        v14 = (char)this;
        wholeInfoPrefixLabel_low = ((unsigned __int8)this & 1) == 0;
        v16 = System_String__Replace_44312768(
                name,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v18 = v14 & 1;
        goto LABEL_145;
      case 0xD:
        v57 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v57 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v57, 0LL);
            if ( this )
            {
              ++v57;
              if ( BYTE5(this[6].fields.notSatisfySprite) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xE:
        v19 = 0;
LABEL_17:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v19 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v19, 0LL);
          if ( !this )
            break;
          if ( !BYTE5(this[4].monitor) || !BYTE3(this[4].fields.wholeInfoPrefixLabel) )
          {
            ++v19;
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
            v21 = (PartyOrganizationListViewItem_o *)this;
            if ( BYTE5(this[4].monitor)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v22 = v21->fields.servantEntity;
              v23 = v21->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v21, 0LL);
              if ( !v22 )
                goto LABEL_163;
              v24 = ServantEntity__getIndividuality(v22, v23, (int32_t)this, 0LL);
              if ( RestrictionEntity__IsSearchVals_32860656(restrictionEntity, v24, v25) )
                goto LABEL_142;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_141:
        wholeInfoPrefixLabel_low = 0;
        goto LABEL_143;
      case 0xF:
        v29 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v29 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
            if ( this )
            {
              ++v29;
              if ( BYTE3(this[4].monitor) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0x11:
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
              if ( BYTE6(this[6].fields.notSatisfySprite) )
                goto LABEL_141;
              ++v26;
              if ( SLODWORD(this[6].fields.wholeInfoPrefixLabel) > 0 )
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
  sub_B2C434(this, restrictionEntity);
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

  if ( (byte_418BB6B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23841/*"・"*/, isWarning);
    byte_418BB6B = 1;
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
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_23841/*"・"*/, 0LL);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B2C434(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0LL);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_23841/*"・"*/,
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