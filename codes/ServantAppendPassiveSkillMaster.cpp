void ServantAppendPassiveSkillMaster___ctor(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59710E9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_59710E9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    376,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
}


System_String_o *ServantAppendPassiveSkillMaster__CreateTempKey(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = svtId;
  v7 = num;
  if ( (byte_59710EA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59710EA = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_75694928(v4, (System_String_o *)StringLiteral_1533/*":"*/, v5, 0);
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
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
  int v15; // w8
  Il2CppObject *Master_object; // x24
  UserServantAppendPassiveSkillLvMaster_o *MaxLevelInfo; // x0
  __int64 v18; // x1
  UserServantAppendPassiveSkillLvMaster_o *v19; // x29
  const MethodInfo *v20; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v23; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  UserServantAppendPassiveSkillLvMaster_o *v26; // x26
  System_Int32_array *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_array *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Boolean_array *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Int32_array *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v63; // x29
  __int64 v64; // x19
  ServantAppendPassiveSkillEntity_o *v65; // x27
  System_Int32_array *v66; // x8
  int v67; // w28
  const MethodInfo *v68; // x4
  System_Boolean_array *v69; // x8
  System_Int32_array *v70; // x9
  System_String_array *v71; // x8
  System_String_array *v72; // x9
  System_String_o **v73; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v75; // x0
  int32_t v76; // w3
  System_Boolean_array *v77; // x8
  System_String_array *v78; // x20
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_array *v85; // x8
  System_String_array *v86; // x20
  System_String_o *v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  System_String_array *v94; // x20
  System_String_o *v95; // x28
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_Int32_array *v104; // x8
  char *v105; // x9
  System_String_array *v106; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v111; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_59710EE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59710EE = 1;
  }
  entity = 0;
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  explanation = 0;
  v111 = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_65;
  v19 = MaxLevelInfo;
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                              (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                              &entity,
                                                              userId,
                                                              svtId,
                                                              0);
  monitor = 0;
  klass = 0;
  if ( ((unsigned __int8)MaxLevelInfo & 1) == 0 )
    goto LABEL_16;
  if ( userSvtId < 1 )
  {
    if ( v19 )
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
                                                                  v19,
                                                                  userId,
                                                                  svtId,
                                                                  0);
      if ( MaxLevelInfo )
      {
        v23 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
        Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
                 (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
                 (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
        klass = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                  (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                   v23,
                   (const MethodInfo_3F92A28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
        monitor = System_Linq_Enumerable__ToArray_int_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                    (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        goto LABEL_16;
      }
    }
LABEL_65:
    sub_2213CDC(MaxLevelInfo, v18);
  }
  if ( !v19 )
    goto LABEL_65;
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                                              &v111,
                                                              userSvtId,
                                                              (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
  {
    if ( !v111 )
      goto LABEL_65;
    klass = (System_Int32_array *)v111[5].klass;
    monitor = v111[5].monitor;
  }
  else
  {
    monitor = 0;
    klass = 0;
  }
LABEL_16:
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                              this,
                                                              svtId,
                                                              v20);
  if ( !MaxLevelInfo )
    goto LABEL_65;
  v26 = MaxLevelInfo;
  v27 = (System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(v26->fields._MasterName_k__BackingField));
  *titleList = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(v26->fields._MasterName_k__BackingField));
  *explanationList = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, LODWORD(v26->fields._MasterName_k__BackingField));
  *releaseStateList = v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(v26->fields._MasterName_k__BackingField));
  *lvList = v55;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  MasterName_k__BackingField = v26->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v63 = 0;
    v64 = 32;
    while ( v63 < (unsigned int)MasterName_k__BackingField )
    {
      v65 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v26->klass + v64);
      if ( v65 )
      {
        v66 = *idList;
        if ( !*idList )
          goto LABEL_65;
        if ( v63 >= LODWORD(v66->max_length) )
          break;
        v66->m_Items[v63] = v65->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v65->fields.num,
                                                                          (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v67 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_65;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v67 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v65->fields.num,
                                                                          (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v77 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v77->max_length) )
            break;
          v78 = *explanationList;
          v77->m_Items[v63] = 0;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/,
                                                                      0);
          if ( !v78 )
            goto LABEL_65;
          if ( v63 >= LODWORD(v78->max_length) )
            break;
          *(Il2CppClass **)((char *)&v78->obj.klass + v64) = (Il2CppClass *)MaxLevelInfo;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v78 + v64),
            (int32_t)MaxLevelInfo,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84);
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v85->max_length) )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v85->obj.klass + v64),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v86 = *explanationList;
            if ( !*explanationList )
              goto LABEL_65;
            if ( v63 >= LODWORD(v86->max_length) )
              break;
            v87 = System_String__Concat_75651716(
                    *(System_String_o **)((char *)&v86->obj.klass + v64),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            *(Il2CppClass **)((char *)&v86->obj.klass + v64) = (Il2CppClass *)v87;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v86 + v64),
              (int32_t)v87,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
          }
          v94 = *explanationList;
          if ( !*explanationList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v94->max_length) )
            break;
          v95 = *(System_String_o **)((char *)&v94->obj.klass + v64);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v97 = System_String__Concat_75651716(v95, v96, 0);
          *(Il2CppClass **)((char *)&v94->obj.klass + v64) = (Il2CppClass *)v97;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v94 + v64),
            (int32_t)v97,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          v104 = *lvList;
          if ( !*lvList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v104->max_length) )
            break;
          v105 = (char *)v104 + 4 * v63;
          v106 = *titleList;
          *((_DWORD *)v105 + 8) = 0;
          if ( !v106 )
            goto LABEL_65;
          if ( v63 >= LODWORD(v106->max_length) )
            break;
          v73 = (System_String_o **)((char *)v106 + v64);
          p_explanation = &explanation;
          v75 = v65;
          v76 = 0;
        }
        else
        {
          v69 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v69->max_length) )
            break;
          v69->m_Items[v63] = 1;
          v70 = *lvList;
          if ( !*lvList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v70->max_length) )
            break;
          v71 = *titleList;
          v70->m_Items[v63] = v67;
          if ( !v71 )
            goto LABEL_65;
          v72 = *explanationList;
          if ( !*explanationList )
            goto LABEL_65;
          if ( v63 >= LODWORD(v71->max_length) || v63 >= LODWORD(v72->max_length) )
            break;
          v73 = (System_String_o **)((char *)v71 + v64);
          p_explanation = (System_String_o **)((char *)v72 + v64);
          v75 = v65;
          v76 = v67;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v75, v73, p_explanation, v76, v68);
      }
      LODWORD(MasterName_k__BackingField) = v26->fields._MasterName_k__BackingField;
      ++v63;
      v64 += 8;
      if ( (__int64)v63 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_2213CE4(MaxLevelInfo);
  }
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_49637072(
        ServantAppendPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        int32_t svtId,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        int32_t saveTransform,
        const MethodInfo *method)
{
  const MethodInfo *v18; // x2
  Il2CppClass *EntityListFromSvtId; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  const char *namespaze; // x1
  Il2CppClass *v23; // x25
  System_Int32_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Boolean_array *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Int32_array *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  const MethodInfo *v59; // x4
  const char *v60; // x8
  unsigned __int64 v61; // x28
  __int64 v62; // x20
  ServantAppendPassiveSkillEntity_o *v63; // x27
  System_Int32_array *v64; // x8
  int32_t v65; // w26
  System_String_array *v66; // x8
  System_String_array *v67; // x9
  System_Boolean_array *v68; // x9
  System_Int32_array *v69; // x8
  System_Boolean_array *v70; // x8
  System_String_array *v71; // x26
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_array *v78; // x8
  System_String_array *v79; // x26
  System_String_o *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_array *v87; // x27
  System_String_o *v88; // x26
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7

  if ( (byte_59710F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59710F0 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v18);
  if ( !EntityListFromSvtId )
    goto LABEL_56;
  namespaze = EntityListFromSvtId->_1.namespaze;
  v23 = EntityListFromSvtId;
  if ( saveTransform >= 1 && !namespaze )
  {
    EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                           this,
                                           saveTransform,
                                           v21);
    if ( EntityListFromSvtId )
    {
      namespaze = EntityListFromSvtId->_1.namespaze;
      v23 = EntityListFromSvtId;
      goto LABEL_10;
    }
LABEL_56:
    sub_2213CDC(EntityListFromSvtId, v20);
  }
LABEL_10:
  v24 = (System_Int32_array *)sub_2213B20(int___TypeInfo, namespaze);
  *idList = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(v23->_1.namespaze));
  *titleList = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD(v23->_1.namespaze));
  *explanationList = v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, LODWORD(v23->_1.namespaze));
  *releaseStateList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(v23->_1.namespaze));
  *lvList = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v60 = v23->_1.namespaze;
  if ( (int)v60 >= 1 )
  {
    v61 = 0;
    v62 = 32;
    while ( v61 < (unsigned int)v60 )
    {
      v63 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v23->_1.image + v62);
      if ( v63 )
      {
        v64 = *idList;
        if ( !*idList )
          goto LABEL_56;
        if ( v61 >= LODWORD(v64->max_length) )
          break;
        v64->m_Items[v61] = v63->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v63->fields.skillId,
                                                     (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v65 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_56;
          if ( (unsigned int)EntityListFromSvtId >= LODWORD(releaseSkillLvs->max_length) )
            break;
          v65 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId];
        }
        v66 = *titleList;
        if ( !*titleList )
          goto LABEL_56;
        v67 = *explanationList;
        if ( !*explanationList )
          goto LABEL_56;
        if ( v61 >= LODWORD(v66->max_length) || v61 >= LODWORD(v67->max_length) )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v63,
          (System_String_o **)((char *)v66 + v62),
          (System_String_o **)((char *)v67 + v62),
          v65,
          v59);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v63->fields.skillId,
                                                     (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v70 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v70->max_length) )
            break;
          v71 = *explanationList;
          v70->m_Items[v61] = 0;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/, 0);
          if ( !v71 )
            goto LABEL_56;
          if ( v61 >= LODWORD(v71->max_length) )
            break;
          *(Il2CppClass **)((char *)&v71->obj.klass + v62) = EntityListFromSvtId;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v71 + v62),
            (int32_t)EntityListFromSvtId,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
          v78 = *explanationList;
          if ( !*explanationList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v78->max_length) )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v78->obj.klass + v62),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v79 = *explanationList;
            if ( !*explanationList )
              goto LABEL_56;
            if ( v61 >= LODWORD(v79->max_length) )
              break;
            v80 = System_String__Concat_75651716(
                    *(System_String_o **)((char *)&v79->obj.klass + v62),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            *(Il2CppClass **)((char *)&v79->obj.klass + v62) = (Il2CppClass *)v80;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v79 + v62),
              (int32_t)v80,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86);
          }
          v87 = *explanationList;
          if ( !*explanationList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v87->max_length) )
            break;
          v88 = *(System_String_o **)((char *)&v87->obj.klass + v62);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v90 = System_String__Concat_75651716(v88, v89, 0);
          *(Il2CppClass **)((char *)&v87->obj.klass + v62) = (Il2CppClass *)v90;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v87 + v62),
            (int32_t)v90,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          v69 = *lvList;
          if ( !*lvList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v69->max_length) )
            break;
          v65 = 0;
        }
        else
        {
          v68 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v68->max_length) )
            break;
          v68->m_Items[v61] = 1;
          v69 = *lvList;
          if ( !*lvList )
            goto LABEL_56;
          if ( v61 >= LODWORD(v69->max_length) )
            break;
        }
        v69->m_Items[v61] = v65;
      }
      LODWORD(v60) = v23->_1.namespaze;
      ++v61;
      v62 += 8;
      if ( (__int64)v61 >= (int)v60 )
        return;
    }
    sub_2213CE4(EntityListFromSvtId);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantAppendPassiveSkillEntity_o *ServantAppendPassiveSkillMaster__GetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59710E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_59710E7 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


