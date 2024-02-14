void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4215850 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v5);
    byte_4215850 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v6,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    366,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4215851 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1232/*":"*/, *(_QWORD *)&svtId);
    byte_4215851 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43852188(v4, (System_String_o *)StringLiteral_1232/*":"*/, v5, 0LL);
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
  UserServantAppendPassiveSkillMaster_o *Master_WarQuestSelectionMaster; // x24
  __int64 MaxLevelInfo; // x0
  UserServantAppendPassiveSkillLvMaster_o *v31; // x27
  const MethodInfo *v32; // x2
  System_Int32_array *v33; // x25
  System_Int32_array *v34; // x24
  System_Collections_Generic_Dictionary_int__int__o *v35; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v38; // x26
  System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Boolean_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x8
  unsigned __int64 v75; // x19
  __int64 v76; // x20
  ServantAppendPassiveSkillEntity_o *v77; // x27
  System_Int32_array *v78; // x8
  int v79; // w28
  const MethodInfo *v80; // x4
  System_Boolean_array *v81; // x8
  System_Int32_array *v82; // x8
  System_String_array *v83; // x8
  System_String_array *v84; // x9
  System_String_o **v85; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v87; // x0
  int32_t v88; // w3
  System_Boolean_array *v89; // x8
  System_String_array *v90; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x28
  System_String_array *v98; // x8
  System_String_array *v99; // x8
  BattleServantConfConponent_o *v100; // x28
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array *v108; // x22
  System_String_o *v109; // x28
  System_String_o *v110; // x0
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array *v118; // x8
  System_String_array *v119; // x8
  __int64 v120; // x0
  __int64 v121; // x0
  System_String_o *explanation; // [xsp+28h] [xbp-68h] BYREF
  UserServantEntity_o *v127; // [xsp+30h] [xbp-60h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4215855 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, idList);
    sub_B0D8A4(&bool___TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v21);
    sub_B0D8A4(&int___TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&string___TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v25);
    sub_B0D8A4(&StringLiteral_3318/*"COND_TYPE_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v27);
    sub_B0D8A4(&StringLiteral_1/*""*/, v28);
    byte_4215855 = 1;
  }
  v127 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantAppendPassiveSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v31 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
  MaxLevelInfo = UserServantAppendPassiveSkillMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   userId,
                   svtId,
                   0LL);
  v33 = 0LL;
  v34 = 0LL;
  if ( (MaxLevelInfo & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_69;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (__int64)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v31, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_69;
      v35 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_2E69464 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      v34 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v35,
                 (const MethodInfo_2E695FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      v33 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v31,
                       &v127,
                       userSvtId,
                       (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v127 )
          goto LABEL_69;
        v34 = *(System_Int32_array **)&v127->fields.svtId.fields.currentCryptoKey;
        v33 = *(System_Int32_array **)&v127->fields.svtId.fields.fakeValue;
      }
      else
      {
        v33 = 0LL;
        v34 = 0LL;
      }
    }
  }
  MaxLevelInfo = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v32);
  if ( !MaxLevelInfo )
