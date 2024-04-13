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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x0

  if ( (byte_42EAF19 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)message, isAddFixMessage, method);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15933/*"[FFFF00]"*/, v12, v13, v14);
    byte_42EAF19 = 1;
  }
  if ( !isAddFixMessage )
    return System_String__Concat_44580072(
             (System_String_o *)StringLiteral_15933/*"[FFFF00]"*/,
             message,
             (System_String_o *)StringLiteral_15834/*"[-]"*/,
             0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  return System_String__Concat_44581200(
           (System_String_o *)StringLiteral_15933/*"[FFFF00]"*/,
           message,
           v15,
           (System_String_o *)StringLiteral_15834/*"[-]"*/,
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w23
  char v18; // w25
  BalanceConfig_c *v19; // x0
  int32_t v20; // w22
  PartyOrganizationListViewItem_o *v21; // x24
  struct System_Int32_array *targetVals2; // x8
  ServantEntity_o *v23; // x25
  int32_t v24; // w26
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2
  char v27; // w22
  int v28; // w24
  int32_t v29; // w22
  char v30; // w24
  PartyOrganizationListViewItem_o *v31; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v35; // x2
  char v36; // w23
  int v37; // w25
  const MethodInfo *v38; // x3
  bool v39; // zf
  int32_t v40; // w22
  System_String_o *v41; // x0
  const MethodInfo *v42; // x3
  bool v43; // w21
  int v44; // w23
  BalanceConfig_c *v45; // x0
  int32_t v46; // w22
  PartyOrganizationListViewItem_o *v47; // x24
  ServantEntity_o *v48; // x25
  int32_t v49; // w26
  System_Int32_array *v50; // x0
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x3
  int v53; // w22
  char v54; // w25
  BalanceConfig_c *v55; // x0
  int32_t v56; // w23
  PartyOrganizationListViewItem_o *v57; // x24
  ServantEntity_o *v58; // x25
  int32_t v59; // w26
  System_Int32_array *v60; // x0
  const MethodInfo *v61; // x2
  int v62; // w24
  int32_t v63; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v65; // x23
  ServantEntity_o *v66; // x24
  int32_t v67; // w25
  System_Int32_array *v68; // x0
  const MethodInfo *v69; // x2
  int32_t v70; // w22
  int v71; // w21
  System_String_o *v72; // x2
  const MethodInfo *v73; // x3
  bool v74; // w1
  int32_t v75; // w22
  const MethodInfo *v76; // x3

  v7 = this;
  if ( (byte_42EAF13 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)restrictionWholeEntity, (_DWORD)partyItem, questRestrictionInfo);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v11, v12, v13);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EAF13 = 1;
  }
  if ( restrictionWholeEntity )
  {
    switch ( restrictionWholeEntity->fields.type )
    {
      case 1:
        v29 = 0;
        v30 = 1;
LABEL_27:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v29 >= this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          v37 = 1;
          v36 = v30;
          goto LABEL_32;
        }
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v29, 0LL);
        if ( !this )
          break;
        v31 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_26;
        servantEntity = v31->fields.servantEntity;
        svtLimitCount = v31->fields.svtLimitCount;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v31, 0LL);
        if ( !servantEntity )
          break;
        Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
        v30 = 0;
        v36 = 0;
        v37 = 0;
        if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, Individuality, v35) )
        {
LABEL_26:
          ++v29;
          goto LABEL_27;
        }
LABEL_32:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v37 == 0) | v36 & 1, (System_String_o *)this, v38);
        v39 = v37 == 0;
