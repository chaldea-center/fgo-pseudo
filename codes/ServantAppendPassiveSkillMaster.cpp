void ServantAppendPassiveSkillMaster___ctor(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEEEB4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_4CEEEB4 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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

  v7 = num;
  v8 = svtId;
  if ( (byte_4CEEEB5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1451/*":"*/);
    byte_4CEEEB5 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_64215176(v4, (System_String_o *)StringLiteral_1451/*":"*/, v5, 0);
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
  Il2CppObject *Master_object; // x24
  UserServantAppendPassiveSkillLvMaster_o *MaxLevelInfo; // x0
  __int64 v17; // x1
  UserServantAppendPassiveSkillLvMaster_o *v18; // x29
  const MethodInfo *v19; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v22; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  UserServantAppendPassiveSkillLvMaster_o *v25; // x26
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_String_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Boolean_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Int32_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_String_o *MasterName_k__BackingField; // x8
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
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_String_array *v84; // x8
  System_String_array *v85; // x8
  GrandQuestFolderBoardItem_o *v86; // x28
  System_String_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  System_String_array *v94; // x20
  System_String_o *v95; // x28
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  System_Int32_array *v104; // x8
  System_String_array *v105; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v110; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CEEEB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&bool___TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_3741/*"COND_TYPE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_3729/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEEEB9 = 1;
  }
  v110 = 0;
  entity = 0;
  explanation = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v18 = MaxLevelInfo;
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                              (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                              &entity,
                                                              userId,
                                                              svtId,
                                                              0);
  monitor = 0;
  klass = 0;
  if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
                                                                  v18,
                                                                  userId,
                                                                  svtId,
                                                                  0);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v22 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_347E91C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v22,
                 (const MethodInfo_347EA6C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                                                  &v110,
                                                                  userSvtId,
                                                                  (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
      {
        if ( !v110 )
          goto LABEL_64;
        klass = (System_Int32_array *)v110[5].klass;
        monitor = v110[5].monitor;
      }
      else
      {
        monitor = 0;
        klass = 0;
      }
    }
  }
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                              this,
                                                              svtId,
                                                              v19);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1C7BD40(MaxLevelInfo, v17);
  v25 = MaxLevelInfo;
  v26 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v26;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)idList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_String_array *)sub_1C7BB90(string___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *titleList = v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_String_array *)sub_1C7BB90(string___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *explanationList = v40;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Boolean_array *)sub_1C7BB90(bool___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *releaseStateList = v47;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, LODWORD(v25->fields._MasterName_k__BackingField));
  *lvList = v54;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  MasterName_k__BackingField = v25->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v62 = 0;
    v63 = 32;
    while ( v62 < (unsigned int)MasterName_k__BackingField )
    {
      v64 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v25->klass + v63);
      if ( v64 )
      {
        v65 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v62 >= LODWORD(v65->max_length) )
          break;
        v65->m_Items[v62] = v64->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v64->fields.num,
                                                                          (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
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
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v64->fields.num,
                                                                          (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v76 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v76->max_length) )
            break;
          v76->m_Items[v62] = 0;
          v77 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3741/*"COND_TYPE_TITLE"*/,
                                                                      0);
          if ( !v77 )
            goto LABEL_64;
          if ( v62 >= LODWORD(v77->max_length) )
            break;
          *(Il2CppClass **)((char *)&v77->obj.klass + v63) = (Il2CppClass *)MaxLevelInfo;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)((char *)v77 + v63),
            (int32_t)MaxLevelInfo,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v84 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v84->max_length) )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v84->obj.klass + v63),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v85 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v62 >= LODWORD(v85->max_length) )
              break;
            v86 = (GrandQuestFolderBoardItem_o *)((char *)v85 + v63);
            v87 = System_String__Concat_64176912(
                    *(System_String_o **)((char *)&v85->obj.klass + v63),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v86->klass = (GrandQuestFolderBoardItem_c *)v87;
            sub_1C7BA8C(v86, (int32_t)v87, v88, v89, v90, v91, v92, v93);
          }
          v94 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v94->max_length) )
            break;
          v95 = *(System_String_o **)((char *)&v94->obj.klass + v63);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v97 = System_String__Concat_64176912(v95, v96, 0);
          *(Il2CppClass **)((char *)&v94->obj.klass + v63) = (Il2CppClass *)v97;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)((char *)v94 + v63),
            (int32_t)v97,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          v104 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v104->max_length) )
            break;
          v104->m_Items[v62] = 0;
          v105 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v105->max_length) )
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
          if ( v62 >= LODWORD(v68->max_length) )
            break;
          v68->m_Items[v62] = 1;
          v69 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v69->max_length) )
            break;
          v69->m_Items[v62] = v66;
          v70 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v71 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v62 >= LODWORD(v70->max_length) || v62 >= LODWORD(v71->max_length) )
            break;
          v72 = (System_String_o **)((char *)v70 + v63);
          p_explanation = (System_String_o **)((char *)v71 + v63);
          v74 = v64;
          v75 = v66;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v74, v72, p_explanation, v75, v67);
      }
      LODWORD(MasterName_k__BackingField) = v25->fields._MasterName_k__BackingField;
      ++v62;
      v63 += 8;
      if ( (__int64)v62 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_1C7BD48(MaxLevelInfo);
  }
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_43168668(
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
  Il2CppClass *EntityListFromSvtId; // x0
  __int64 v19; // x1
  Il2CppClass *v20; // x25
  System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_String_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Boolean_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Int32_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  const MethodInfo *v56; // x4
  const char *namespaze; // x8
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
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  System_String_array *v75; // x8
  System_String_array *v76; // x8
  GrandQuestFolderBoardItem_o *v77; // x26
  System_String_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  System_String_array *v85; // x27
  System_String_o *v86; // x26
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7

  if ( (byte_4CEEEBB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&bool___TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_3741/*"COND_TYPE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_3729/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEEEBB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v17);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1C7BD40(EntityListFromSvtId, v19);
  v20 = EntityListFromSvtId;
  v21 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, LODWORD(EntityListFromSvtId->_1.namespaze));
  *idList = v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)idList, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_String_array *)sub_1C7BB90(string___TypeInfo, LODWORD(v20->_1.namespaze));
  *titleList = v28;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_String_array *)sub_1C7BB90(string___TypeInfo, LODWORD(v20->_1.namespaze));
  *explanationList = v35;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Boolean_array *)sub_1C7BB90(bool___TypeInfo, LODWORD(v20->_1.namespaze));
  *releaseStateList = v42;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, LODWORD(v20->_1.namespaze));
  *lvList = v49;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  namespaze = v20->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v58 = 0;
    v59 = 32;
    while ( v58 < (unsigned int)namespaze )
    {
      v60 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v20->_1.image + v59);
      if ( v60 )
      {
        v61 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v58 >= LODWORD(v61->max_length) )
          break;
        v61->m_Items[v58] = v60->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v60->fields.skillId,
                                                     (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v62 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= LODWORD(releaseSkillLvs->max_length) )
            break;
          v62 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId];
        }
        v63 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v64 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v58 >= LODWORD(v63->max_length) || v58 >= LODWORD(v64->max_length) )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v60,
          (System_String_o **)((char *)v63 + v59),
          (System_String_o **)((char *)v64 + v59),
          v62,
          v56);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v60->fields.skillId,
                                                     (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v67 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v67->max_length) )
            break;
          v67->m_Items[v58] = 0;
          v68 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COND_TYPE_TITLE"*/, 0);
          if ( !v68 )
            goto LABEL_52;
          if ( v58 >= LODWORD(v68->max_length) )
            break;
          *(Il2CppClass **)((char *)&v68->obj.klass + v59) = EntityListFromSvtId;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)((char *)v68 + v59),
            (int32_t)EntityListFromSvtId,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
          v75 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v75->max_length) )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v75->obj.klass + v59),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v76 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v58 >= LODWORD(v76->max_length) )
              break;
            v77 = (GrandQuestFolderBoardItem_o *)((char *)v76 + v59);
            v78 = System_String__Concat_64176912(
                    *(System_String_o **)((char *)&v76->obj.klass + v59),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v77->klass = (GrandQuestFolderBoardItem_c *)v78;
            sub_1C7BA8C(v77, (int32_t)v78, v79, v80, v81, v82, v83, v84);
          }
          v85 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v85->max_length) )
            break;
          v86 = *(System_String_o **)((char *)&v85->obj.klass + v59);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v88 = System_String__Concat_64176912(v86, v87, 0);
          *(Il2CppClass **)((char *)&v85->obj.klass + v59) = (Il2CppClass *)v88;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)v85 + v59), (int32_t)v88, v89, v90, v91, v92, v93, v94);
          v66 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v66->max_length) )
            break;
          v62 = 0;
        }
        else
        {
          v65 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v65->max_length) )
            break;
          v65->m_Items[v58] = 1;
          v66 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v58 >= LODWORD(v66->max_length) )
            break;
        }
        v66->m_Items[v58] = v62;
      }
      LODWORD(namespaze) = v20->_1.namespaze;
      ++v58;
      v59 += 8;
      if ( (__int64)v58 >= (int)namespaze )
        return;
    }
    sub_1C7BD48(EntityListFromSvtId);
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

  if ( (byte_4CEEEB2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4CEEEB2 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  if ( (byte_4CEEEB8 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_4CEEEB8 = 1;
  }
  value = 0;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0;
  if ( !value )
LABEL_9:
    sub_1C7BD40(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1C7BD48(TempKey);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4CEEEB7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    byte_4CEEEB7 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  v9 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          goto LABEL_20;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *((_DWORD *)list + 5),
               (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v10[4], v10[5], v11);
          if ( !v6 )
            goto LABEL_20;
          items = v6->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v6->fields._size;
          v21 = (Il2CppClass *)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v22[4] = v21;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
          }
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v6 )
LABEL_20:
    sub_1C7BD40(list, v7);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v6,
                                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CEEEBA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&SvtUseSkillData_TypeInfo);
    byte_4CEEEBA = 1;
  }
  v5 = sub_1C7BD34(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              klass_high,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = klass_high;
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
          if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              klass_high,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
    sub_1C7BD40(list, klass_high);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v9,
                                                             (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = list;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)list, v19, v20, v21, v22, v23, v24);
  if ( !v10 )
    goto LABEL_24;
  v25 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v5 + 32) = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v25, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_4CEEEB3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4CEEEB3 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool ServantAppendPassiveSkillMaster__preProcess(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *TempKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v45; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_Dictionary_object__object__o *v53; // x23
  System_Object_array *v54; // x0
  __int64 v55; // x1
  int32_t monitor; // w2
  int v57; // w8
  ServantAppendPassiveSkillMaster_o *v59; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CEEEB6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
    sub_1C7BAE8(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C7BAE8(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_1C7BAE8(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_1C7BAE8(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4CEEEB6 = 1;
  }
  value = 0;
  memset(&v61, 0, sizeof(v61));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v59 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v5);
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
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C7BD40(0, v16);
    naturalAligment = ServantAppendPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1C7C0DC(v15);
LABEL_51:
      sub_1C7BD40(v31, v23);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v15,
                                *(_DWORD *)(v15 + 16),
                                *(_DWORD *)(v15 + 20),
                                v17);
    if ( !v4 )
      sub_1C7BD40(TempKey, v21);
    v22 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            TempKey,
            &value,
            (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v30;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v30,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v32 )
      sub_1C7BD40(v31, v23);
    size = v31->fields._size;
    if ( (unsigned int)size >= LODWORD(v32->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v18,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->_1.image + size;
      v31->fields._size = size + 1;
      v35[4] = v18;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v18, v24, v25, v26, v27, v28, v29);
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_34:
    v39 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v39 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C7BD40(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v60,
    v4,
    (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v61,
            (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v40 )
      break;
    v42 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    current = v61.fields._current;
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
      v45 = (Il2CppObject *)v42->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v45, Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    if ( !current.fields.value )
      sub_1C7BD40(v40, v41);
    System_Collections_Generic_List_object___Sort_58984640(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v53 = (System_Collections_Generic_Dictionary_object__object__o *)v59->fields.listCache;
    v54 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v53 )
      sub_1C7BD40(v54, v55);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v53,
      current.fields.key,
      &v54->obj,
      (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v57 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v57;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v61,
    (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEEBC & 1) == 0 )
  {
    sub_1C7BAE8(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4CEEEBC = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}