void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDCBD7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_4BDCBD7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    372,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


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
  if ( (byte_4BDCBD8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCBD8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_63126736(v4, (System_String_o *)StringLiteral_1546/*":"*/, v5, 0LL);
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
  Il2CppObject *Master_object; // x24
  int64_t MaxLevelInfo; // x0
  __int64 v17; // x1
  UserServantAppendPassiveSkillLvMaster_o *v18; // x29
  const MethodInfo *v19; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v22; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int64_t v25; // x26
  System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_String_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Boolean_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Int32_array *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  unsigned __int64 v62; // x29
  __int64 v63; // x19
  ServantAppendPassiveSkillEntity_o *v64; // x27
  System_Int32_array *v65; // x8
  int v66; // w28
  const MethodInfo *v67; // x4
  System_Boolean_array *v68; // x8
  System_Int32_array *v69; // x8
  System_String_array *v70; // x8
  System_String_array *v71; // x9
  System_String_o **v72; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v74; // x0
  int32_t v75; // w3
  System_Boolean_array *v76; // x8
  System_String_array *v77; // x20
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_String_array *v84; // x8
  System_String_array *v85; // x8
  PartyOrganizationUtility_o *v86; // x28
  System_String_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_String_array *v94; // x20
  System_String_o *v95; // x28
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Int32_array *v104; // x8
  System_String_array *v105; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v110; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BDCBDC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_3858/*"COND_TYPE_TITLE"*/);
    sub_1C21E38(&StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCBDC = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v18 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
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
    if ( !v18 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (int64_t)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v18, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v22 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_32ACC40 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v22,
                 (const MethodInfo_32ACD90 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       &v110,
                       userSvtId,
                       (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v110 )
          goto LABEL_64;
        klass = (System_Int32_array *)v110[5].klass;
        monitor = v110[5].monitor;
      }
      else
      {
        monitor = 0LL;
        klass = 0LL;
      }
    }
  }
  MaxLevelInfo = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v19);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1C22094(MaxLevelInfo, v17);
  v25 = MaxLevelInfo;
  v26 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_String_array *)sub_1C21EE0(string___TypeInfo, *(unsigned int *)(v25 + 24));
  *titleList = v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)titleList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_String_array *)sub_1C21EE0(string___TypeInfo, *(unsigned int *)(v25 + 24));
  *explanationList = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)explanationList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, *(unsigned int *)(v25 + 24));
  *releaseStateList = v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, *(unsigned int *)(v25 + 24));
  *lvList = v54;
  sub_1C21DDC((PartyOrganizationUtility_o *)lvList, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = *(_QWORD *)(v25 + 24);
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    v63 = 32LL;
    while ( v62 < (unsigned int)v61 )
    {
      v64 = *(ServantAppendPassiveSkillEntity_o **)(v25 + v63);
      if ( v64 )
      {
        v65 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v62 >= v65->max_length )
          break;
        v65->m_Items[v62 + 1] = v64->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               klass,
                               v64->fields.num,
                               (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v66 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v66 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v64->fields.num,
                               (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v76 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v62 >= v76->max_length )
            break;
          v76->m_Items[v62 + 4] = 0;
          v77 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v77 )
            goto LABEL_64;
          if ( v62 >= v77->max_length )
            break;
          *(Il2CppClass **)((char *)&v77->obj.klass + v63) = (Il2CppClass *)MaxLevelInfo;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v77 + v63), MaxLevelInfo, v78, v79, v80, v81, v82, v83);
          v84 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= v84->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v84->obj.klass + v63),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v85 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v62 >= v85->max_length )
              break;
            v86 = (PartyOrganizationUtility_o *)((char *)v85 + v63);
            v87 = System_String__Concat_63115476(
                    *(System_String_o **)((char *)&v85->obj.klass + v63),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v86->klass = (PartyOrganizationUtility_c *)v87;
            sub_1C21DDC(v86, (int64_t)v87, v88, v89, v90, v91, v92, v93);
          }
          v94 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= v94->max_length )
            break;
          v95 = *(System_String_o **)((char *)&v94->obj.klass + v63);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v97 = System_String__Concat_63115476(v95, v96, 0LL);
          *(Il2CppClass **)((char *)&v94->obj.klass + v63) = (Il2CppClass *)v97;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v94 + v63), (int64_t)v97, v98, v99, v100, v101, v102, v103);
          v104 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v62 >= v104->max_length )
            break;
          v104->m_Items[v62 + 1] = 0;
          v105 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v62 >= v105->max_length )
            break;
          v72 = (System_String_o **)((char *)v105 + v63);
          p_explanation = &explanation;
          v74 = v64;
          v75 = 0;
        }
        else
        {
          v68 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v62 >= v68->max_length )
            break;
          v68->m_Items[v62 + 4] = 1;
          v69 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v62 >= v69->max_length )
            break;
          v69->m_Items[v62 + 1] = v66;
          v70 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v71 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= v70->max_length || v62 >= v71->max_length )
            break;
          v72 = (System_String_o **)((char *)v70 + v63);
          p_explanation = (System_String_o **)((char *)v71 + v63);
          v74 = v64;
          v75 = v66;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v74, v72, p_explanation, v75, v67);
      }
      LODWORD(v61) = *(_DWORD *)(v25 + 24);
      ++v62;
      v63 += 8LL;
      if ( (__int64)v62 >= (int)v61 )
        return;
    }
    sub_1C2209C(MaxLevelInfo, v17);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_40869040(
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
  const MethodInfo *v17; // x2
  int64_t EntityListFromSvtId; // x0
  __int64 v19; // x1
  int64_t v20; // x25
  System_Int32_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Boolean_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Int32_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x4
  __int64 v57; // x8
  unsigned __int64 v58; // x28
  __int64 v59; // x20
  ServantAppendPassiveSkillEntity_o *v60; // x26
  System_Int32_array *v61; // x8
  int32_t v62; // w27
  System_String_array *v63; // x8
  System_String_array *v64; // x9
  System_Boolean_array *v65; // x8
  System_Int32_array *v66; // x8
  System_Boolean_array *v67; // x8
  System_String_array *v68; // x26
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_String_array *v75; // x8
  System_String_array *v76; // x8
  PartyOrganizationUtility_o *v77; // x26
  System_String_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_String_array *v85; // x27
  System_String_o *v86; // x26
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7

  if ( (byte_4BDCBDE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_3858/*"COND_TYPE_TITLE"*/);
    sub_1C21E38(&StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCBDE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v17);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1C22094(EntityListFromSvtId, v19);
  v20 = EntityListFromSvtId;
  v21 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_String_array *)sub_1C21EE0(string___TypeInfo, *(unsigned int *)(v20 + 24));
  *titleList = v28;
  sub_1C21DDC((PartyOrganizationUtility_o *)titleList, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_String_array *)sub_1C21EE0(string___TypeInfo, *(unsigned int *)(v20 + 24));
  *explanationList = v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)explanationList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, *(unsigned int *)(v20 + 24));
  *releaseStateList = v42;
  sub_1C21DDC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, *(unsigned int *)(v20 + 24));
  *lvList = v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)lvList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  v57 = *(_QWORD *)(v20 + 24);
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    v59 = 32LL;
    while ( v58 < (unsigned int)v57 )
    {
      v60 = *(ServantAppendPassiveSkillEntity_o **)(v20 + v59);
      if ( v60 )
      {
        v61 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v58 >= v61->max_length )
          break;
        v61->m_Items[v58 + 1] = v60->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v60->fields.skillId,
                                      (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v62 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v62 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId + 1];
        }
        v63 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v64 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v58 >= v63->max_length || v58 >= v64->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v60,
          (System_String_o **)((char *)v63 + v59),
          (System_String_o **)((char *)v64 + v59),
          v62,
          v56);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v60->fields.skillId,
                                      (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v67 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v58 >= v67->max_length )
            break;
          v67->m_Items[v58 + 4] = 0;
          v68 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v68 )
            goto LABEL_52;
          if ( v58 >= v68->max_length )
            break;
          *(Il2CppClass **)((char *)&v68->obj.klass + v59) = (Il2CppClass *)EntityListFromSvtId;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)((char *)v68 + v59),
            EntityListFromSvtId,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
          v75 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v58 >= v75->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v75->obj.klass + v59),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v76 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v58 >= v76->max_length )
              break;
            v77 = (PartyOrganizationUtility_o *)((char *)v76 + v59);
            v78 = System_String__Concat_63115476(
                    *(System_String_o **)((char *)&v76->obj.klass + v59),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v77->klass = (PartyOrganizationUtility_c *)v78;
            sub_1C21DDC(v77, (int64_t)v78, v79, v80, v81, v82, v83, v84);
          }
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v58 >= v85->max_length )
            break;
          v86 = *(System_String_o **)((char *)&v85->obj.klass + v59);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v88 = System_String__Concat_63115476(v86, v87, 0LL);
          *(Il2CppClass **)((char *)&v85->obj.klass + v59) = (Il2CppClass *)v88;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v85 + v59), (int64_t)v88, v89, v90, v91, v92, v93, v94);
          v66 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v58 >= v66->max_length )
            break;
          v62 = 0;
        }
        else
        {
          v65 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v58 >= v65->max_length )
            break;
          v65->m_Items[v58 + 4] = 1;
          v66 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v58 >= v66->max_length )
            break;
        }
        v66->m_Items[v58 + 1] = v62;
      }
      LODWORD(v57) = *(_DWORD *)(v20 + 24);
      ++v58;
      v59 += 8LL;
      if ( (__int64)v58 >= (int)v57 )
        return;
    }
    sub_1C2209C(EntityListFromSvtId, v19);
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

  if ( (byte_4BDCBD5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4BDCBD5 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3260880 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4BDCBDB & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_4BDCBDB = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_9:
    sub_1C22094(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1C2209C(TempKey, v8);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


ServantAppendPassiveSkillEntity_array *__fastcall ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 v7; // x1
  int64_t list; // x0
  int32_t v9; // w23
  int64_t v10; // x24
  const MethodInfo *v11; // x3
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int64_t v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4BDCBDA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    byte_4BDCBDA = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v9 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v9,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        if ( !v5 )
          goto LABEL_20;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *(_DWORD *)(list + 20),
               (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = (int64_t)ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
                            this,
                            *(_DWORD *)(v10 + 16),
                            *(_DWORD *)(v10 + 20),
                            v11);
          if ( !v6 )
            goto LABEL_20;
          items = v6->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v6->fields._size;
          v21 = list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v21;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v21, v12, v13, v14, v15, v16, v17);
          }
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v6 )
LABEL_20:
    sub_1C22094(list, v7);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v6,
                                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *__fastcall ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v9; // x23
  System_Collections_Generic_List_int__o *v10; // x22
  int32_t v11; // w25
  System_Collections_ObjectModel_Collection_T__o *v12; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Int32_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDCBDD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&SvtUseSkillData_TypeInfo);
    byte_4BDCBDD = 1;
  }
  v5 = sub_1C22084(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list->fields.items) == svtId )
        {
          if ( !v9 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v9->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              klass_high,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = klass_high;
          }
          if ( !v10 )
            break;
          klass_high = HIDWORD(v12->fields.items);
          v16 = v10->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !v16 )
            break;
          v18 = v10->fields._size;
          if ( (unsigned int)v18 >= v16->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              klass_high,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = v18 + 1;
            v16->m_Items[v18 + 1] = klass_high;
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_20;
    }
