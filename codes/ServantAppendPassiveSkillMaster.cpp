void ServantAppendPassiveSkillMaster___ctor(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C437EC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
    byte_4C437EC = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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
  if ( (byte_4C437ED & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C437ED = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63599904(v4, (System_String_o *)StringLiteral_1457/*":"*/, v5, 0);
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
  UserServantAppendPassiveSkillLvMaster_o *v17; // x29
  const MethodInfo *v18; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v21; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  UserServantAppendPassiveSkillLvMaster_o *v24; // x26
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Boolean_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v41; // x29
  __int64 v42; // x19
  ServantAppendPassiveSkillEntity_o *v43; // x27
  System_Int32_array *v44; // x8
  int v45; // w28
  const MethodInfo *v46; // x4
  System_Boolean_array *v47; // x8
  System_Int32_array *v48; // x8
  System_String_array *v49; // x8
  System_String_array *v50; // x9
  System_String_o **v51; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v53; // x0
  int32_t v54; // w3
  System_Boolean_array *v55; // x8
  System_String_array *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_String_array *v59; // x8
  System_String_array *v60; // x8
  CGThumbnailListItem_o *v61; // x28
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_String_array *v65; // x20
  System_String_o *v66; // x28
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Int32_array *v71; // x8
  System_String_array *v72; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v77; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C437F1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_3735/*"COND_TYPE_TITLE"*/);
    sub_1C37058(&StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C437F1 = 1;
  }
  v77 = 0;
  entity = 0;
  explanation = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v17 = MaxLevelInfo;
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
    if ( !v17 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(
                                                                  v17,
                                                                  userId,
                                                                  svtId,
                                                                  0);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v21 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_33F1790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v21,
                 (const MethodInfo_33F18E0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                                  &v77,
                                                                  userSvtId,
                                                                  (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
      {
        if ( !v77 )
          goto LABEL_64;
        klass = (System_Int32_array *)v77[5].klass;
        monitor = v77[5].monitor;
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
                                                              v18);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1C372B4(MaxLevelInfo);
  v24 = MaxLevelInfo;
  v25 = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(MaxLevelInfo->fields._MasterName_k__BackingField));
  *idList = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)idList, (int32_t)v25, v26, v27);
  v28 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(v24->fields._MasterName_k__BackingField));
  *titleList = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)titleList, (int32_t)v28, v29, v30);
  v31 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(v24->fields._MasterName_k__BackingField));
  *explanationList = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)explanationList, (int32_t)v31, v32, v33);
  v34 = (System_Boolean_array *)sub_1C37100(bool___TypeInfo, LODWORD(v24->fields._MasterName_k__BackingField));
  *releaseStateList = v34;
  sub_1C36FFC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v34, v35, v36);
  v37 = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(v24->fields._MasterName_k__BackingField));
  *lvList = v37;
  sub_1C36FFC((CGThumbnailListItem_o *)lvList, (int32_t)v37, v38, v39);
  MasterName_k__BackingField = v24->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v41 = 0;
    v42 = 32;
    while ( v41 < (unsigned int)MasterName_k__BackingField )
    {
      v43 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v24->klass + v42);
      if ( v43 )
      {
        v44 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v41 >= LODWORD(v44->max_length) )
          break;
        v44->m_Items[v41] = v43->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          klass,
                                                                          v43->fields.num,
                                                                          (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v45 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v45 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_Array__IndexOf_int_(
                                                                          entity->fields.unlockNums,
                                                                          v43->fields.num,
                                                                          (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)MaxLevelInfo & 0x80000000) != 0) )
        {
          v55 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v55->max_length) )
            break;
          v55->m_Items[v41] = 0;
          v56 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3735/*"COND_TYPE_TITLE"*/,
                                                                      0);
          if ( !v56 )
            goto LABEL_64;
          if ( v41 >= LODWORD(v56->max_length) )
            break;
          *(Il2CppClass **)((char *)&v56->obj.klass + v42) = (Il2CppClass *)MaxLevelInfo;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v56 + v42), (int32_t)MaxLevelInfo, v57, v58);
          v59 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v59->max_length) )
            break;
          MaxLevelInfo = (UserServantAppendPassiveSkillLvMaster_o *)System_String__op_Inequality(
                                                                      *(System_String_o **)((char *)&v59->obj.klass + v42),
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
          if ( ((unsigned __int8)MaxLevelInfo & 1) != 0 )
          {
            v60 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v41 >= LODWORD(v60->max_length) )
              break;
            v61 = (CGThumbnailListItem_o *)((char *)v60 + v42);
            v62 = System_String__Concat_63561656(
                    *(System_String_o **)((char *)&v60->obj.klass + v42),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v61->klass = (CGThumbnailListItem_c *)v62;
            sub_1C36FFC(v61, (int32_t)v62, v63, v64);
          }
          v65 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v65->max_length) )
            break;
          v66 = *(System_String_o **)((char *)&v65->obj.klass + v42);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v68 = System_String__Concat_63561656(v66, v67, 0);
          *(Il2CppClass **)((char *)&v65->obj.klass + v42) = (Il2CppClass *)v68;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v65 + v42), (int32_t)v68, v69, v70);
          v71 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v71->max_length) )
            break;
          v71->m_Items[v41] = 0;
          v72 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v72->max_length) )
            break;
          v51 = (System_String_o **)((char *)v72 + v42);
          p_explanation = &explanation;
          v53 = v43;
          v54 = 0;
        }
        else
        {
          v47 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v47->max_length) )
            break;
          v47->m_Items[v41] = 1;
          v48 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v48->max_length) )
            break;
          v48->m_Items[v41] = v45;
          v49 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v50 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v41 >= LODWORD(v49->max_length) || v41 >= LODWORD(v50->max_length) )
            break;
          v51 = (System_String_o **)((char *)v49 + v42);
          p_explanation = (System_String_o **)((char *)v50 + v42);
          v53 = v43;
          v54 = v45;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v53, v51, p_explanation, v54, v46);
      }
      LODWORD(MasterName_k__BackingField) = v24->fields._MasterName_k__BackingField;
      ++v41;
      v42 += 8;
      if ( (__int64)v41 >= (int)MasterName_k__BackingField )
        return;
    }
    sub_1C372BC(MaxLevelInfo);
  }
}


void ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_42609416(
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
  Il2CppClass *v19; // x25
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Boolean_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x4
  const char *namespaze; // x8
  unsigned __int64 v37; // x28
  __int64 v38; // x20
  ServantAppendPassiveSkillEntity_o *v39; // x26
  System_Int32_array *v40; // x8
  int32_t v41; // w27
  System_String_array *v42; // x8
  System_String_array *v43; // x9
  System_Boolean_array *v44; // x8
  System_Int32_array *v45; // x8
  System_Boolean_array *v46; // x8
  System_String_array *v47; // x26
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_array *v50; // x8
  System_String_array *v51; // x8
  CGThumbnailListItem_o *v52; // x26
  System_String_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_array *v56; // x27
  System_String_o *v57; // x26
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3

  if ( (byte_4C437F3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_3735/*"COND_TYPE_TITLE"*/);
    sub_1C37058(&StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C437F3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (Il2CppClass *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v17);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1C372B4(EntityListFromSvtId);
  v19 = EntityListFromSvtId;
  v20 = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(EntityListFromSvtId->_1.namespaze));
  *idList = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)idList, (int32_t)v20, v21, v22);
  v23 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(v19->_1.namespaze));
  *titleList = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)titleList, (int32_t)v23, v24, v25);
  v26 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(v19->_1.namespaze));
  *explanationList = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)explanationList, (int32_t)v26, v27, v28);
  v29 = (System_Boolean_array *)sub_1C37100(bool___TypeInfo, LODWORD(v19->_1.namespaze));
  *releaseStateList = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v29, v30, v31);
  v32 = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(v19->_1.namespaze));
  *lvList = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)lvList, (int32_t)v32, v33, v34);
  namespaze = v19->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v37 = 0;
    v38 = 32;
    while ( v37 < (unsigned int)namespaze )
    {
      v39 = *(ServantAppendPassiveSkillEntity_o **)((char *)&v19->_1.image + v38);
      if ( v39 )
      {
        v40 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v37 >= LODWORD(v40->max_length) )
          break;
        v40->m_Items[v37] = v39->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v39->fields.skillId,
                                                     (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v41 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= LODWORD(releaseSkillLvs->max_length) )
            break;
          v41 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId];
        }
        v42 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v43 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v37 >= LODWORD(v42->max_length) || v37 >= LODWORD(v43->max_length) )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v39,
          (System_String_o **)((char *)v42 + v38),
          (System_String_o **)((char *)v43 + v38),
          v41,
          v35);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = (Il2CppClass *)System_Array__IndexOf_int_(
                                                     releaseSkillIds,
                                                     v39->fields.skillId,
                                                     (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___),
              ((unsigned int)EntityListFromSvtId & 0x80000000) != 0) )
        {
          v46 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v46->max_length) )
            break;
          v46->m_Items[v37] = 0;
          v47 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (Il2CppClass *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COND_TYPE_TITLE"*/, 0);
          if ( !v47 )
            goto LABEL_52;
          if ( v37 >= LODWORD(v47->max_length) )
            break;
          *(Il2CppClass **)((char *)&v47->obj.klass + v38) = EntityListFromSvtId;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v47 + v38), (int32_t)EntityListFromSvtId, v48, v49);
          v50 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v50->max_length) )
            break;
          EntityListFromSvtId = (Il2CppClass *)System_String__op_Inequality(
                                                 *(System_String_o **)((char *)&v50->obj.klass + v38),
                                                 (System_String_o *)StringLiteral_1/*""*/,
                                                 0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v51 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v37 >= LODWORD(v51->max_length) )
              break;
            v52 = (CGThumbnailListItem_o *)((char *)v51 + v38);
            v53 = System_String__Concat_63561656(
                    *(System_String_o **)((char *)&v51->obj.klass + v38),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            v52->klass = (CGThumbnailListItem_c *)v53;
            sub_1C36FFC(v52, (int32_t)v53, v54, v55);
          }
          v56 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v56->max_length) )
            break;
          v57 = *(System_String_o **)((char *)&v56->obj.klass + v38);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v59 = System_String__Concat_63561656(v57, v58, 0);
          *(Il2CppClass **)((char *)&v56->obj.klass + v38) = (Il2CppClass *)v59;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v56 + v38), (int32_t)v59, v60, v61);
          v45 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v45->max_length) )
            break;
          v41 = 0;
        }
        else
        {
          v44 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v44->max_length) )
            break;
          v44->m_Items[v37] = 1;
          v45 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v37 >= LODWORD(v45->max_length) )
            break;
        }
        v45->m_Items[v37] = v41;
      }
      LODWORD(namespaze) = v19->_1.namespaze;
      ++v37;
      v38 += 8;
      if ( (__int64)v37 >= (int)namespaze )
        return;
    }
    sub_1C372BC(EntityListFromSvtId);
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

  if ( (byte_4C437EA & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4C437EA = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
}


ServantAppendPassiveSkillEntity_o *ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantAppendPassiveSkillMaster_o *v6; // x20
  System_String_o *TempKey; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C437F0 & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
    byte_4C437F0 = 1;
  }
  value = 0;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0;
  if ( !value )