LABEL_69:
    sub_B0D97C(MaxLevelInfo);
  v38 = MaxLevelInfo;
  v39 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v39;
  sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_String_array *)sub_B0D8BC(string___TypeInfo, *(unsigned int *)(v38 + 24));
  *titleList = v46;
  sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_String_array *)sub_B0D8BC(string___TypeInfo, *(unsigned int *)(v38 + 24));
  *explanationList = v53;
  sub_B0D840((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, *(unsigned int *)(v38 + 24));
  *releaseStateList = v60;
  sub_B0D840((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, *(unsigned int *)(v38 + 24));
  *lvList = v67;
  sub_B0D840((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v74 = *(_QWORD *)(v38 + 24);
  if ( (int)v74 >= 1 )
  {
    v75 = 0LL;
    v76 = 32LL;
    while ( v75 < (unsigned int)v74 )
    {
      v77 = *(ServantAppendPassiveSkillEntity_o **)(v38 + v76);
      if ( v77 )
      {
        v78 = *idList;
        if ( !*idList )
          goto LABEL_69;
        if ( v75 >= v78->max_length )
          break;
        v78->m_Items[v75 + 1] = v77->fields.skillId;
        if ( !v34
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               v34,
                               v77->fields.num,
                               (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v79 = 1;
        }
        else
        {
          if ( !v33 )
            goto LABEL_69;
          if ( (unsigned int)MaxLevelInfo >= v33->max_length )
            break;
          v79 = v33->m_Items[(int)MaxLevelInfo + 1];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v77->fields.num,
                               (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v89 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v75 >= v89->max_length )
            break;
          v89->m_Items[v75 + 4] = 0;
          v90 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          MaxLevelInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v90 )
            goto LABEL_69;
          v97 = (System_Int32_array **)MaxLevelInfo;
          if ( MaxLevelInfo )
          {
            MaxLevelInfo = sub_B0D964(MaxLevelInfo, v90->obj.klass->_1.element_class);
            if ( !MaxLevelInfo )
            {
              v121 = sub_B0D99C(0LL);
              sub_B0D948(v121, 0LL);
            }
          }
          if ( v75 >= v90->max_length )
            break;
          *(Il2CppClass **)((char *)&v90->obj.klass + v76) = (Il2CppClass *)v97;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v90 + v76), v97, v91, v92, v93, v94, v95, v96);
          v98 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v75 >= v98->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v98->obj.klass + v76),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v99 = *explanationList;
            if ( !*explanationList )
              goto LABEL_69;
            if ( v75 >= v99->max_length )
              break;
            v100 = (BattleServantConfConponent_o *)((char *)v99 + v76);
            v101 = (System_Int32_array **)System_String__Concat_43849904(
                                            *(System_String_o **)((char *)&v99->obj.klass + v76),
                                            (System_String_o *)StringLiteral_26/*"\n"*/,
                                            0LL);
            v100->klass = (BattleServantConfConponent_c *)v101;
            sub_B0D840(v100, v101, v102, v103, v104, v105, v106, v107);
          }
          v108 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v75 >= v108->max_length )
            break;
          v109 = *(System_String_o **)((char *)&v108->obj.klass + v76);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v111 = (System_Int32_array **)System_String__Concat_43849904(v109, v110, 0LL);
          *(Il2CppClass **)((char *)&v108->obj.klass + v76) = (Il2CppClass *)v111;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v108 + v76), v111, v112, v113, v114, v115, v116, v117);
          v118 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v75 >= v118->max_length )
            break;
          v118->m_Items[v75 + 1] = 0;
          v119 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          if ( v75 >= v119->max_length )
            break;
          v85 = (System_String_o **)((char *)v119 + v76);
          p_explanation = &explanation;
          v87 = v77;
          v88 = 0;
        }
        else
        {
          v81 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_69;
          if ( v75 >= v81->max_length )
            break;
          v81->m_Items[v75 + 4] = 1;
          v82 = *lvList;
          if ( !*lvList )
            goto LABEL_69;
          if ( v75 >= v82->max_length )
            break;
          v82->m_Items[v75 + 1] = v79;
          v83 = *titleList;
          if ( !*titleList )
            goto LABEL_69;
          v84 = *explanationList;
          if ( !*explanationList )
            goto LABEL_69;
          if ( v75 >= v83->max_length || v75 >= v84->max_length )
            break;
          v85 = (System_String_o **)((char *)v83 + v76);
          p_explanation = (System_String_o **)((char *)v84 + v76);
          v87 = v77;
          v88 = v79;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v87, v85, p_explanation, v88, v80);
      }
      LODWORD(v74) = *(_DWORD *)(v38 + 24);
      ++v75;
      v76 += 8LL;
      if ( (__int64)v75 >= (int)v74 )
        return;
    }
    v120 = sub_B0D9A8(MaxLevelInfo);
    sub_B0D948(v120, 0LL);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_26472008(
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
  const MethodInfo *v27; // x2
  __int64 EntityListFromSvtId; // x0
  __int64 v29; // x25
  System_Int32_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Boolean_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x4
  __int64 v66; // x8
  unsigned __int64 v67; // x28
  __int64 v68; // x21
  ServantAppendPassiveSkillEntity_o *v69; // x26
  System_Int32_array *v70; // x8
  int32_t v71; // w27
  System_String_array *v72; // x8
  System_String_array *v73; // x9
  System_Boolean_array *v74; // x8
  System_Int32_array *v75; // x8
  System_Boolean_array *v76; // x8
  System_String_array *v77; // x27
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x26
  System_String_array *v85; // x8
  System_String_array *v86; // x8
  BattleServantConfConponent_o *v87; // x26
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array *v95; // x27
  System_String_o *v96; // x26
  System_String_o *v97; // x0
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x0
  __int64 v106; // x0

  if ( (byte_4215857 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, idList);
    sub_B0D8A4(&bool___TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&string___TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v23);
    sub_B0D8A4(&StringLiteral_3318/*"COND_TYPE_TITLE"*/, v24);
    sub_B0D8A4(&StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v25);
    sub_B0D8A4(&StringLiteral_1/*""*/, v26);
    byte_4215857 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (__int64)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v27);
  if ( !EntityListFromSvtId )
LABEL_57:
    sub_B0D97C(EntityListFromSvtId);
  v29 = EntityListFromSvtId;
  v30 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v30;
  sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_String_array *)sub_B0D8BC(string___TypeInfo, *(unsigned int *)(v29 + 24));
  *titleList = v37;
  sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_String_array *)sub_B0D8BC(string___TypeInfo, *(unsigned int *)(v29 + 24));
  *explanationList = v44;
  sub_B0D840((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, *(unsigned int *)(v29 + 24));
  *releaseStateList = v51;
  sub_B0D840((BattleServantConfConponent_o *)releaseStateList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, *(unsigned int *)(v29 + 24));
  *lvList = v58;
  sub_B0D840((BattleServantConfConponent_o *)lvList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  v66 = *(_QWORD *)(v29 + 24);
  if ( (int)v66 >= 1 )
  {
    v67 = 0LL;
    v68 = 32LL;
    while ( v67 < (unsigned int)v66 )
    {
      v69 = *(ServantAppendPassiveSkillEntity_o **)(v29 + v68);
      if ( v69 )
      {
        v70 = *idList;
        if ( !*idList )
          goto LABEL_57;
        if ( v67 >= v70->max_length )
          break;
        v70->m_Items[v67 + 1] = v69->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v69->fields.skillId,
                                      (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v71 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_57;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v71 = releaseSkillLvs->m_Items[(int)EntityListFromSvtId + 1];
        }
        v72 = *titleList;
        if ( !*titleList )
          goto LABEL_57;
        v73 = *explanationList;
        if ( !*explanationList )
          goto LABEL_57;
        if ( v67 >= v72->max_length || v67 >= v73->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v69,
          (System_String_o **)((char *)v72 + v68),
          (System_String_o **)((char *)v73 + v68),
          v71,
          v65);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v69->fields.skillId,
                                      (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v76 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v67 >= v76->max_length )
            break;
          v76->m_Items[v67 + 4] = 0;
          v77 = *explanationList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          EntityListFromSvtId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3318/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v77 )
            goto LABEL_57;
          v84 = (System_Int32_array **)EntityListFromSvtId;
          if ( EntityListFromSvtId )
          {
            EntityListFromSvtId = sub_B0D964(EntityListFromSvtId, v77->obj.klass->_1.element_class);
            if ( !EntityListFromSvtId )
            {
              v106 = sub_B0D99C(0LL);
              sub_B0D948(v106, 0LL);
            }
          }
          if ( v67 >= v77->max_length )
            break;
          *(Il2CppClass **)((char *)&v77->obj.klass + v68) = (Il2CppClass *)v84;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v77 + v68), v84, v78, v79, v80, v81, v82, v83);
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v67 >= v85->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v85->obj.klass + v68),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v86 = *explanationList;
            if ( !*explanationList )
              goto LABEL_57;
            if ( v67 >= v86->max_length )
              break;
            v87 = (BattleServantConfConponent_o *)((char *)v86 + v68);
            v88 = (System_Int32_array **)System_String__Concat_43849904(
                                           *(System_String_o **)((char *)&v86->obj.klass + v68),
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           0LL);
            v87->klass = (BattleServantConfConponent_c *)v88;
            sub_B0D840(v87, v88, v89, v90, v91, v92, v93, v94);
          }
          v95 = *explanationList;
          if ( !*explanationList )
            goto LABEL_57;
          if ( v67 >= v95->max_length )
            break;
          v96 = *(System_String_o **)((char *)&v95->obj.klass + v68);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v98 = (System_Int32_array **)System_String__Concat_43849904(v96, v97, 0LL);
          *(Il2CppClass **)((char *)&v95->obj.klass + v68) = (Il2CppClass *)v98;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v95 + v68), v98, v99, v100, v101, v102, v103, v104);
          v75 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v67 >= v75->max_length )
            break;
          v71 = 0;
        }
        else
        {
          v74 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_57;
          if ( v67 >= v74->max_length )
            break;
          v74->m_Items[v67 + 4] = 1;
          v75 = *lvList;
          if ( !*lvList )
            goto LABEL_57;
          if ( v67 >= v75->max_length )
            break;
        }
        v75->m_Items[v67 + 1] = v71;
      }
      LODWORD(v66) = *(_DWORD *)(v29 + 24);
      ++v67;
      v68 += 8LL;
      if ( (__int64)v67 >= (int)v66 )
        return;
    }
    v105 = sub_B0D9A8(EntityListFromSvtId);
    sub_B0D948(v105, 0LL);
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

  if ( (byte_421584E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_421584E = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266A024 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *__fastcall ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantAppendPassiveSkillMaster_o *v6; // x20
  System_String_o *TempKey; // x0
  __int64 v9; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4215854 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_4215854 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_10;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                 (System_Xml_XmlQualifiedName_o *)TempKey,
                                 &value,
                                 (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_10:
    sub_B0D97C(TempKey);
  if ( !LODWORD(value->fields.sourceUri) )
  {
    v9 = sub_B0D9A8(TempKey);
    sub_B0D948(v9, 0LL);
  }
  return (ServantAppendPassiveSkillEntity_o *)value->fields.namespaces;
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_HashSet_int__o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  void *list; // x0
  int32_t v19; // w23
  _DWORD *v20; // x24
  __int64 v21; // x10
  const MethodInfo *v22; // x3

  if ( (byte_4215853 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v12);
    sub_B0D8A4(&ServantAppendPassiveSkillEntity_TypeInfo, v13);
    byte_4215853 = 1;
  }
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  v19 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v19 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v19,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v20 = list;
      v21 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *((_DWORD *)list + 4) == svtId )
      {
        if ( !v14 )
          goto LABEL_19;
        if ( System_Collections_Generic_HashSet_int___Add(
               v14,
               *((_DWORD *)list + 5),
               (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v20[4], v20[5], v22);
          if ( !v17 )
            goto LABEL_19;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v17 )
LABEL_19:
    sub_B0D97C(list);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w24
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x22
  int32_t v20; // w25
  _DWORD *v21; // x26
  __int64 v22; // x10
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // [xsp+8h] [xbp-58h]

  if ( (byte_4215856 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&ServantAppendPassiveSkillEntity_TypeInfo, v10);
    sub_B0D8A4(&SvtUseSkillData_TypeInfo, v11);
    byte_4215856 = 1;
  }
  v37 = sub_B0D974(SvtUseSkillData_TypeInfo, *(_QWORD *)&svtId, method);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v37, 0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = list;
        v22 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == ServantAppendPassiveSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == svtId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_int___Add(
            v16,
            *((_DWORD *)list + 7),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v19 )
            break;
          System_Collections_Generic_List_int___Add(
            v19,
            v21[5],
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v20 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B0D97C(list);
  }
LABEL_15:
  if ( !v16 )
    goto LABEL_19;
  list = System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v37 )
    goto LABEL_19;
  *(_QWORD *)(v37 + 16) = list;
  sub_B0D840((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)list, v23, v24, v25, v26, v27, v28);
  if ( !v19 )
    goto LABEL_19;
  v29 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v19,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v37 + 32) = v29;
  sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), v29, v30, v31, v32, v33, v34, v35);
  return (SvtUseSkillData_o *)v37;
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

  if ( (byte_421584F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_421584F = 1;
  }
  PK = ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v33; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  const MethodInfo *v44; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x22
  __int64 v46; // x9
  System_String_o *TempKey; // x0
  System_Xml_XmlQualifiedName_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  System_Xml_Schema_XmlSchemaObject_o *v52; // x2
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  ServantAppendPassiveSkillMaster___c_c *v59; // x0
  Il2CppObject *v60; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v64; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *v72; // x23
  System_Xml_Schema_XmlSchemaObject_o *v73; // x0
  int v74; // w21
  ServantAppendPassiveSkillMaster_o *v76; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v77; // [xsp+18h] [xbp-B8h] BYREF
  int v78[2]; // [xsp+40h] [xbp-90h]
  int v79; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v80; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4215852 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__, v3);
    sub_B0D8A4(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v15);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v19);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v26);
    sub_B0D8A4(&ServantAppendPassiveSkillEntity_TypeInfo, v27);
    sub_B0D8A4(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B0D8A4(&ServantAppendPassiveSkillMaster___c_TypeInfo, v29);
    byte_4215852 = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v33,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v76 = this;
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_17:
      v42 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
    if ( !v43 )
      sub_B0D97C(0LL);
    v46 = *(&ServantAppendPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v46
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v46 - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      v59 = (ServantAppendPassiveSkillMaster___c_c *)sub_B0DC70(v43);
LABEL_52:
      sub_B0D97C(v59);
    }
    TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(
                (ServantAppendPassiveSkillMaster_o *)v43,
                *(_DWORD *)(v43 + 16),
                *(_DWORD *)(v43 + 20),
                v44);
    if ( !v33 )
      sub_B0D97C(TempKey);
    v48 = (System_Xml_XmlQualifiedName_o *)TempKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v33,
            (System_Xml_XmlQualifiedName_o *)TempKey,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v49, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v51,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      v52 = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      this = v76;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v33,
        v48,
        v52,
        (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v45,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
  }
  v78[0] = 117;
  v79 = 1;
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_31:
    v56 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v56 + 8));
  v79 = 0;
  if ( !v33 )
LABEL_57:
    sub_B0D97C(listCache);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v77,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v33,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v80 = v77;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v80,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v59 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v80.fields.current.fields.key;
    v60 = v80.fields.current.fields.value;
    if ( (BYTE3(ServantAppendPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v59 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo,
                                                                            v57,
                                                                            v58);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v64,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_ServantAppendPassiveSkillEntity___ctor__);
      v65 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v65->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v65->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      this = v76;
    }
    if ( !v60 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v72 = this->fields.listCache;
    v73 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_B0D97C(v73);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v72,
      (System_Xml_XmlQualifiedName_o *)key,
      v73,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v60,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
  }
  v78[0] = 240;
  v74 = ++v79;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v80,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  if ( v74 && v78[v74 - 1] == 240 )
    v79 = v74 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v33,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212207 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_4212207 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantAppendPassiveSkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}