LABEL_24:
    sub_1C22094(list, klass_high);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v9,
                                                             (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = list;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)list, v19, v20, v21, v22, v23, v24);
  if ( !v10 )
    goto LABEL_24;
  v25 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v5 + 32) = v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v25, v26, v27, v28, v29, v30, v31);
  return (SvtUseSkillData_o *)v5;
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

  if ( (byte_4BDCBD6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4BDCBD6 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall ServantAppendPassiveSkillMaster__preProcess(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *TempKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x24
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppClass *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  void **v35; // x8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  ServantAppendPassiveSkillMaster___c_c *v42; // x8
  Il2CppObject *v43; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v46; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_Dictionary_object__object__o *v54; // x23
  System_Object_array *v55; // x0
  __int64 v56; // x1
  int32_t monitor; // w2
  int v58; // w8
  ServantAppendPassiveSkillMaster_o *v60; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BDCBD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C21E38(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_1C21E38(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_1C21E38(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4BDCBD9 = 1;
  }
  value = 0LL;
  memset(&v62, 0, sizeof(v62));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v60 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1C73E18(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo,
              0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C22094(0LL, v16);
    methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1C22354(v15);
LABEL_51:
      sub_1C22094(v31, v23);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v15,
                                *(_DWORD *)(v15 + 16),
                                *(_DWORD *)(v15 + 20),
                                v17);
    if ( !v4 )
      sub_1C22094(TempKey, v21);
    v22 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            TempKey,
            &value,
            (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v30;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v30,
        (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v32 )
      sub_1C22094(v31, v23);
    size = v31->fields._size;
    if ( (unsigned int)size >= LODWORD(v32->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v18,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->_1.image + size;
      v31->fields._size = size + 1;
      v35[4] = v18;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v18, v24, v25, v26, v27, v28, v29);
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_34:
    v39 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v39 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C22094(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v61,
    v4,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v62,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v40 )
      break;
    v42 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v62.fields._current.fields.key;
    v43 = v62.fields._current.fields.value;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v42 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v42->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v42->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v46,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    if ( !v43 )
      sub_1C22094(v40, v41);
    System_Collections_Generic_List_object___Sort_56953720(
      (System_Collections_Generic_List_object__o *)v43,
      _9__5_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v54 = (System_Collections_Generic_Dictionary_object__object__o *)v60->fields.listCache;
    v55 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v43,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v54 )
      sub_1C22094(v55, v56);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v54,
      key,
      &v55->obj,
      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v43[1].monitor;
    v58 = HIDWORD(v43[1].monitor) + 1;
    LODWORD(v43[1].monitor) = 0;
    HIDWORD(v43[1].monitor) = v58;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v43[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v62,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCBDF & 1) == 0 )
  {
    sub_1C21E38(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4BDCBDF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}