LABEL_9:
    sub_1C372B4(TempKey);
  if ( !LODWORD(value[1].monitor) )
    sub_1C372BC(TempKey);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
}


ServantAppendPassiveSkillEntity_array *ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  void *list; // x0
  int32_t v8; // w23
  _DWORD *v9; // x24
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4C437EF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    byte_4C437EF = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    if ( list )
    {
      v9 = list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          goto LABEL_20;
        if ( System_Collections_Generic_HashSet_int___Add(
               v5,
               *((_DWORD *)list + 5),
               (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = ServantAppendPassiveSkillMaster__GetEntityFromIdNum(this, v9[4], v9[5], v10);
          if ( !v6 )
            goto LABEL_20;
          items = v6->fields._items;
          v14 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v6->fields._size;
          v16 = (Il2CppClass *)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v17[4] = v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
          }
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v6 )
LABEL_20:
    sub_1C372B4(list);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v6,
                                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
}


SvtUseSkillData_o *ServantAppendPassiveSkillMaster__GetSkillData(
        ServantAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  int32_t v10; // w25
  _DWORD *v11; // x26
  int32_t v12; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int32_t v16; // w1
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C437F2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&SvtUseSkillData_TypeInfo);
    byte_4C437F2 = 1;
  }
  v5 = sub_1C372A4(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Count__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *((_DWORD *)list + 4) == svtId )
        {
          if ( !v8 )
            break;
          v12 = *((_DWORD *)list + 7);
          items = v8->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v12,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
          if ( !v9 )
            break;
          v16 = v11[5];
          v17 = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !v17 )
            break;
          v19 = v9->fields._size;
          if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v16,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = v19 + 1;
            v17->m_Items[v19] = v16;
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_20;
    }
