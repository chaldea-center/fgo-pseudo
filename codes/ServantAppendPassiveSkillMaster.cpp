void __fastcall ServantAppendPassiveSkillMaster___ctor(
        ServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B37806 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__,
      method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo, v4);
    byte_4B37806 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____o *)v5;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    368,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string___ctor__);
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
  if ( (byte_4B37807 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1541/*":"*/, *(_QWORD *)&svtId);
    byte_4B37807 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62536508(v4, (System_String_o *)StringLiteral_1541/*":"*/, v5, 0LL);
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
  Il2CppObject *Master_object; // x24
  int64_t MaxLevelInfo; // x0
  __int64 v32; // x1
  UserServantAppendPassiveSkillLvMaster_o *v33; // x29
  const MethodInfo *v34; // x2
  _DWORD *monitor; // x25
  System_Int32_array *klass; // x24
  System_Collections_Generic_Dictionary_int__int__o *v37; // x25
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int64_t v40; // x26
  System_Int32_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_array *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_String_array *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Boolean_array *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Int32_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x8
  unsigned __int64 v77; // x29
  __int64 v78; // x19
  ServantAppendPassiveSkillEntity_o *v79; // x27
  System_Int32_array *v80; // x8
  int v81; // w28
  const MethodInfo *v82; // x4
  System_Boolean_array *v83; // x8
  System_Int32_array *v84; // x8
  System_String_array *v85; // x8
  System_String_array *v86; // x9
  System_String_o **v87; // x1
  System_String_o **p_explanation; // x2
  ServantAppendPassiveSkillEntity_o *v89; // x0
  int32_t v90; // w3
  System_Boolean_array *v91; // x8
  System_String_array *v92; // x20
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_String_array *v99; // x8
  System_String_array *v100; // x8
  PartyOrganizationUtility_o *v101; // x28
  System_String_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_String_array *v109; // x20
  System_String_o *v110; // x28
  System_String_o *v111; // x0
  System_String_o *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  System_Int32_array *v119; // x8
  System_String_array *v120; // x8
  System_String_o *explanation; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v125; // [xsp+20h] [xbp-70h] BYREF
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B3780B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_IndexOf_int___, idList);
    sub_1BD3458(&bool___TypeInfo, v15);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v16);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v17);
    sub_1BD3458(&DataManager_TypeInfo, v18);
    sub_1BD3458(
      &Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__,
      v19);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v20);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v21);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_int___, v22);
    sub_1BD3458(&int___TypeInfo, v23);
    sub_1BD3458(&LocalizationManager_TypeInfo, v24);
    sub_1BD3458(&string___TypeInfo, v25);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v26);
    sub_1BD3458(&StringLiteral_3841/*"COND_TYPE_TITLE"*/, v27);
    sub_1BD3458(&StringLiteral_3829/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v28);
    sub_1BD3458(&StringLiteral_1/*""*/, v29);
    byte_4B3780B = 1;
  }
  v125 = 0LL;
  entity = 0LL;
  explanation = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  MaxLevelInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v33 = (UserServantAppendPassiveSkillLvMaster_o *)MaxLevelInfo;
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
    if ( !v33 )
      goto LABEL_64;
    if ( userSvtId < 1 )
    {
      MaxLevelInfo = (int64_t)UserServantAppendPassiveSkillLvMaster__GetMaxLevelInfo(v33, userId, svtId, 0LL);
      if ( !MaxLevelInfo )
        goto LABEL_64;
      v37 = (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo;
      Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
               (System_Collections_Generic_Dictionary_int__int__o *)MaxLevelInfo,
               (const MethodInfo_321BFE8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
      klass = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v37,
                 (const MethodInfo_321C138 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      monitor = System_Linq_Enumerable__ToArray_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                  (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    else
    {
      MaxLevelInfo = DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                       &v125,
                       userSvtId,
                       (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantAppendPassiveSkillLvMaster__UserServantAppendPassiveSkillLvEntity__long__TryGetEntity__);
      if ( (MaxLevelInfo & 1) != 0 )
      {
        if ( !v125 )
          goto LABEL_64;
        klass = (System_Int32_array *)v125[5].klass;
        monitor = v125[5].monitor;
      }
      else
      {
        monitor = 0LL;
        klass = 0LL;
      }
    }
  }
  MaxLevelInfo = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v34);
  if ( !MaxLevelInfo )
LABEL_64:
    sub_1BD36B4(MaxLevelInfo, v32);
  v40 = MaxLevelInfo;
  v41 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, *(unsigned int *)(MaxLevelInfo + 24));
  *idList = v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)idList, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_String_array *)sub_1BD3500(string___TypeInfo, *(unsigned int *)(v40 + 24));
  *titleList = v48;
  sub_1BD33FC((PartyOrganizationUtility_o *)titleList, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_String_array *)sub_1BD3500(string___TypeInfo, *(unsigned int *)(v40 + 24));
  *explanationList = v55;
  sub_1BD33FC((PartyOrganizationUtility_o *)explanationList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v62 = (System_Boolean_array *)sub_1BD3500(bool___TypeInfo, *(unsigned int *)(v40 + 24));
  *releaseStateList = v62;
  sub_1BD33FC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, *(unsigned int *)(v40 + 24));
  *lvList = v69;
  sub_1BD33FC((PartyOrganizationUtility_o *)lvList, (int64_t)v69, v70, v71, v72, v73, v74, v75);
  v76 = *(_QWORD *)(v40 + 24);
  if ( (int)v76 >= 1 )
  {
    v77 = 0LL;
    v78 = 32LL;
    while ( v77 < (unsigned int)v76 )
    {
      v79 = *(ServantAppendPassiveSkillEntity_o **)(v40 + v78);
      if ( v79 )
      {
        v80 = *idList;
        if ( !*idList )
          goto LABEL_64;
        if ( v77 >= v80->max_length )
          break;
        v80->m_Items[v77 + 1] = v79->fields.skillId;
        if ( !klass
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               klass,
                               v79->fields.num,
                               (const MethodInfo_302DFD8 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v81 = 1;
        }
        else
        {
          if ( !monitor )
            goto LABEL_64;
          if ( (unsigned int)MaxLevelInfo >= monitor[6] )
            break;
          v81 = monitor[(unsigned int)MaxLevelInfo + 8];
        }
        if ( !entity
          || (MaxLevelInfo = System_Array__IndexOf_int_(
                               entity->fields.unlockNums,
                               v79->fields.num,
                               (const MethodInfo_302DFD8 *)Method_System_Array_IndexOf_int___),
              (MaxLevelInfo & 0x80000000) != 0) )
        {
          v91 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v77 >= v91->max_length )
            break;
          v91->m_Items[v77 + 4] = 0;
          v92 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          MaxLevelInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3841/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v92 )
            goto LABEL_64;
          if ( v77 >= v92->max_length )
            break;
          *(Il2CppClass **)((char *)&v92->obj.klass + v78) = (Il2CppClass *)MaxLevelInfo;
          sub_1BD33FC((PartyOrganizationUtility_o *)((char *)v92 + v78), MaxLevelInfo, v93, v94, v95, v96, v97, v98);
          v99 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v77 >= v99->max_length )
            break;
          MaxLevelInfo = System_String__op_Inequality(
                           *(System_String_o **)((char *)&v99->obj.klass + v78),
                           (System_String_o *)StringLiteral_1/*""*/,
                           0LL);
          if ( (MaxLevelInfo & 1) != 0 )
          {
            v100 = *explanationList;
            if ( !*explanationList )
              goto LABEL_64;
            if ( v77 >= v100->max_length )
              break;
            v101 = (PartyOrganizationUtility_o *)((char *)v100 + v78);
            v102 = System_String__Concat_62525248(
                     *(System_String_o **)((char *)&v100->obj.klass + v78),
                     (System_String_o *)StringLiteral_43/*"\n"*/,
                     0LL);
            v101->klass = (PartyOrganizationUtility_c *)v102;
            sub_1BD33FC(v101, (int64_t)v102, v103, v104, v105, v106, v107, v108);
          }
          v109 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v77 >= v109->max_length )
            break;
          v110 = *(System_String_o **)((char *)&v109->obj.klass + v78);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v112 = System_String__Concat_62525248(v110, v111, 0LL);
          *(Il2CppClass **)((char *)&v109->obj.klass + v78) = (Il2CppClass *)v112;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)((char *)v109 + v78),
            (int64_t)v112,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118);
          v119 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v77 >= v119->max_length )
            break;
          v119->m_Items[v77 + 1] = 0;
          v120 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          if ( v77 >= v120->max_length )
            break;
          v87 = (System_String_o **)((char *)v120 + v78);
          p_explanation = &explanation;
          v89 = v79;
          v90 = 0;
        }
        else
        {
          v83 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_64;
          if ( v77 >= v83->max_length )
            break;
          v83->m_Items[v77 + 4] = 1;
          v84 = *lvList;
          if ( !*lvList )
            goto LABEL_64;
          if ( v77 >= v84->max_length )
            break;
          v84->m_Items[v77 + 1] = v81;
          v85 = *titleList;
          if ( !*titleList )
            goto LABEL_64;
          v86 = *explanationList;
          if ( !*explanationList )
            goto LABEL_64;
          if ( v77 >= v85->max_length || v77 >= v86->max_length )
            break;
          v87 = (System_String_o **)((char *)v85 + v78);
          p_explanation = (System_String_o **)((char *)v86 + v78);
          v89 = v79;
          v90 = v81;
        }
        ServantAppendPassiveSkillEntity__GetEffectExplanation(v89, v87, p_explanation, v90, v82);
      }
      LODWORD(v76) = *(_DWORD *)(v40 + 24);
      ++v77;
      v78 += 8LL;
      if ( (__int64)v77 >= (int)v76 )
        return;
    }
    sub_1BD36BC(MaxLevelInfo, v32);
  }
}


