void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16851 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__,
      v5,
      v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v7, v8);
    byte_4B16851 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    368,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  v8 = svtId;
  if ( (byte_4B16852 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, *(_QWORD *)&svtId, *(_QWORD *)&num);
    byte_4B16852 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62412480(v4, (System_String_o *)StringLiteral_1541/*":"*/, v5, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *Master_object; // x24
  int64_t MaxLevelInfo; // x0
  __int64 v47; // x1
  UserServantAppendPassiveSkillLvMaster_o *v48; // x29
  const MethodInfo *v49; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v52; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int64_t v55; // x26
  System_Int32_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_array *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Boolean_array *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Int32_array *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x8
  unsigned __int64 v92; // x29
  __int64 v93; // x19
  ServantAppendPassiveSkillEntity_o *v94; // x27
  System_Int32_array *v95; // x8
  int v96; // w28
  const MethodInfo *v97; // x4
  System_Boolean_array *v98; // x8
  System_Int32_array *v99; // x8
  System_String_array *v100; // x8
  System_String_array *v101; // x9
  System_String_o **v102; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v104; // x0
  int32_t v105; // w3
  System_Boolean_array *v106; // x8
  System_String_array *v107; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_String_array *v114; // x8
  System_String_array *v115; // x8
  PartyOrganizationUtility_o *v116; // x28
  System_String_o *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  System_String_array *v124; // x20
  System_String_o *v125; // x28
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_Int32_array *v134; // x8
  System_String_array *v135; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v140; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B16856 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, idList, titleList);
    sub_1BCA7E0(&bool___TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v27, v28);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v29, v30);
    sub_1BCA7E0(&int___TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&string___TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3834/*"COND_TYPE_TITLE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B16856 = 1;
  }
  v140 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v48 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
  MaxLevelInfo = UserServantAppendPassiveSkillMaster__TryGetEntity(
                   (UserServantAppendPassiveSkillMaster_o *)Master_object,
                   &entity,
                   userId,
                   svtId,
                   0LL);
  monitor = 0LL;
  klass = 0LL;
  if ( (MaxLevelInfo & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (int64_t)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v48, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v52 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_31FCF38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v52,
                 (const MethodInfo_31FD088 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                       &v140,
                       userSvtId,
                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v140 )
          goto LABEL_64;
        klass = (System_Int32_array *)v140[5].klass;
        monitor = v140[5].monitor;
      }
      else
      {
        monitor = 0LL;
        klass = 0LL;
      }
    }
  }
  MaxLevelInfo = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v49);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1BCAA3C(MaxLevelInfo, v47);
  v55 = MaxLevelInfo;
  v56 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = (System_String_array *)sub_1BCA888(string___TypeInfo, *(unsigned int *)(v55 + 24));
  *titleList = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = (System_String_array *)sub_1BCA888(string___TypeInfo, *(unsigned int *)(v55 + 24));
  *explanationList = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  v77 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, *(unsigned int *)(v55 + 24));
  *releaseStateList = v77;
  sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  v84 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, *(unsigned int *)(v55 + 24));
  *lvList = v84;
  sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  v91 = *(_QWORD *)(v55 + 24);
  if ( (int)v91 >= 1 )
  {
    v92 = 0LL;
    v93 = 32LL;
    while ( v92 < (unsigned int)v91 )
    {
      v94 = *(ServantAppendPassiveSkillEntity_o **)(v55 + v93);
      if ( v94 )
      {
        v95 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v92 >= v95->max_length )
          break;
        v95->m_Items[v92 + 1] = v94->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               klass,
                               v94->fields.num,
                               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v96 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v96 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v94->fields.num,
                               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v106 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v92 >= v106->max_length )
            break;
          v106->m_Items[v92 + 4] = 0;
          v107 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
          MaxLevelInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v107 )
            goto LABEL_64;
          if ( v92 >= v107->max_length )
            break;
          *(Il2CppClass **)((char *)&v107->obj.klass + v93) = (Il2CppClass *)MaxLevelInfo;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)((char *)v107 + v93),
            MaxLevelInfo,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
          v114 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v92 >= v114->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v114->obj.klass + v93),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v115 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v92 >= v115->max_length )
              break;
            v116 = (PartyOrganizationUtility_o *)((char *)v115 + v93);
            v117 = System_String__Concat_62401220(
                     *(System_String_o **)((char *)&v115->obj.klass + v93),
                     (System_String_o *)StringLiteral_43/*"\n"*/,
                     0LL);
            v116->klass = (PartyOrganizationUtility_c *)v117;
            sub_1BCA784(v116, (int64_t)v117, v118, v119, v120, v121, v122, v123);
          }
          v124 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v92 >= v124->max_length )
            break;
          v125 = *(System_String_o **)((char *)&v124->obj.klass + v93);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v127 = System_String__Concat_62401220(v125, v126, 0LL);
          *(Il2CppClass **)((char *)&v124->obj.klass + v93) = (Il2CppClass *)v127;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)((char *)v124 + v93),
            (int64_t)v127,
            v128,
            v129,
            v130,
            v131,
            v132,
            v133);
          v134 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v92 >= v134->max_length )
            break;
          v134->m_Items[v92 + 1] = 0;
          v135 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v92 >= v135->max_length )
            break;
          v102 = (System_String_o **)((char *)v135 + v93);
          p_explanation = &explanation;
          v104 = v94;
          v105 = 0;
        }
        else
        {
          v98 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v92 >= v98->max_length )
            break;
          v98->m_Items[v92 + 4] = 1;
          v99 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v92 >= v99->max_length )
            break;
          v99->m_Items[v92 + 1] = v96;
          v100 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v101 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v92 >= v100->max_length || v92 >= v101->max_length )
            break;
          v102 = (System_String_o **)((char *)v100 + v93);
          p_explanation = (System_String_o **)((char *)v101 + v93);
          v104 = v94;
          v105 = v96;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v104, v102, p_explanation, v105, v97);
      }
      LODWORD(v91) = *(_DWORD *)(v55 + 24);
      ++v92;
      v93 += 8LL;
      if ( (__int64)v92 >= (int)v91 )
        return;
    }
    sub_1BCAA44(MaxLevelInfo, v47);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_40328708(
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x2
  int64_t EntityListFromSvtId; // x0
  __int64 v41; // x1
  int64_t v42; // x25
  System_Int32_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Boolean_array *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Int32_array *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x4
  __int64 v79; // x8
  unsigned __int64 v80; // x28
  __int64 v81; // x20
  ServantAppendPassiveSkillEntity_o *v82; // x26
  System_Int32_array *v83; // x8
  int32_t v84; // w27
  System_String_array *v85; // x8
  System_String_array *v86; // x9
  System_Boolean_array *v87; // x8
  System_Int32_array *v88; // x8
  System_Boolean_array *v89; // x8
  System_String_array *v90; // x26
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_array *v97; // x8
  System_String_array *v98; // x8
  PartyOrganizationUtility_o *v99; // x26
  System_String_o *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_String_array *v107; // x27
  System_String_o *v108; // x26
  System_String_o *v109; // x0
  System_String_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7

  if ( (byte_4B16858 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, idList, titleList);
    sub_1BCA7E0(&bool___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&string___TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3834/*"COND_TYPE_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v37, v38);
    byte_4B16858 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v39);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1BCAA3C(EntityListFromSvtId, v41);
  v42 = EntityListFromSvtId;
  v43 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (System_String_array *)sub_1BCA888(string___TypeInfo, *(unsigned int *)(v42 + 24));
  *titleList = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = (System_String_array *)sub_1BCA888(string___TypeInfo, *(unsigned int *)(v42 + 24));
  *explanationList = v57;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, *(unsigned int *)(v42 + 24));
  *releaseStateList = v64;
  sub_1BCA784((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  v71 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, *(unsigned int *)(v42 + 24));
  *lvList = v71;
  sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  v79 = *(_QWORD *)(v42 + 24);
  if ( (int)v79 >= 1 )
  {
    v80 = 0LL;
    v81 = 32LL;
    while ( v80 < (unsigned int)v79 )
    {
      v82 = *(ServantAppendPassiveSkillEntity_o **)(v42 + v81);
      if ( v82 )
      {
        v83 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v80 >= v83->max_length )
          break;
        v83->m_Items[v80 + 1] = v82->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v82->fields.skillId,
                                      (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v84 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v84 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId + 1];
        }
        v85 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v86 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v80 >= v85->max_length || v80 >= v86->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v82,
          (System_String_o **)((char *)v85 + v81),
          (System_String_o **)((char *)v86 + v81),
          v84,
          v78);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v82->fields.skillId,
                                      (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v89 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v80 >= v89->max_length )
            break;
          v89->m_Items[v80 + 4] = 0;
          v90 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
          EntityListFromSvtId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v90 )
            goto LABEL_52;
          if ( v80 >= v90->max_length )
            break;
          *(Il2CppClass **)((char *)&v90->obj.klass + v81) = (Il2CppClass *)EntityListFromSvtId;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)((char *)v90 + v81),
            EntityListFromSvtId,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          v97 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v80 >= v97->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v97->obj.klass + v81),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v98 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v80 >= v98->max_length )
              break;
            v99 = (PartyOrganizationUtility_o *)((char *)v98 + v81);
            v100 = System_String__Concat_62401220(
                     *(System_String_o **)((char *)&v98->obj.klass + v81),
                     (System_String_o *)StringLiteral_43/*"\n"*/,
                     0LL);
            v99->klass = (PartyOrganizationUtility_c *)v100;
            sub_1BCA784(v99, (int64_t)v100, v101, v102, v103, v104, v105, v106);
          }
          v107 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v80 >= v107->max_length )
            break;
          v108 = *(System_String_o **)((char *)&v107->obj.klass + v81);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
          v109 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v110 = System_String__Concat_62401220(v108, v109, 0LL);
          *(Il2CppClass **)((char *)&v107->obj.klass + v81) = (Il2CppClass *)v110;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)((char *)v107 + v81),
            (int64_t)v110,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v88 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v80 >= v88->max_length )
            break;
          v84 = 0;
        }
        else
        {
          v87 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v80 >= v87->max_length )
            break;
          v87->m_Items[v80 + 4] = 1;
          v88 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v80 >= v88->max_length )
            break;
        }
        v88->m_Items[v80 + 1] = v84;
      }
      LODWORD(v79) = *(_DWORD *)(v42 + 24);
      ++v80;
      v81 += 8LL;
      if ( (__int64)v80 >= (int)v79 )
        return;
    }
    sub_1BCAA44(EntityListFromSvtId, v41);
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
  Il2CppObject *PK; // x1

  if ( (byte_4B1684F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B1684F = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B16855 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId,
                                                  *(_QWORD *)&num);
    byte_4B16855 = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_9:
    sub_1BCAA3C(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1BCAA44(TempKey, v8);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_HashSet_int__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x22
  __int64 v29; // x1
  int64_t list; // x0
  int32_t v31; // w23
  int64_t v32; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v34; // x3
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  int64_t v44; // x1
  Il2CppClass **v45; // x0

  if ( (byte_4B16854 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&ServantAppendPassiveSkillEntity_TypeInfo, v22, v23);
    byte_4B16854 = 1;
  }
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  v31 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v31 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v31,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v32 = list;
      methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *(_DWORD *)(list + 16) == svtId )
      {
        if ( !v24 )
          goto LABEL_22;
        if ( System_Collections_Generic_HashSet_int___Add(
               v24,
               *(_DWORD *)(list + 20),
               (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = (int64_t)ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
                            this,
                            *(_DWORD *)(v32 + 16),
                            *(_DWORD *)(v32 + 20),
                            v34);
          if ( !v28 )
            goto LABEL_22;
          items = v28->fields._items;
          v42 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v28->fields._size;
          v44 = list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v44;
            sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), v44, v35, v36, v37, v38, v39, v40);
          }
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v31;
    if ( !list )
      goto LABEL_22;
  }
  if ( !v28 )