ServantAppendPassiveSkillEntity_o *ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
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
  if ( (byte_59710ED & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_59710ED = 1;
  }
  value = 0;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0;
  if ( !value )
LABEL_9:
    sub_2213CDC(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_2213CE4(TempKey);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


ServantAppendPassiveSkillEntity_array *ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 v7; // x1
  void *list; // x0
  int32_t v9; // w23
  _DWORD *v10; // x24
  const MethodInfo *v11; // x3
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_59710EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    byte_59710EC = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  v9 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          goto LABEL_17;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *((_DWORD *)list + 5),
               (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v10[4], v10[5], v11);
          if ( !v6 )
            goto LABEL_17;
          items = v6->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_17;
          size = v6->fields._size;
          v21 = (Il2CppClass *)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v22[4] = v21;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
          }
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v6 )
LABEL_17:
    sub_2213CDC(list, v7);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v6,
                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *ServantAppendPassiveSkillMaster__GetSkillData(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59710EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&SvtUseSkillData_TypeInfo);
    byte_59710EF = 1;
  }
  v5 = sub_2213CCC(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list->fields.items) == svtId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          klass_high = HIDWORD(list[1].klass);
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              klass_high,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = klass_high;
          }
          if ( !v10 )
            break;
          v16 = v10->fields._items;
          klass_high = HIDWORD(v12->fields.items);
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !v16 )
            break;
          v18 = v10->fields._size;
          if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              klass_high,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = v18 + 1;
            v16->m_Items[v18] = klass_high;
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_20;
    }