void __fastcall ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_40414164(
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
  const MethodInfo *v28; // x2
  int64_t EntityListFromSvtId; // x0
  __int64 v30; // x1
  int64_t v31; // x25
  System_Int32_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Boolean_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Int32_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  const MethodInfo *v67; // x4
  __int64 v68; // x8
  unsigned __int64 v69; // x28
  __int64 v70; // x20
  ServantAppendPassiveSkillEntity_o *v71; // x26
  System_Int32_array *v72; // x8
  int32_t v73; // w27
  System_String_array *v74; // x8
  System_String_array *v75; // x9
  System_Boolean_array *v76; // x8
  System_Int32_array *v77; // x8
  System_Boolean_array *v78; // x8
  System_String_array *v79; // x26
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_String_array *v86; // x8
  System_String_array *v87; // x8
  PartyOrganizationUtility_o *v88; // x26
  System_String_o *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_String_array *v96; // x27
  System_String_o *v97; // x26
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4B3780D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_IndexOf_int___, idList);
    sub_1BD3458(&bool___TypeInfo, v17);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___, v18);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v19);
    sub_1BD3458(&DataManager_TypeInfo, v20);
    sub_1BD3458(&int___TypeInfo, v21);
    sub_1BD3458(&LocalizationManager_TypeInfo, v22);
    sub_1BD3458(&string___TypeInfo, v23);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v24);
    sub_1BD3458(&StringLiteral_3841/*"COND_TYPE_TITLE"*/, v25);
    sub_1BD3458(&StringLiteral_3829/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v26);
    sub_1BD3458(&StringLiteral_1/*""*/, v27);
    byte_4B3780D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillLvMaster___);
  EntityListFromSvtId = (int64_t)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(this, svtId, v28);
  if ( !EntityListFromSvtId )