LABEL_22:
    sub_1BCAA3C(list, v29);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v28,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_int__o *v31; // x22
  int32_t v32; // w25
  System_Collections_ObjectModel_Collection_T__o *v33; // x26
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Int32_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B16857 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantAppendPassiveSkillEntity_TypeInfo, v16, v17);
    sub_1BCA7E0(&SvtUseSkillData_TypeInfo, v18, v19);
    byte_4B16857 = 1;
  }
  v20 = sub_1BCAA2C(SvtUseSkillData_TypeInfo, *(_QWORD *)&svtId, method, v3);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v20, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v32,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v33 = list;
        methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantAppendPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantAppendPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId )
        {
          if ( !v27 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v27->fields._items;
          v36 = Method_System_Collections_Generic_List_int__Add__;
          ++v27->fields._version;
          if ( !items )
            break;
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v27,
              klass_high,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v27->fields._size = size + 1;
            items->m_Items[size + 1] = klass_high;
          }
          if ( !v31 )
            break;
          klass_high = HIDWORD(v33->fields.items);
          v38 = v31->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v31->fields._version;
          if ( !v38 )
            break;
          v40 = v31->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v31,
              klass_high,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v31->fields._size = v40 + 1;
            v38->m_Items[v40 + 1] = klass_high;
          }
        }
      }
      if ( Count == ++v32 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BCAA3C(list, klass_high);
  }
