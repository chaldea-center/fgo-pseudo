void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C492 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_438C492 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    367,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


System_String_o *__fastcall ServantAppendPassiveSkillMaster__CreateTempKey(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = svtId;
  v7 = num;
  if ( (byte_438C493 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C493 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44904220(v4, (System_String_o *)StringLiteral_1252/*":"*/, v5, 0LL);
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UserServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 MaxLevelInfo; // x0
  __int64 v16; // x1
  UserServantAppendPassiveSkillLvMaster_o *v17; // x27
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x25
  System_Int32_array *v20; // x24
  System_Collections_Generic_Dictionary_int__int__o *v21; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v24; // x26
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Boolean_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x8
  unsigned __int64 v61; // x19
  __int64 v62; // x20
  ServantAppendPassiveSkillEntity_o *v63; // x27
  System_Int32_array *v64; // x8
  int v65; // w28
  const MethodInfo *v66; // x4
  System_Boolean_array *v67; // x8
  System_Int32_array *v68; // x8
  System_String_array *v69; // x8
  System_String_array *v70; // x9
  System_String_o **v71; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v73; // x0
  int32_t v74; // w3
  System_Boolean_array *v75; // x8
  System_String_array *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x28
  System_String_array *v84; // x8
  System_String_array *v85; // x8
  BattleServantConfConponent_o *v86; // x28
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array *v94; // x22
  System_String_o *v95; // x28
  System_String_o *v96; // x0
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array *v104; // x8
  System_String_array *v105; // x8
  __int64 v106; // x0
  __int64 v107; // x0
  System_String_o *explanation; // [xsp+28h] [xbp-68h] BYREF
  UserServantEntity_o *v113; // [xsp+30h] [xbp-60h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438C497 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_3431/*"COND_TYPE_TITLE"*/);
    sub_B775C4(&StringLiteral_3419/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C497 = 1;
  }
  v113 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v17 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
  MaxLevelInfo = UserServantAppendPassiveSkillMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   userId,
                   svtId,
                   0LL);
  v19 = 0LL;
  v20 = 0LL;
  if ( (MaxLevelInfo & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_69;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (__int64)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v17, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_69;
      v21 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_2FE8980 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v20 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v21,
                 (const MethodInfo_2FE8B18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      v19 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v17,
                       &v113,
                       userSvtId,
                       (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v113 )
          goto LABEL_69;
        v20 = *(System_Int32_array **)&v113->fields.svtId.fields.currentCryptoKey;
        v19 = *(System_Int32_array **)&v113->fields.svtId.fields.fakeValue;
      }
      else
      {
        v19 = 0LL;
        v20 = 0LL;
      }
    }
  }
  MaxLevelInfo = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v18);
  if ( !MaxLevelInfo )
LABEL_69:
    sub_B7769C(MaxLevelInfo, v16);
  v24 = MaxLevelInfo;
  v25 = (System_Int32_array *)sub_B775DC(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v25;
  sub_B77560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_String_array *)sub_B775DC(string___TypeInfo, *(unsigned int *)(v24 + 24));
  *titleList = v32;
  sub_B77560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_String_array *)sub_B775DC(string___TypeInfo, *(unsigned int *)(v24 + 24));
  *explanationList = v39;
  sub_B77560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Boolean_array *)sub_B775DC(bool___TypeInfo, *(unsigned int *)(v24 + 24));
  *releaseStateList = v46;
  sub_B77560((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Int32_array *)sub_B775DC(int___TypeInfo, *(unsigned int *)(v24 + 24));
  *lvList = v53;
  sub_B77560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  v60 = *(_QWORD *)(v24 + 24);
  if ( (int)v60 >= 1 )
  {
    v61 = 0LL;
    v62 = 32LL;
    while ( v61 < (unsigned int)v60 )
    {
      v63 = *(ServantAppendPassiveSkillEntity_o **)(v24 + v62);
      if ( v63 )
      {
        v64 = *idList;
        if ( !*idList )
          goto LABEL_69;
        if ( v61 >= v64->max_length )
          break;
        v64->m_Items[v61 + 1] = v63->fields.skillId;
        if ( !v20
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               v20,
                               v63->fields.num,
                               (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v65 = 1;
        }
        else
        {
          if ( !v19 )
            goto LABEL_69;
          if ( (unsigned int)MaxLevelInfo >= v19->max_length )
            break;
          v65 = v19->m_Items[(int)MaxLevelInfo + 1];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v63->fields.num,
                               (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v75 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v61 >= v75->max_length )
            break;
          v75->m_Items[v61 + 4] = 0;
          v76 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          MaxLevelInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v76 )
            goto LABEL_69;
          v83 = (System_Int32_array **)MaxLevelInfo;
          if ( MaxLevelInfo )
          {
            MaxLevelInfo = sub_B77684(MaxLevelInfo, v76->obj.klass->_1.element_class);
            if ( !MaxLevelInfo )
            {
              v107 = sub_B776BC(0LL);
              sub_B77668(v107, 0LL);
            }
          }
          if ( v61 >= v76->max_length )
            break;
          *(Il2CppClass **)((char *)&v76->obj.klass + v62) = (Il2CppClass *)v83;
          sub_B77560((BattleServantConfConponent_o *)((char *)v76 + v62), v83, v77, v78, v79, v80, v81, v82);
          v84 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v61 >= v84->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v84->obj.klass + v62),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v85 = *explanationList;
            if ( !*explanationList )
              goto LABEL_69;
            if ( v61 >= v85->max_length )
              break;
            v86 = (BattleServantConfConponent_o *)((char *)v85 + v62);
            v87 = (System_Int32_array **)System_String__Concat_44901936(
                                           *(System_String_o **)((char *)&v85->obj.klass + v62),
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           0LL);
            v86->klass = (BattleServantConfConponent_c *)v87;
            sub_B77560(v86, v87, v88, v89, v90, v91, v92, v93);
          }
          v94 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v61 >= v94->max_length )
            break;
          v95 = *(System_String_o **)((char *)&v94->obj.klass + v62);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3419/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v97 = (System_Int32_array **)System_String__Concat_44901936(v95, v96, 0LL);
          *(Il2CppClass **)((char *)&v94->obj.klass + v62) = (Il2CppClass *)v97;
          sub_B77560((BattleServantConfConponent_o *)((char *)v94 + v62), v97, v98, v99, v100, v101, v102, v103);
          v104 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v61 >= v104->max_length )
            break;
          v104->m_Items[v61 + 1] = 0;
          v105 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          if ( v61 >= v105->max_length )
            break;
          v71 = (System_String_o **)((char *)v105 + v62);
          p_explanation = &explanation;
          v73 = v63;
          v74 = 0;
        }
        else
        {
          v67 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v61 >= v67->max_length )
            break;
          v67->m_Items[v61 + 4] = 1;
          v68 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v61 >= v68->max_length )
            break;
          v68->m_Items[v61 + 1] = v65;
          v69 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          v70 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v61 >= v69->max_length || v61 >= v70->max_length )
            break;
          v71 = (System_String_o **)((char *)v69 + v62);
          p_explanation = (System_String_o **)((char *)v70 + v62);
          v73 = v63;
          v74 = v65;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v73, v71, p_explanation, v74, v66);
      }
      LODWORD(v60) = *(_DWORD *)(v24 + 24);
      ++v61;
      v62 += 8LL;
      if ( (__int64)v61 >= (int)v60 )
        return;
    }
    v106 = sub_B776C8(MaxLevelInfo);
    sub_B77668(v106, 0LL);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_27412376(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        const MethodInfo *method)
{
  const MethodInfo *v16; // x2
  __int64 EntityListFromSvtId; // x0
  __int64 v18; // x1
  __int64 v19; // x25
  System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Boolean_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x4
  __int64 v56; // x8
  unsigned __int64 v57; // x28
  __int64 v58; // x21
  ServantAppendPassiveSkillEntity_o *v59; // x26
  System_Int32_array *v60; // x8
  int32_t v61; // w27
  System_String_array *v62; // x8
  System_String_array *v63; // x9
  System_Boolean_array *v64; // x8
  System_Int32_array *v65; // x8
  System_Boolean_array *v66; // x8
  System_String_array *v67; // x27
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x26
  System_String_array *v75; // x8
  System_String_array *v76; // x8
  BattleServantConfConponent_o *v77; // x26
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array *v85; // x27
  System_String_o *v86; // x26
  System_String_o *v87; // x0
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0
  __int64 v96; // x0

  if ( (byte_438C499 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_3431/*"COND_TYPE_TITLE"*/);
    sub_B775C4(&StringLiteral_3419/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C499 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v16);
  if ( !EntityListFromSvtId )
LABEL_57:
    sub_B7769C(EntityListFromSvtId, v18);
  v19 = EntityListFromSvtId;
  v20 = (System_Int32_array *)sub_B775DC(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v20;
  sub_B77560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_String_array *)sub_B775DC(string___TypeInfo, *(unsigned int *)(v19 + 24));
  *titleList = v27;
  sub_B77560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_String_array *)sub_B775DC(string___TypeInfo, *(unsigned int *)(v19 + 24));
  *explanationList = v34;
  sub_B77560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Boolean_array *)sub_B775DC(bool___TypeInfo, *(unsigned int *)(v19 + 24));
  *releaseStateList = v41;
  sub_B77560((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Int32_array *)sub_B775DC(int___TypeInfo, *(unsigned int *)(v19 + 24));
  *lvList = v48;
  sub_B77560((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  v56 = *(_QWORD *)(v19 + 24);
  if ( (int)v56 >= 1 )
  {
    v57 = 0LL;
    v58 = 32LL;
    while ( v57 < (unsigned int)v56 )
    {
      v59 = *(ServantAppendPassiveSkillEntity_o **)(v19 + v58);
      if ( v59 )
      {
        v60 = *idList;
        if ( !*idList )
          goto LABEL_57;
        if ( v57 >= v60->max_length )
          break;
        v60->m_Items[v57 + 1] = v59->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v59->fields.skillId,
                                      (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v61 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_57;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v61 = releaseSkillLvs->m_Items[(int)EntityListFromSvtId + 1];
        }
        v62 = *titleList;
        if ( !*titleList )
          goto LABEL_57;
        v63 = *explanationList;
        if ( !*explanationList )
          goto LABEL_57;
        if ( v57 >= v62->max_length || v57 >= v63->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v59,
          (System_String_o **)((char *)v62 + v58),
          (System_String_o **)((char *)v63 + v58),
          v61,
          v55);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v59->fields.skillId,
                                      (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v66 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v57 >= v66->max_length )
            break;
          v66->m_Items[v57 + 4] = 0;
          v67 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v67 )
            goto LABEL_57;
          v74 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B77684(EntityListFromSvtId, v67->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
              v96 = sub_B776BC(0LL);
              sub_B77668(v96, 0LL);
            }
          }
          if ( v57 >= v67->max_length )
            break;
          *(Il2CppClass **)((char *)&v67->obj.klass + v58) = (Il2CppClass *)v74;
          sub_B77560((BattleServantConfConponent_o *)((char *)v67 + v58), v74, v68, v69, v70, v71, v72, v73);
          v75 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v57 >= v75->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v75->obj.klass + v58),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v76 = *explanationList;
            if ( !*explanationList )
              goto LABEL_57;
            if ( v57 >= v76->max_length )
              break;
            v77 = (BattleServantConfConponent_o *)((char *)v76 + v58);
            v78 = (System_Int32_array **)System_String__Concat_44901936(
                                           *(System_String_o **)((char *)&v76->obj.klass + v58),
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           0LL);
            v77->klass = (BattleServantConfConponent_c *)v78;
            sub_B77560(v77, v78, v79, v80, v81, v82, v83, v84);
          }
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v57 >= v85->max_length )
            break;
          v86 = *(System_String_o **)((char *)&v85->obj.klass + v58);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3419/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v88 = (System_Int32_array **)System_String__Concat_44901936(v86, v87, 0LL);
          *(Il2CppClass **)((char *)&v85->obj.klass + v58) = (Il2CppClass *)v88;
          sub_B77560((BattleServantConfConponent_o *)((char *)v85 + v58), v88, v89, v90, v91, v92, v93, v94);
          v65 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v57 >= v65->max_length )
            break;
          v61 = 0;
        }
        else
        {
          v64 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v57 >= v64->max_length )
            break;
          v64->m_Items[v57 + 4] = 1;
          v65 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v57 >= v65->max_length )
            break;
        }
        v65->m_Items[v57 + 1] = v61;
      }
      LODWORD(v56) = *(_DWORD *)(v19 + 24);
      ++v57;
      v58 += 8LL;
      if ( (__int64)v57 >= (int)v56 )
        return;
    }
    v95 = sub_B776C8(EntityListFromSvtId);
    sub_B77668(v95, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C490 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_438C490 = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantAppendPassiveSkillMaster_o *v6; // x20
  System_String_o *TempKey; // x0
  __int64 v8; // x1
  __int64 v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_438C496 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_438C496 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_10;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                 (System_Xml_XmlQualifiedName_o *)TempKey,
                                 &value,
                                 (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_10:
    sub_B7769C(TempKey, v8);
  if ( !LODWORD(value->fields.sourceUri) )
  {
    v10 = sub_B776C8(TempKey);
    sub_B77668(v10, 0LL);
  }
  return (ServantAppendPassiveSkillEntity_o *)value->fields.namespaces;
}


ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  __int64 v7; // x1
  void *list; // x0
  int32_t v9; // w23
  _DWORD *v10; // x24
  __int64 v11; // x10
  const MethodInfo *v12; // x3

  if ( (byte_438C495 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_B775C4(&ServantAppendPassiveSkillEntity_TypeInfo);
    byte_438C495 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  v9 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v9,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = list;
      v11 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          goto LABEL_19;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *((_DWORD *)list + 5),
               (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v10[4], v10[5], v12);
          if ( !v6 )
            goto LABEL_19;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v6 )
LABEL_19:
    sub_B7769C(list, v7);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  int32_t v10; // w25
  _DWORD *v11; // x26
  __int64 v12; // x10
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // [xsp+8h] [xbp-58h]

  if ( (byte_438C498 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_B775C4(&SvtUseSkillData_TypeInfo);
    byte_438C498 = 1;
  }
  v27 = sub_B77694(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v27, 0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = list;
        v12 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v12
          && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == svtId )
        {
          if ( !v8 )
            break;
          System_Collections_Generic_List_int___Add(
            v8,
            *((_DWORD *)list + 7),
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v9 )
            break;
          System_Collections_Generic_List_int___Add(
            v9,
            v11[5],
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v10 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B7769C(list, v5);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_19;
  list = System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v27 )
    goto LABEL_19;
  *(_QWORD *)(v27 + 16) = list;
  sub_B77560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)list, v13, v14, v15, v16, v17, v18);
  if ( !v9 )
    goto LABEL_19;
  v19 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v9,
                                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v27 + 32) = v19;
  sub_B77560((BattleServantConfConponent_o *)(v27 + 32), v19, v20, v21, v22, v23, v24, v25);
  return (SvtUseSkillData_o *)v27;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAppendPassiveSkillMaster__TryGetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        ServantAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C491 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_438C491 = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x22
  __int64 v19; // x9
  System_String_o *TempKey; // x0
  __int64 v21; // x1
  System_Xml_XmlQualifiedName_o *v22; // x23
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x24
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  ServantAppendPassiveSkillMaster___c_c *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v36; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *v44; // x23
  System_Xml_Schema_XmlSchemaObject_o *v45; // x0
  __int64 v46; // x1
  int v47; // w21
  ServantAppendPassiveSkillMaster_o *v49; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v50; // [xsp+18h] [xbp-B8h] BYREF
  int v51[2]; // [xsp+40h] [xbp-90h]
  int v52; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v53; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_438C494 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
    sub_B775C4(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_B775C4(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_B775C4(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_B775C4(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_438C494 = 1;
  }
  value = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v49 = this;
  if ( !Enumerator )
    sub_B7769C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
    if ( !v15 )
      sub_B7769C(0LL, v16);
    v19 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v19
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v19 - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      v31 = (ServantAppendPassiveSkillMaster___c_c *)sub_B77990(v15);
LABEL_52:
      sub_B7769C(v31, v30);
    }
    TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(
                (ServantAppendPassiveSkillMaster_o *)v15,
                *(_DWORD *)(v15 + 16),
                *(_DWORD *)(v15 + 20),
                v17);
    if ( !v4 )
      sub_B7769C(TempKey, v21);
    v22 = (System_Xml_XmlQualifiedName_o *)TempKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v4,
            (System_Xml_XmlQualifiedName_o *)TempKey,
            &value,
            (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v24,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      this = v49;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v4,
        v22,
        v25,
        (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B7769C(0LL, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v18,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
  }
  v51[0] = 117;
  v52 = 1;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v29 + 8));
  v52 = 0;
  if ( !v4 )
LABEL_57:
    sub_B7769C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v4,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v53 = v50;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v53,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v31 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v53.fields.current.fields.key;
    v32 = v53.fields.current.fields.value;
    if ( (BYTE3(ServantAppendPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v31 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v36,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
      v37 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v37->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v37->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = v49;
    }
    if ( !v32 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v44 = this->fields.listCache;
    v45 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                                   (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v44 )
      sub_B7769C(v45, v46);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
      (System_Xml_XmlQualifiedName_o *)key,
      v45,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v32,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
  }
  v51[0] = 240;
  v47 = ++v52;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v53,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  if ( v47 && v51[v47 - 1] == 240 )
    v52 = v47 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v4,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_43887F0 & 1) == 0 )
  {
    sub_B775C4(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_43887F0 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ServantAppendPassiveSkillMaster___c___ctor(
        ServantAppendPassiveSkillMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantAppendPassiveSkillMaster___c___preProcess_b__5_0(
        ServantAppendPassiveSkillMaster___c_o *this,
        ServantAppendPassiveSkillEntity_o *a,
        ServantAppendPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}