LABEL_24:
    sub_2213CDC(list, klass_high);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v9,
                                                             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = list;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)list, v19, v20, v21, v22, v23, v24);
  if ( !v10 )
    goto LABEL_24;
  v25 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v5 + 32) = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v25, v26, v27, v28, v29, v30, v31);
  return (SvtUseSkillData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool ServantAppendPassiveSkillMaster__TryGetEntity(
        ServantAppendPassiveSkillMaster_o *this,
        ServantAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59710E8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_59710E8 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool ServantAppendPassiveSkillMaster__preProcess(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *v7; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__o *v12; // x21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  __int64 naturalAligment; // x9
  Il2CppObject *TempKey; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x0
  Il2CppClass *v35; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  void **v38; // x8
  ServantAppendPassiveSkillMaster_o *v39; // x24
  System_Collections_Generic_IEnumerator_T__o *v40; // x22
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  ServantAppendPassiveSkillMaster___c_c *v46; // x0
  Il2CppObject *v47; // x21
  Il2CppObject *key; // x22
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v51; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_Dictionary_object__object__o *v59; // x23
  System_Object_array *v60; // x0
  __int64 v61; // x1
  int32_t monitor; // w2
  int v63; // w8
  ServantAppendPassiveSkillMaster_o *v65; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v69; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_59710EB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_2213A60(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_2213A60(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_2213A60(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_59710EB = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v69 = 0;
  memset(&v67, 0, sizeof(v67));
  if ( !listCache )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)listCache,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v65 = this;
  if ( !listCache )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  v69 = Enumerator;
  v66.fields._dictionary = 0;
  *(_QWORD *)&v66.fields._version = &v69;
  if ( !Enumerator )
LABEL_33:
    sub_2213CDC(Enumerator, v6);
  v7 = Enumerator;
  while ( 1 )
  {
    klass = v7->klass;
    v9 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v69;
    if ( !v69 )
      sub_2213CDC(listCache, method);
    v13 = v69->klass;
    v14 = *(unsigned __int16 *)&v69->klass->_2.rank;
    if ( *(_WORD *)&v69->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_224BC3C(v69, System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    v21 = (Il2CppObject *)v17;
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = ServantAppendPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_221405C(v17, ServantAppendPassiveSkillEntity_TypeInfo, v19);
LABEL_57:
      sub_2213CDC(v34, v26);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v17,
                                *(_DWORD *)(v17 + 16),
                                *(_DWORD *)(v17 + 20),
                                v20);
    if ( !v4 )
      sub_2213CDC(TempKey, v24);
    v25 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            TempKey,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v33;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v33,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v34 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_57;
    v35 = value[1].klass;
    v36 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v35 )
      goto LABEL_57;
    size = v34->fields._size;
    if ( (unsigned int)size >= LODWORD(v35->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v21,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->_1.image + size;
      v34->fields._size = size + 1;
      v38[4] = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v21, v27, v28, v29, v30, v31, v32);
    }
    v7 = v69;
    if ( !v69 )
      goto LABEL_33;
  }
  v39 = v65;
  v40 = v69;
  if ( v69 )
  {
    v41 = v69->klass;
    v42 = *(unsigned __int16 *)&v69->klass->_2.rank;
    if ( *(_WORD *)&v69->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_39;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_39:
      v44 = sub_224BC3C(v69, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                  v40,
                  *(_QWORD *)(v44 + 8));
  }
  if ( !v4 )
LABEL_63:
    sub_2213CDC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v66,
    v4,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v67 = v66;
  v66.fields._dictionary = 0;
  *(_QWORD *)&v66.fields._version = &v67;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v67,
            (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__) )
  {
    v46 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v67.fields._current.fields.key;
    v47 = v67.fields._current.fields.value;
    if ( !*(&ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo, v45);
      v46 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v46->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v46, v45);
        static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v51, Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, 0);
      v52 = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      v52->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__5_0, (int32_t)_9__5_0, v53, v54, v55, v56, v57, v58);
      v39 = v65;
    }
    if ( !v47 )
      sub_2213CDC(v46, v45);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v47,
      _9__5_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v59 = (System_Collections_Generic_Dictionary_object__object__o *)v39->fields.listCache;
    v60 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v47,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v59 )
      sub_2213CDC(v60, v61);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v59,
      key,
      &v60->obj,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v47[1].monitor;
    v63 = HIDWORD(v47[1].monitor) + 1;
    LODWORD(v47[1].monitor) = 0;
    HIDWORD(v47[1].monitor) = v63;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v47[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v67,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59710F1 & 1) == 0 )
  {
    sub_2213A60(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_59710F1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantAppendPassiveSkillMaster___c___ctor(ServantAppendPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantAppendPassiveSkillMaster___c___preProcess_b__5_0(
        ServantAppendPassiveSkillMaster___c_o *this,
        ServantAppendPassiveSkillEntity_o *a,
        ServantAppendPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}