LABEL_22:
  if ( !v27 )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v27,
                                                             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v20 )
    goto LABEL_26;
  *(_QWORD *)(v20 + 16) = list;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)list, v41, v42, v43, v44, v45, v46);
  if ( !v31 )
    goto LABEL_26;
  v47 = System_Collections_Generic_List_int___ToArray(
          v31,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v20 + 32) = v47;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  return (SvtUseSkillData_o *)v20;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B16850 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16850 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Dictionary_object__object__o *v60; // x20
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *TempKey; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  __int64 v79; // x1
  int64_t v80; // x2
  __int64 v81; // x3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_object__o *v86; // x24
  System_Collections_Generic_List_object__o *v87; // x0
  Il2CppClass *v88; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  void **v91; // x8
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  ServantAppendPassiveSkillMaster___c_c *v100; // x8
  Il2CppObject *v101; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v104; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_Dictionary_object__object__o *v112; // x23
  System_Object_array *v113; // x0
  __int64 v114; // x1
  int32_t monitor; // w2
  int v116; // w8
  ServantAppendPassiveSkillMaster_o *v118; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B16853 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__,
      v18,
      v19);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v36,
      v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v48, v49);
    sub_1BCA7E0(&ServantAppendPassiveSkillEntity_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v52, v53);
    sub_1BCA7E0(&ServantAppendPassiveSkillMaster___c_TypeInfo, v54, v55);
    byte_4B16853 = 1;
  }
  value = 0LL;
  memset(&v120, 0, sizeof(v120));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v60 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v60,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v118 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v61);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_17;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_17:
      v70 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v74 = (Il2CppObject *)v71;
    if ( !v71 )
      sub_1BCAA3C(0LL, v72);
    methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1BCACFC(v71);