LABEL_24:
    sub_1C372B4(list);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_24;
  list = System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = list;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)list, v20, v21);
  if ( !v9 )
    goto LABEL_24;
  v22 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v5 + 32) = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v22, v23, v24);
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

  if ( (byte_4C437EB & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4C437EB = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool ServantAppendPassiveSkillMaster__preProcess(ServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *TempKey; // x0
  Il2CppObject *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppClass *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  void **v27; // x8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _BOOL8 v32; // x0
  ServantAppendPassiveSkillMaster___c_c *v33; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v36; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_Dictionary_object__object__o *v40; // x23
  System_Object_array *v41; // x0
  int32_t monitor; // w2
  int v43; // w8
  ServantAppendPassiveSkillMaster_o *v45; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C437EE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
    sub_1C37058(&ServantAppendPassiveSkillEntity_TypeInfo);
    sub_1C37058(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__);
    sub_1C37058(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4C437EE = 1;
  }
  value = 0;
  memset(&v47, 0, sizeof(v47));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v45 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantAppendPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantAppendPassiveSkillEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v16 = (Il2CppObject *)v14;
    if ( !v14 )
      sub_1C372B4(0);
    naturalAligment = ServantAppendPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1C37574(v14);
LABEL_51:
      sub_1C372B4(v23);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v14,
                                *(_DWORD *)(v14 + 16),
                                *(_DWORD *)(v14 + 20),
                                v15);
    if ( !v4 )
      sub_1C372B4(TempKey);
    v19 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            TempKey,
            &value,
            (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v22 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v22;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v19,
        (Il2CppObject *)v22,
        (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v23 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v24 = value[1].klass;
    v25 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v24 )
      sub_1C372B4(v23);
    size = v23->fields._size;
    if ( (unsigned int)size >= LODWORD(v24->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v16,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v24->_1.image + size;
      v23->fields._size = size + 1;
      v27[4] = v16;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v20, v21);
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_34:
    v31 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v31 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C372B4(listCache);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v46,
    v4,
    (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v32 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v47,
            (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v32 )
      break;
    v33 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    current = v47.fields._current;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v33 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v33->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v36, Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v38, v39);
    }
    if ( !current.fields.value )
      sub_1C372B4(v32);
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v40 = (System_Collections_Generic_Dictionary_object__object__o *)v45->fields.listCache;
    v41 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v40 )
      sub_1C372B4(v41);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v40,
      current.fields.key,
      &v41->obj,
      (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v43 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v43;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v47,
    (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C437F4 & 1) == 0 )
  {
    sub_1C37058(&ServantAppendPassiveSkillMaster___c_TypeInfo);
    byte_4C437F4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}