LABEL_52:
    sub_1BD36B4(EntityListFromSvtId, v30);
  v31 = EntityListFromSvtId;
  v32 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, *(unsigned int *)(EntityListFromSvtId + 24));
  *idList = v32;
  sub_1BD33FC((PartyOrganizationUtility_o *)idList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_String_array *)sub_1BD3500(string___TypeInfo, *(unsigned int *)(v31 + 24));
  *titleList = v39;
  sub_1BD33FC((PartyOrganizationUtility_o *)titleList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_String_array *)sub_1BD3500(string___TypeInfo, *(unsigned int *)(v31 + 24));
  *explanationList = v46;
  sub_1BD33FC((PartyOrganizationUtility_o *)explanationList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Boolean_array *)sub_1BD3500(bool___TypeInfo, *(unsigned int *)(v31 + 24));
  *releaseStateList = v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)releaseStateList, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, *(unsigned int *)(v31 + 24));
  *lvList = v60;
  sub_1BD33FC((PartyOrganizationUtility_o *)lvList, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  v68 = *(_QWORD *)(v31 + 24);
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    v70 = 32LL;
    while ( v69 < (unsigned int)v68 )
    {
      v71 = *(ServantAppendPassiveSkillEntity_o **)(v31 + v70);
      if ( v71 )
      {
        v72 = *idList;
        if ( !*idList )
          goto LABEL_52;
        if ( v69 >= v72->max_length )
          break;
        v72->m_Items[v69 + 1] = v71->fields.skillId;
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v71->fields.skillId,
                                      (const MethodInfo_302DFD8 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v73 = 1;
        }
        else
        {
          if ( !releaseSkillLvs )
            goto LABEL_52;
          if ( (unsigned int)EntityListFromSvtId >= releaseSkillLvs->max_length )
            break;
          v73 = releaseSkillLvs->m_Items[(unsigned int)EntityListFromSvtId + 1];
        }
        v74 = *titleList;
        if ( !*titleList )
          goto LABEL_52;
        v75 = *explanationList;
        if ( !*explanationList )
          goto LABEL_52;
        if ( v69 >= v74->max_length || v69 >= v75->max_length )
          break;
        ServantAppendPassiveSkillEntity__GetEffectExplanation(
          v71,
          (System_String_o **)((char *)v74 + v70),
          (System_String_o **)((char *)v75 + v70),
          v73,
          v67);
        if ( !releaseSkillIds
          || (EntityListFromSvtId = System_Array__IndexOf_int_(
                                      releaseSkillIds,
                                      v71->fields.skillId,
                                      (const MethodInfo_302DFD8 *)Method_System_Array_IndexOf_int___),
              (EntityListFromSvtId & 0x80000000) != 0) )
        {
          v78 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v69 >= v78->max_length )
            break;
          v78->m_Items[v69 + 4] = 0;
          v79 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3841/*"COND_TYPE_TITLE"*/, 0LL);
          if ( !v79 )
            goto LABEL_52;
          if ( v69 >= v79->max_length )
            break;
          *(Il2CppClass **)((char *)&v79->obj.klass + v70) = (Il2CppClass *)EntityListFromSvtId;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)((char *)v79 + v70),
            EntityListFromSvtId,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
          v86 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v69 >= v86->max_length )
            break;
          EntityListFromSvtId = System_String__op_Inequality(
                                  *(System_String_o **)((char *)&v86->obj.klass + v70),
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0LL);
          if ( (EntityListFromSvtId & 1) != 0 )
          {
            v87 = *explanationList;
            if ( !*explanationList )
              goto LABEL_52;
            if ( v69 >= v87->max_length )
              break;
            v88 = (PartyOrganizationUtility_o *)((char *)v87 + v70);
            v89 = System_String__Concat_62525248(
                    *(System_String_o **)((char *)&v87->obj.klass + v70),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0LL);
            v88->klass = (PartyOrganizationUtility_c *)v89;
            sub_1BD33FC(v88, (int64_t)v89, v90, v91, v92, v93, v94, v95);
          }
          v96 = *explanationList;
          if ( !*explanationList )
            goto LABEL_52;
          if ( v69 >= v96->max_length )
            break;
          v97 = *(System_String_o **)((char *)&v96->obj.klass + v70);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
          v99 = System_String__Concat_62525248(v97, v98, 0LL);
          *(Il2CppClass **)((char *)&v96->obj.klass + v70) = (Il2CppClass *)v99;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)((char *)v96 + v70),
            (int64_t)v99,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
          v77 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v69 >= v77->max_length )
            break;
          v73 = 0;
        }
        else
        {
          v76 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_52;
          if ( v69 >= v76->max_length )
            break;
          v76->m_Items[v69 + 4] = 1;
          v77 = *lvList;
          if ( !*lvList )
            goto LABEL_52;
          if ( v69 >= v77->max_length )
            break;
        }
        v77->m_Items[v69 + 1] = v73;
      }
      LODWORD(v68) = *(_DWORD *)(v31 + 24);
      ++v69;
      v70 += 8LL;
      if ( (__int64)v69 >= (int)v68 )
        return;
    }
    sub_1BD36BC(EntityListFromSvtId, v30);
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

  if ( (byte_4B37804 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B37804 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31D2248 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__GetEntity__);
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
  if ( (byte_4B3780A & 1) == 0 )
  {
    this = (ServantAppendPassiveSkillMaster_o *)sub_1BD3458(
                                                  &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__,
                                                  *(_QWORD *)&svtId);
    byte_4B3780A = 1;
  }
  value = 0LL;
  TempKey = ServantAppendPassiveSkillMaster__CreateTempKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_9;
  TempKey = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                 (Il2CppObject *)TempKey,
                                 &value,
                                 (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)TempKey & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_9:
    sub_1BD36B4(TempKey, v8);
  if ( !LODWORD(value[1].monitor) )
    sub_1BD36BC(TempKey, v8);
  return (ServantAppendPassiveSkillEntity_o *)value[2].klass;
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
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x1
  int64_t list; // x0
  int32_t v18; // w23
  int64_t v19; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v21; // x3
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int64_t v31; // x1
  Il2CppClass **v32; // x0

  if ( (byte_4B37809 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v12);
    sub_1BD3458(&ServantAppendPassiveSkillEntity_TypeInfo, v13);
    byte_4B37809 = 1;
  }
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  v18 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v18 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v18,
                      (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantAppendPassiveSkillEntity_TypeInfo
        && *(_DWORD *)(list + 16) == svtId )
      {
        if ( !v14 )
          goto LABEL_22;
        if ( System_Collections_Generic_HashSet_int___Add(
               v14,
               *(_DWORD *)(list + 20),
               (const MethodInfo_3474EDC *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          list = (int64_t)ServantAppendPassiveSkillMaster__GetEntityFromIdNum(
                            this,
                            *(_DWORD *)(v19 + 16),
                            *(_DWORD *)(v19 + 20),
                            v21);
          if ( !v15 )
            goto LABEL_22;
          items = v15->fields._items;
          v29 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v15->fields._size;
          v31 = list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v31;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v32 + 4), v31, v22, v23, v24, v25, v26, v27);
          }
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_22;
  }
  if ( !v15 )
LABEL_22:
    sub_1BD36B4(list, v16);
  return (ServantAppendPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v15,
                                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
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
  __int64 v12; // x21
  __int64 klass_high; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v16; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  int32_t v18; // w25
  System_Collections_ObjectModel_Collection_T__o *v19; // x26
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Int32_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B3780C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BD3458(&ServantAppendPassiveSkillEntity_TypeInfo, v10);
    sub_1BD3458(&SvtUseSkillData_TypeInfo, v11);
    byte_4B3780C = 1;
  }
  v12 = sub_1BD36A4(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v12, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantAppendPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantAppendPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId )
        {
          if ( !v16 )
            break;
          klass_high = HIDWORD(list[1].klass);
          items = v16->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              klass_high,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size + 1] = klass_high;
          }
          if ( !v17 )
            break;
          klass_high = HIDWORD(v19->fields.items);
          v24 = v17->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !v24 )
            break;
          v26 = v17->fields._size;
          if ( (unsigned int)v26 >= v24->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              klass_high,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = v26 + 1;
            v24->m_Items[v26 + 1] = klass_high;
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BD36B4(list, klass_high);
  }