LABEL_51:
      sub_1BCAA3C(v87, v79);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v71,
                                *(_DWORD *)(v71 + 16),
                                *(_DWORD *)(v71 + 20),
                                v73);
    if ( !v60 )
      sub_1BCAA3C(TempKey, v77);
    v78 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v60,
            TempKey,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo,
                                                           v79,
                                                           v80,
                                                           v81);
      System_Collections_Generic_List_object____ctor(
        v86,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v86;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v60,
        v78,
        (Il2CppObject *)v86,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v87 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v88 = value[1].klass;
    v89 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v88 )
      sub_1BCAA3C(v87, v79);
    size = v87->fields._size;
    if ( (unsigned int)size >= LODWORD(v88->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->_1.image + size;
      v87->fields._size = size + 1;
      v91[4] = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v74, v80, v81, v82, v83, v84, v85);
    }
  }
  v92 = Enumerator->klass;
  v93 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v94 = &v92->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_34;
    }
    v95 = (__int64)&v92->vtable[*v94].method;
  }
  else
  {
LABEL_34:
    v95 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v95 + 8));
  if ( !v60 )
LABEL_57:
    sub_1BCAA3C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v119,
    v60,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v120 = v119;
  while ( 1 )
  {
    v96 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v120,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v96 )
      break;
    v100 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v120.fields._current.fields.key;
    v101 = v120.fields._current.fields.value;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo, v97);
      v100 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v100->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100, v97);
        v100 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v104 = (Il2CppObject *)v100->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo,
                                            v97,
                                            v98,
                                            v99);
      System_Comparison_object____ctor(
        _9__5_0,
        v104,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
    }
    if ( !v101 )
      sub_1BCAA3C(v96, v97);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v101,
      _9__5_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v112 = (System_Collections_Generic_Dictionary_object__object__o *)v118->fields.listCache;
    v113 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)v101,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v112 )
      sub_1BCAA3C(v113, v114);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v112,
      key,
      &v113->obj,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v101[1].monitor;
    v116 = HIDWORD(v101[1].monitor) + 1;
    LODWORD(v101[1].monitor) = 0;
    HIDWORD(v101[1].monitor) = v116;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v101[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v120,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v60,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16859 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1, v2);
    byte_4B16859 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantAppendPassiveSkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}