LABEL_124:
        v43 = !v39;
        if ( (v36 & 1) != 0 )
          return 1;
        return !v43;
      case 2:
        v40 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v40 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_107;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v40, 0LL);
            if ( this )
            {
              ++v40;
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
        v41 = System_String__Replace_44585024(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, 0, v41, v42);
        v43 = 1;
        return !v43;
      case 4:
        v44 = 0;
        v18 = 1;
        while ( 1 )
        {
          v45 = BalanceConfig_TypeInfo;
          v46 = v44;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v45 = BalanceConfig_TypeInfo;
          }
          if ( v44 >= v45->static_fields->DeckMemberMax )
            goto LABEL_58;
          ++v44;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v46 + 1,
                                                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v46, 0LL);
            if ( !this )
              goto LABEL_136;
            v47 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v48 = v47->fields.servantEntity;
              v49 = v47->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v47, 0LL);
              if ( !v48 )
                goto LABEL_136;
              v44 = v46 + 1;
              v50 = ServantEntity__getIndividuality(v48, v49, (int32_t)this, 0LL);
              v18 = 0;
              v27 = 0;
              v28 = 0;
              if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v50, v51) )
                goto LABEL_59;
            }
          }
        }
      case 5:
        v53 = 0;
        v54 = 1;
        while ( 1 )
        {
LABEL_64:
          v55 = BalanceConfig_TypeInfo;
          v56 = v53;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v55 = BalanceConfig_TypeInfo;
          }
          if ( v53 >= v55->static_fields->DeckMemberMax )
          {
            v62 = 1;
            v36 = v54;
            goto LABEL_121;
          }
          ++v53;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v56 + 1,
                                                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v56, 0LL);
            if ( !this )
              goto LABEL_136;
            v57 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
              break;
          }
        }
        if ( !v57->fields.isFollower )
        {
          v58 = v57->fields.servantEntity;
          v59 = v57->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v57, 0LL);
          if ( !v58 )
            break;
          v53 = v56 + 1;
          v60 = ServantEntity__getIndividuality(v58, v59, (int32_t)this, 0LL);
          v54 = 0;
          v36 = 0;
          v62 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v60, v61) )
            goto LABEL_121;
          goto LABEL_64;
        }
        v36 = 0;
        v62 = 0;
LABEL_121:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v62 == 0) | v36 & 1, (System_String_o *)this, v76);
        v39 = v62 == 0;
        goto LABEL_124;
      case 6:
      case 7:
        v17 = 0;
        v18 = 1;
        while ( 1 )
        {
LABEL_6:
          v19 = BalanceConfig_TypeInfo;
          v20 = v17;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          if ( v17 >= v19->static_fields->DeckMemberMax )
          {
LABEL_58:
            v28 = 1;
            v27 = v18;
            goto LABEL_59;
          }
          ++v17;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntity->fields.targetVals2,
                                                       v20 + 1,
                                                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_136;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v20, 0LL);
            if ( !this )
              goto LABEL_136;
            v21 = (PartyOrganizationListViewItem_o *)this;
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
        if ( targetVals2->max_length != 1 || v21->fields.isFollower )
        {
          v23 = v21->fields.servantEntity;
          v24 = v21->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v21, 0LL);
          if ( !v23 )
            break;
          v17 = v20 + 1;
          v25 = ServantEntity__getIndividuality(v23, v24, (int32_t)this, 0LL);
          v18 = 0;
          v27 = 0;
          v28 = 0;
          if ( !RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v25, v26) )
            goto LABEL_59;
          goto LABEL_6;
        }
        v27 = 0;
        v28 = 0;
LABEL_59:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v7 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, (v28 == 0) | v27 & 1, (System_String_o *)this, v52);
        v43 = v28 != 0;
        if ( (v27 & 1) == 0 )
          return !v43;
        return 1;
      case 8:
        v63 = 0;