LABEL_22:
  if ( !v16 )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_int___ToArray(
                                                             v16,
                                                             (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v12 )
    goto LABEL_26;
  *(_QWORD *)(v12 + 16) = list;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)list, v27, v28, v29, v30, v31, v32);
  if ( !v17 )
    goto LABEL_26;
  v33 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v12 + 32) = v33;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  return (SvtUseSkillData_o *)v12;
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

  if ( (byte_4B37805 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4B37805 = 1;
  }
  PK = (Il2CppObject *)ServantAppendPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_ServantAppendPassiveSkillMaster__ServantAppendPassiveSkillEntity__string__TryGetEntity__);
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
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *TempKey; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x24
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppClass *v58; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  void **v61; // x8
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  ServantAppendPassiveSkillMaster___c_c *v68; // x8
  Il2CppObject *v69; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v72; // x24
  struct ServantAppendPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_Dictionary_object__object__o *v80; // x23
  System_Object_array *v81; // x0
  __int64 v82; // x1
  int32_t monitor; // w2
  int v84; // w8
  ServantAppendPassiveSkillMaster_o *v86; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B37808 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__, v4);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__,
      v5);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__,
      v8);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__,
      v9);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__,
      v10);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo, v11);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__,
      v12);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__,
      v13);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___get_Current__,
      v14);
    sub_1BD3458(&System_IDisposable_TypeInfo, v15);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BD3458(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Key__,
      v18);
    sub_1BD3458(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantAppendPassiveSkillEntity___get_Value__,
      v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__, v20);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Clear__, v21);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__, v22);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__, v23);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__, v24);
    sub_1BD3458(&System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo, v25);
    sub_1BD3458(&ServantAppendPassiveSkillEntity_TypeInfo, v26);
    sub_1BD3458(&Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1BD3458(&ServantAppendPassiveSkillMaster___c_TypeInfo, v28);
    byte_4B37808 = 1;
  }
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_328451C *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v86 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1BD36B4(0LL, v42);
    methodPtr_low = LOBYTE(ServantAppendPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantAppendPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantAppendPassiveSkillEntity_TypeInfo )
    {
      sub_1BD3974(v41);
LABEL_51:
      sub_1BD36B4(v57, v49);
    }
    TempKey = (Il2CppObject *)ServantAppendPassiveSkillMaster__CreateTempKey(
                                (ServantAppendPassiveSkillMaster_o *)v41,
                                *(_DWORD *)(v41 + 16),
                                *(_DWORD *)(v41 + 20),
                                v43);
    if ( !v30 )
      sub_1BD36B4(TempKey, v47);
    v48 = TempKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            TempKey,
            &value,
            (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v56;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v56,
        (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___set_Item__);
    }
    v57 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v58 = value[1].klass;
    v59 = Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v58 )
      sub_1BD36B4(v57, v49);
    size = v57->fields._size;
    if ( (unsigned int)size >= LODWORD(v58->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v44,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->_1.image + size;
      v57->fields._size = size + 1;
      v61[4] = v44;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v44, v50, v51, v52, v53, v54, v55);
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_34;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_34:
    v65 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v65 + 8));
  if ( !v30 )
LABEL_57:
    sub_1BD36B4(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v87,
    v30,
    (const MethodInfo_32847C4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_33834B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___MoveNext__);
    if ( !v66 )
      break;
    v68 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    key = v88.fields._current.fields.key;
    v69 = v88.fields._current.fields.value;
    if ( !ServantAppendPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAppendPassiveSkillMaster___c_TypeInfo);
      v68 = ServantAppendPassiveSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v68->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = ServantAppendPassiveSkillMaster___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v68->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_ServantAppendPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v72,
        Method_ServantAppendPassiveSkillMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantAppendPassiveSkillEntity__o *)_9__5_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( !v69 )
      sub_1BD36B4(v66, v67);
    System_Collections_Generic_List_object___Sort_56371284(
      (System_Collections_Generic_List_object__o *)v69,
      _9__5_0,
      (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__Sort__);
    v80 = (System_Collections_Generic_Dictionary_object__object__o *)v86->fields.listCache;
    v81 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v69,
            (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_ServantAppendPassiveSkillEntity__ToArray__);
    if ( !v80 )
      sub_1BD36B4(v81, v82);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v80,
      key,
      &v81->obj,
      (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__ServantAppendPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v69[1].monitor;
    v84 = HIDWORD(v69[1].monitor) + 1;
    LODWORD(v69[1].monitor) = 0;
    HIDWORD(v69[1].monitor) = v84;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v69[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_33835D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantAppendPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_328451C *)Method_System_Collections_Generic_Dictionary_string__List_ServantAppendPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantAppendPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3780E & 1) == 0 )
  {
    sub_1BD3458(&ServantAppendPassiveSkillMaster___c_TypeInfo, v1);
    byte_4B3780E = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(ServantAppendPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantAppendPassiveSkillMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ServantAppendPassiveSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, a);
  return b->fields.priority - a->fields.priority;
}