LABEL_82:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v63 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v63, 0LL);
          if ( !this )
            break;
          if ( !*((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5) || !BYTE3(this[4].fields.wholeInfoLabel) )
          {
            ++v63;
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
            v65 = (PartyOrganizationListViewItem_o *)this;
            if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v66 = v65->fields.servantEntity;
              v67 = v65->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v65, 0LL);
              if ( !v66 )
                goto LABEL_136;
              v68 = ServantEntity__getIndividuality(v66, v67, (int32_t)this, 0LL);
              if ( RestrictionWholeEntity__IsIndividuality(restrictionWholeEntity, v68, v69) )
                goto LABEL_107;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_106:
        v71 = 0;
        goto LABEL_108;
      case 9:
        v70 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v70 >= this[3].fields.wholeInfoLabel->fields.mPivot )
          {
LABEL_107:
            v71 = 1;
LABEL_108:
            this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
            if ( this )
            {
              v72 = System_String__Replace_44585024(
                      (System_String_o *)this,
                      (System_String_o *)StringLiteral_26/*"\n"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
              v74 = v71 == 0;
              v43 = v71 != 0;
LABEL_132:
              RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v7, v74, v72, v73);
              return !v43;
            }
          }
          else if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v70, 0LL);
            if ( this )
            {
              ++v70;
              if ( HIBYTE(this[4].fields.m_CachedPtr) )
                goto LABEL_106;
              continue;
            }
          }
          break;
        }
        break;
      case 0xA:
        v75 = 0;
        while ( 1 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v75 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            break;
          if ( !partyItem )
            goto LABEL_136;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v75, 0LL);
          if ( !this )
            goto LABEL_136;
          if ( !BYTE6(this[6].fields.wholeInfoPrefixLabel) )
          {
            ++v75;
            if ( SLODWORD(this[6].fields.wholeInfoLabel) <= 0 )
              continue;
          }
          v43 = 0;
          goto LABEL_130;
        }
        v43 = 1;
LABEL_130:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionWholeEntity->fields.summary;
        if ( !this )
          break;
        v72 = System_String__Replace_44585024(
                (System_String_o *)this,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v74 = !v43;
        goto LABEL_132;
      default:
        return 1;
    }
  }
LABEL_136:
  sub_B5D69C(this, restrictionWholeEntity);
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitFatigue(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w21
  System_String_o *Member; // x0
  int v20; // w20
  System_String_o *v21; // x0
  bool v22; // w20
  const MethodInfo *v23; // x3

  if ( (byte_42EAF15 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAF15 = 1;
  }
  v18 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v18 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v18, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v18;
    if ( ((unsigned __int64)Member[10].klass & 0x8000000000000000LL) == 0 )
    {
      v20 = 0;
      goto LABEL_13;
    }
  }
  v20 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B5D69C(Member, partyItem);
  v21 = System_String__Replace_44585024(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v22 = v20 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v22, v21, v23);
  return v22;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitNotSingleSupportOnly(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w21
  System_String_o *Member; // x0
  int v20; // w20
  System_String_o *v21; // x0
  bool v22; // w20
  const MethodInfo *v23; // x3

  if ( (byte_42EAF16 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAF16 = 1;
  }
  v18 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v18 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v18, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v18;
    if ( LOBYTE(Member[14].monitor) )
    {
      v20 = 0;
      goto LABEL_13;
    }
  }
  v20 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_10473/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B5D69C(Member, partyItem);
  v21 = System_String__Replace_44585024(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v22 = v20 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v22, v21, v23);
  return v22;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__InitUniqueServant(
        RestrictionNotSatisfyWholeInfo_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w21
  System_String_o *Member; // x0
  int v20; // w20
  System_String_o *v21; // x0
  bool v22; // w20
  const MethodInfo *v23; // x3

  if ( (byte_42EAF14 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11232/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAF14 = 1;
  }
  v18 = 0;
  while ( 1 )
  {
    Member = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v18 >= *(_DWORD *)(*(_QWORD *)&Member[7].fields + 156LL) )
      break;
    if ( !partyItem )
      goto LABEL_18;
    Member = (System_String_o *)PartyListViewItem__GetMember(partyItem, v18, 0LL);
    if ( !Member )
      goto LABEL_18;
    ++v18;
    if ( BYTE2(Member[8].fields.m_stringLength) )
    {
      v20 = 0;
      goto LABEL_13;
    }
  }
  v20 = 1;
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Member = LocalizationManager__Get((System_String_o *)StringLiteral_11232/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
  if ( !Member )
LABEL_18:
    sub_B5D69C(Member, partyItem);
  v21 = System_String__Replace_44585024(
          Member,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v22 = v20 == 0;
  RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(this, v22, v21, v23);
  return v22;
}


bool __fastcall RestrictionNotSatisfyWholeInfo__Init_29517540(
        RestrictionNotSatisfyWholeInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
        PartyListViewItem_o *partyItem,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfyWholeInfo_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Int32_array *targetVals2; // x8
  System_String_o *name; // x8
  char v20; // w20
  int wholeInfoPrefixLabel_low; // w24
  System_String_o *v22; // x2
  const MethodInfo *v23; // x3
  bool v24; // w1
  int32_t v25; // w22
  int32_t i; // w22
  PartyOrganizationListViewItem_o *v27; // x23
  ServantEntity_o *v28; // x24
  int32_t v29; // w25
  System_Int32_array *v30; // x0
  const MethodInfo *v31; // x2
  int32_t v32; // w22
  PartyOrganizationListViewItem_o *v33; // x21
  char v34; // w21
  int32_t v35; // w22
  int32_t v36; // w23
  int v37; // w24
  int32_t v38; // w22
  char v39; // w25
  PartyOrganizationListViewItem_o *v40; // x23
  ServantEntity_o *v41; // x24
  int32_t v42; // w25
  System_Int32_array *v43; // x0
  const MethodInfo *v44; // x2
  int32_t v45; // w22
  char v46; // w25
  PartyOrganizationListViewItem_o *v47; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Int32_array *Individuality; // x0
  const MethodInfo *v51; // x2
  char v52; // w23
  const MethodInfo *v53; // x3
  int v54; // w23
  BalanceConfig_c *v55; // x0
  int32_t v56; // w22
  RestrictionNotSatisfyWholeInfo_o *v57; // x24
  struct System_Int32_array *targetVals; // x8
  int32_t v59; // w22
  int32_t v60; // w22
  RestrictionNotSatisfyWholeInfo_o *v61; // x23
  struct System_Int32_array *v62; // x8
  int32_t v63; // w22
  const MethodInfo *v64; // x3
  ServantEntity_o *v65; // x22
  int32_t v66; // w23
  System_Int32_array *v67; // x0
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x3
  __int64 v70; // x0

  v8 = this;
  if ( (byte_42EAF17 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)restrictionEntity, (_DWORD)partyItem, questRestrictionInfo);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v12, v13, v14);
    this = (RestrictionNotSatisfyWholeInfo_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAF17 = 1;
  }
  if ( restrictionEntity )
  {
    this = (RestrictionNotSatisfyWholeInfo_o *)(&dword_0 + 1);
    switch ( restrictionEntity->fields.type )
    {
      case 1:
        v45 = 0;
        v46 = 1;
LABEL_88:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v45 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v45, 0LL);
          if ( !this )
            break;
          v47 = (PartyOrganizationListViewItem_o *)this;
          if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            goto LABEL_87;
          servantEntity = v47->fields.servantEntity;
          svtLimitCount = v47->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v47, 0LL);
          if ( !servantEntity )
            break;
          Individuality = ServantEntity__getIndividuality(servantEntity, svtLimitCount, (int32_t)this, 0LL);
          v46 = 0;
          v52 = 0;
          wholeInfoPrefixLabel_low = 0;
          if ( !RestrictionEntity__IsRestriction_29508216(restrictionEntity, Individuality, v51) )
          {
LABEL_87:
            ++v45;
            goto LABEL_88;
          }
        }
        else
        {
          wholeInfoPrefixLabel_low = 1;
          v52 = v46;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v52 & 1,
              (System_String_o *)this,
              v53);
            if ( (v52 & 1) != 0 )
              goto LABEL_161;
            goto LABEL_146;
          }
        }
        break;
      case 6:
        v59 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v59 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v59, 0LL);
            if ( this )
            {
              ++v59;
              if ( BYTE2(this[4].fields.m_CachedPtr) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 7:
        v54 = 0;
        v39 = 1;
        while ( 1 )
        {
          v55 = BalanceConfig_TypeInfo;
          v56 = v54;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v55 = BalanceConfig_TypeInfo;
          }
          if ( v54 >= v55->static_fields->DeckMemberMax )
            goto LABEL_109;
          ++v54;
          this = (RestrictionNotSatisfyWholeInfo_o *)System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntity->fields.targetVals,
                                                       v56 + 1,
                                                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !partyItem )
              goto LABEL_163;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v56, 0LL);
            if ( !this )
              goto LABEL_163;
            v57 = this;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                                         (PartyOrganizationListViewItem_o *)this,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              targetVals = restrictionEntity->fields.targetVals;
              if ( !targetVals )
                goto LABEL_163;
              wholeInfoPrefixLabel_low = LOBYTE(v57[2].fields.wholeInfoPrefixLabel);
              if ( targetVals->max_length != 1 )
              {
                v39 = 0;
                v54 = v56 + 1;
                if ( wholeInfoPrefixLabel_low )
                  goto LABEL_109;
                continue;
              }
              v39 = 0;
              goto LABEL_151;
            }
          }
        }
      case 8:
        v38 = 0;
        v39 = 1;
LABEL_76:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v38 >= this[3].fields.wholeInfoLabel->fields.mWidth )
          goto LABEL_150;
        if ( !partyItem )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v38, 0LL);
        if ( !this )
          break;
        v40 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
          goto LABEL_75;
        if ( v40->fields.isFollower )
        {
          v39 = 0;
LABEL_150:
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          v41 = v40->fields.servantEntity;
          v42 = v40->fields.svtLimitCount;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v40, 0LL);
          if ( !v41 )
            break;
          v43 = ServantEntity__getIndividuality(v41, v42, (int32_t)this, 0LL);
          v39 = 0;
          if ( !RestrictionEntity__IsSearchVals_29507872(restrictionEntity, v43, v44) )
          {
LABEL_75:
            ++v38;
            goto LABEL_76;
          }
LABEL_109:
          wholeInfoPrefixLabel_low = 1;
        }
LABEL_151:
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( this )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_26/*"\n"*/,
                                                       (System_String_o *)StringLiteral_1/*""*/,
                                                       0LL);
          if ( v8 )
          {
            RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
              v8,
              (wholeInfoPrefixLabel_low == 0) | v39 & 1,
              (System_String_o *)this,
              v64);
            if ( (v39 & 1) != 0 )
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
        v33 = (PartyOrganizationListViewItem_o *)this;
        if ( PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
        {
          v34 = 0;
          wholeInfoPrefixLabel_low = 0;
        }
        else
        {
          if ( v33->fields.isFollower )
          {
            wholeInfoPrefixLabel_low = 0;
          }
          else
          {
            v65 = v33->fields.servantEntity;
            v66 = v33->fields.svtLimitCount;
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v33, 0LL);
            if ( !v65 )
              break;
            v67 = ServantEntity__getIndividuality(v65, v66, (int32_t)this, 0LL);
            wholeInfoPrefixLabel_low = RestrictionEntity__IsSearchVals_29507872(restrictionEntity, v67, v68);
          }
          v34 = 1;
        }
        this = (RestrictionNotSatisfyWholeInfo_o *)restrictionEntity->fields.name;
        if ( !this )
          break;
        this = (RestrictionNotSatisfyWholeInfo_o *)System_String__Replace_44585024(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0LL);
        if ( !v8 )
          break;
        RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(
          v8,
          (wholeInfoPrefixLabel_low == 0) | v34 ^ 1,
          (System_String_o *)this,
          v69);
        if ( (v34 & 1) == 0 )
        {
LABEL_161:
          LOBYTE(this) = 1;
          return (char)this;
        }
LABEL_146:
        LOBYTE(this) = wholeInfoPrefixLabel_low == 0;
        return (char)this;
      case 0xA:
        v36 = 0;
        v37 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v36 < this[3].fields.wholeInfoLabel->fields.mPivot )
          {
            if ( partyItem )
            {
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v36, 0LL);
              if ( this )
              {
                v37 += !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL);
                ++v36;
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
          v62 = restrictionEntity->fields.targetVals;
          if ( !v62 )
            break;
          if ( !v62->max_length )
          {
LABEL_164:
            v70 = sub_B5D6C8(this);
            sub_B5D668(v70, 0LL);
          }
          wholeInfoPrefixLabel_low = v37 == v62->m_Items[1];
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
          v22 = System_String__Replace_44585024(
                  (System_String_o *)this,
                  (System_String_o *)StringLiteral_26/*"\n"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          v24 = wholeInfoPrefixLabel_low == 0;
LABEL_145:
          RestrictionNotSatisfyWholeInfo__SetWholeInfoLabel(v8, v24, v22, v23);
          goto LABEL_146;
        }
        break;
      case 0xB:
        v60 = 0;
        v37 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v60 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_129;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v60, 0LL);
            if ( this )
            {
              v61 = this;
              if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
                v37 += LOBYTE(v61[2].fields.wholeInfoPrefixLabel) ^ 1;
              ++v60;
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
        v20 = (char)this;
        wholeInfoPrefixLabel_low = ((unsigned __int8)this & 1) == 0;
        v22 = System_String__Replace_44585024(
                name,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v24 = v20 & 1;
        goto LABEL_145;
      case 0xD:
        v63 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v63 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v63, 0LL);
            if ( this )
            {
              ++v63;
              if ( BYTE5(this[6].fields.wholeInfoPrefixLabel) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0xE:
        v25 = 0;
LABEL_17:
        this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( v25 < this[3].fields.wholeInfoLabel->fields.mPivot )
        {
          if ( !partyItem )
            break;
          this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v25, 0LL);
          if ( !this )
            break;
          if ( !*((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5) || !BYTE3(this[4].fields.wholeInfoLabel) )
          {
            ++v25;
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
            v27 = (PartyOrganizationListViewItem_o *)this;
            if ( *((_BYTE *)&this[4].fields.BaseMonoBehaviour_Fields + 5)
              && !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)this, 0LL) )
            {
              v28 = v27->fields.servantEntity;
              v29 = v27->fields.svtLimitCount;
              this = (RestrictionNotSatisfyWholeInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0LL);
              if ( !v28 )
                goto LABEL_163;
              v30 = ServantEntity__getIndividuality(v28, v29, (int32_t)this, 0LL);
              if ( RestrictionEntity__IsSearchVals_29507872(restrictionEntity, v30, v31) )
                goto LABEL_142;
            }
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
        }
LABEL_141:
        wholeInfoPrefixLabel_low = 0;
        goto LABEL_143;
      case 0xF:
        v35 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v35 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v35, 0LL);
            if ( this )
            {
              ++v35;
              if ( HIBYTE(this[4].fields.m_CachedPtr) )
                goto LABEL_141;
              continue;
            }
          }
          goto LABEL_163;
        }
      case 0x11:
        v32 = 0;
        while ( 2 )
        {
          this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (RestrictionNotSatisfyWholeInfo_o *)BalanceConfig_TypeInfo;
          }
          if ( v32 >= this[3].fields.wholeInfoLabel->fields.mPivot )
            goto LABEL_142;
          if ( partyItem )
          {
            this = (RestrictionNotSatisfyWholeInfo_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
            if ( this )
            {
              if ( BYTE6(this[6].fields.wholeInfoPrefixLabel) )
                goto LABEL_141;
              ++v32;
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
  sub_B5D69C(this, restrictionEntity);
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

  if ( (byte_42EAF18 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_24158/*"・"*/, isWarning, (_DWORD)message, method);
    byte_42EAF18 = 1;
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
      UILabel__set_text((UILabel_o *)notSatisfySprite, (System_String_o *)StringLiteral_24158/*"・"*/, 0LL);
      notSatisfySprite = (UnityEngine_Component_o *)this->fields.wholeInfoLabel;
      if ( notSatisfySprite )
      {
        v14 = message;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_B5D69C(notSatisfySprite, isWarning);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)notSatisfySprite, 1, 0LL);
  wholeInfoPrefixLabel = this->fields.wholeInfoPrefixLabel;
  notSatisfySprite = (UnityEngine_Component_o *)RestrictionNotSatisfyWholeInfo__AddColorCodeAndFixMessage(
                                                  v9,
                                                  (System_String_o *)StringLiteral_24158/*"・"*/,
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