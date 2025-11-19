void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CB2EF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4CB2EF8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CB2EF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4CB2EF7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_33F90DC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntityByQuestId(
        BlankEarthQuestAfterAction_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthQuestAfterAction_o *SpotID; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB2EF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CB2EF9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  intptr_t v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20

  if ( (byte_4CB2EFA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2EFA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( (v4 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    return 0;
  v4 = mInstance[10].fields.m_CachedPtr;
  if ( !v4 )
LABEL_19:
    sub_1C6BC60(v4, v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v4, 0);
}


void BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20
  ScrTerminalListTop_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = spotId;
  if ( (byte_4CB2EFB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2EFB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (System_String_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( !mInstance )
      goto LABEL_19;
    m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    {
      v8 = (ScrTerminalListTop_o *)mInstance[10].fields.m_CachedPtr;
      v5 = System_Int32__ToString((int32_t)&v9, 0);
      if ( v8 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v8, 4, v5, 0);
        return;
      }
LABEL_19:
      sub_1C6BC60(v5, v6);
    }
  }
}


bool BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t id; // w8
  System_String_o *v14; // x0
  System_String_array *v15; // x0
  __int64 v16; // x1
  System_String_array *v17; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v18; // x22
  BlankEarthQuestAfterAction_o *v19; // x0
  const MethodInfo *v20; // x2
  BlankEarthGimmickEntity_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x0
  System_String_array *v29; // x0
  __int64 v30; // x1
  System_String_array *v31; // x21
  int v32; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v33; // x22
  bool v34; // w8
  System_String_o *v35; // x0
  System_String_array *v36; // x0
  __int64 v37; // x1
  System_String_array *v38; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  bool result; // w0
  unsigned int v46; // w8
  int v47; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v48; // x20
  BlankEarthQuestAfterAction_o *v49; // x0
  const MethodInfo *v50; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  BlankEarthQuestAfterAction_o *v55; // x0
  const MethodInfo *v56; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v57; // x20
  BlankEarthQuestAfterAction_o *v58; // x0
  const MethodInfo *v59; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w1
  System_String_o *v64; // x0
  System_String_array *v65; // x0
  __int64 v66; // x1
  System_String_array *v67; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v68; // x22
  __int64 v69; // x0
  __int64 v70; // x1
  float v71; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v72; // x22
  __int64 v73; // x0
  float v74; // s0
  float v75; // s8
  __int64 v76; // x0
  float v77; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v78; // x20
  __int64 v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x0
  System_String_array *v82; // x0
  __int64 v83; // x1
  System_String_array *v84; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v85; // x22
  BlankEarthQuestAfterAction_o *v86; // x0
  const MethodInfo *v87; // x2
  BlankEarthSpotEntity_o *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x0
  __int64 v92; // x1
  BlankEarthQuestAfterAction_o *v93; // x0
  const MethodInfo *v94; // x2
  System_String_o *v95; // x0
  System_String_array *v96; // x0
  __int64 v97; // x1
  System_String_array *v98; // x21
  int v99; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v100; // x22
  float v101; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v102; // x22
  __int64 v103; // x0
  System_String_o *param; // x0
  System_String_array *v105; // x0
  __int64 v106; // x1
  System_String_array *v107; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v109; // x22
  float v110; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v111; // x22
  __int64 v112; // x0
  BlankEarthQuestAfterAction_o *v113; // x0
  const MethodInfo *v114; // x2
  BlankEarthQuestAfterAction_o *v115; // x0
  const MethodInfo *v116; // x2

  if ( (byte_4CB2EF6 & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4CB2EF6 = 1;
  }
  *errorMessage = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)errorMessage, 0, (int32_t)commandParam, (const MethodInfo *)errorMessage);
  v8 = (Il2CppObject *)sub_1C6BC54(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1C6BC60(v11, v12);
  id = command->fields.id;
  if ( id <= 500 )
  {
    if ( id <= 303 )
    {
      result = 1;
      if ( id > 299 )
      {
        if ( id != 300 )
        {
          if ( id == 302 )
          {
            param = command->fields.param;
            if ( !param )
              sub_1C6BC60(0, v12);
            v105 = System_String__Split(param, 0x2Cu, 0, 0);
            v107 = v105;
            if ( !v105 )
              sub_1C6BC60(0, v106);
            max_length = v105->max_length;
            if ( max_length > 0 )
            {
              v109 = *commandParam;
              v110 = 0.5;
              if ( max_length >= 3 )
                v110 = System_Single__Parse(v105->m_Items[2], 0) * 0.001;
              if ( !v109 )
                sub_1C6BC60(v105, v106);
              v109->fields.time = v110;
              v111 = *commandParam;
              if ( SLODWORD(v107->max_length) >= 2 )
                v112 = System_Int32__Parse(v107->m_Items[1], 0);
              else
                v112 = 15;
              if ( !v111 )
                sub_1C6BC60(v112, v106);
              v111->fields.easeType = v112;
              if ( !LODWORD(v107->max_length) )
                sub_1C6BC68(v112);
              v57 = *commandParam;
              v115 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v107->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v115, (int32_t)v115, v116);
              v63 = (int)GimmickEntity;
              if ( !v57 )
                sub_1C6BC60(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v64 = command->fields.param;
            if ( !v64 )
              sub_1C6BC60(0, v12);
            v65 = System_String__Split(v64, 0x2Cu, 0, 0);
            v67 = v65;
            if ( !v65 )
              sub_1C6BC60(0, v66);
            if ( SLODWORD(v65->max_length) > 3 )
            {
              v68 = *commandParam;
              v71 = System_Single__Parse(v65->m_Items[2], 0);
              if ( !v68 )
                sub_1C6BC60(v69, v70);
              v68->fields.time = v71 * 0.001;
              v72 = *commandParam;
              if ( !*commandParam )
                sub_1C6BC60(v69, v70);
              if ( v72->fields.time < 0.0 )
                v72->fields.time = 0.5;
              if ( !LODWORD(v67->max_length) )
                sub_1C6BC68(v69);
              v74 = System_Single__Parse(v67->m_Items[0], 0);
              if ( LODWORD(v67->max_length) <= 1 )
                sub_1C6BC68(v73);
              v75 = v74;
              v77 = System_Single__Parse(v67->m_Items[1], 0);
              v72->fields.latLongVector.fields.x = v75;
              v72->fields.latLongVector.fields.y = v77;
              if ( LODWORD(v67->max_length) <= 3 )
                sub_1C6BC68(v76);
              v78 = *commandParam;
              v79 = System_Int32__Parse(v67->m_Items[3], 0);
              if ( !v78 )
                sub_1C6BC60(v79, v80);
              v78->fields.easeType = v79;
              return 1;
            }
          }
          return 0;
        }
        v95 = command->fields.param;
        if ( !v95 )
          sub_1C6BC60(0, v12);
        v96 = System_String__Split(v95, 0x2Cu, 0, 0);
        v98 = v96;
        if ( !v96 )
          sub_1C6BC60(0, v97);
        v99 = v96->max_length;
        if ( v99 <= 0 )
          return 0;
        v100 = *commandParam;
        v101 = 0.5;
        if ( v99 >= 3 )
          v101 = System_Single__Parse(v96->m_Items[2], 0) * 0.001;
        if ( !v100 )
          sub_1C6BC60(v96, v97);
        v100->fields.time = v101;
        v102 = *commandParam;
        if ( SLODWORD(v98->max_length) >= 2 )
          v103 = System_Int32__Parse(v98->m_Items[1], 0);
        else
          v103 = 15;
        if ( !v102 )
          sub_1C6BC60(v103, v97);
        v102->fields.easeType = v103;
        if ( !LODWORD(v98->max_length) )
          sub_1C6BC68(v103);
        v48 = *commandParam;
        v113 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v98->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v113, (int32_t)v113, v114);
        v54 = (int)SpotEntity;
        if ( !v48 )
          sub_1C6BC60(SpotEntity, SpotEntity);
      }
      else
      {
        v46 = id - 100;
        if ( v46 > 0xE )
          return result;
        v47 = 1 << v46;
        if ( (v47 & 0x1C07) == 0 )
        {
          if ( (v47 & 0x4010) == 0 )
            return result;
          v81 = command->fields.param;
          if ( !v81 )
            sub_1C6BC60(0, v12);
          v82 = System_String__Split(v81, 0x2Cu, 0, 0);
          v84 = v82;
          if ( !v82 )
            sub_1C6BC60(0, v83);
          if ( !LODWORD(v82->max_length) )
            sub_1C6BC68(v82);
          v85 = *commandParam;
          v86 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v82->m_Items[0], 0);
          v88 = BlankEarthQuestAfterAction__GetSpotEntity(v86, (int32_t)v86, v87);
          if ( !v85 )
            sub_1C6BC60(v88, v88);
          v85->fields.blankEarthSpotEntity = v88;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v85->fields, (int32_t)v88, v89, v90);
          if ( LODWORD(v84->max_length) <= 1 )
            sub_1C6BC68(v91);
          v25 = *commandParam;
          v26 = System_Int32__Parse(v84->m_Items[1], 0);
          if ( !v25 )
            sub_1C6BC60(v26, v92);
          goto LABEL_65;
        }
        v48 = *commandParam;
        v49 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v49, (int32_t)v49, v50);
        v54 = (int)SpotEntity;
        if ( !v48 )
          sub_1C6BC60(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v28 = command->fields.param;
        if ( !v28 )
          sub_1C6BC60(0, v12);
        v29 = System_String__Split(v28, 0x2Cu, 0, 0);
        v31 = v29;
        if ( !v29 )
          sub_1C6BC60(0, v30);
        v32 = v29->max_length;
        if ( v32 > 0 )
        {
          v33 = *commandParam;
          if ( v32 == 1 )
          {
            v34 = 0;
          }
          else
          {
            v29 = (System_String_array *)System_Int32__Parse(v29->m_Items[1], 0);
            v34 = (int)v29 > 0;
          }
          if ( !v33 )
            sub_1C6BC60(v29, v30);
          v33->fields.noWait = v34;
          if ( !LODWORD(v31->max_length) )
            sub_1C6BC68(v29);
          v57 = *commandParam;
          v93 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v31->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v93, (int32_t)v93, v94);
          v63 = (int)GimmickEntity;
          if ( !v57 )
            sub_1C6BC60(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v48 = *commandParam;
      v55 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v55, (int32_t)v55, v56);
      v54 = (int)SpotEntity;
      if ( !v48 )
        sub_1C6BC60(SpotEntity, SpotEntity);
    }
    v48->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v48->fields, v54, v52, v53);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v14 = command->fields.param;
      if ( !v14 )
        sub_1C6BC60(0, v12);
      v15 = System_String__Split(v14, 0x2Cu, 0, 0);
      v17 = v15;
      if ( !v15 )
        sub_1C6BC60(0, v16);
      if ( !LODWORD(v15->max_length) )
        sub_1C6BC68(v15);
      v18 = *commandParam;
      v19 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v15->m_Items[0], 0);
      v21 = BlankEarthQuestAfterAction__GetGimmickEntity(v19, (int32_t)v19, v20);
      if ( !v18 )
        sub_1C6BC60(v21, v21);
      v18->fields.blankEarthGimmickEntity = v21;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v18->fields.blankEarthGimmickEntity, (int32_t)v21, v22, v23);
      if ( LODWORD(v17->max_length) <= 1 )
        sub_1C6BC68(v24);
      v25 = *commandParam;
      v26 = System_Int32__Parse(v17->m_Items[1], 0);
      if ( !v25 )
        sub_1C6BC60(v26, v27);
LABEL_65:
      v25->fields.intValue = v26;
      return 1;
    }
    if ( (id & 0xFFFFFFFE) != 0x3F2 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( id == 702 )
  {
    v35 = command->fields.param;
    if ( !v35 )
      sub_1C6BC60(0, v12);
    v36 = System_String__Split(v35, 0x2Cu, 0, 0);
    v38 = v36;
    if ( !v36 )
      sub_1C6BC60(0, v37);
    if ( LODWORD(v36->max_length) <= 1 )
      sub_1C6BC68(v36);
    v39 = *commandParam;
    v40 = System_Int32__Parse(v36->m_Items[1], 0);
    if ( !v39 )
      sub_1C6BC60(v40, v41);
    v39->fields.intValue = v40;
    if ( !LODWORD(v38->max_length) )
      sub_1C6BC68(v40);
    v42 = *commandParam;
    v43 = System_Int32__Parse(v38->m_Items[0], 0);
    if ( !v42 )
      sub_1C6BC60(v43, v44);
    v42->fields.onFade = (int)v43 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v57 = *commandParam;
    v58 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v58, (int32_t)v58, v59);
    v63 = (int)GimmickEntity;
    if ( !v57 )
      sub_1C6BC60(GimmickEntity, GimmickEntity);
LABEL_70:
    v57->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v57->fields.blankEarthGimmickEntity, v63, v61, v62);
  }
  return 1;
}


bool BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
  __int64 v10; // x23
  QuestTree_o *IsOtherObjHideCommand; // x0
  __int64 allQuestInfoList_high; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x19
  BlankEarthQuestAfterAction_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  bool IsBlankEarthActive; // w8
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  __int64 v21; // x8
  int id; // w22
  BlankEarth_o *v23; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  bool IsNoWaitCommand; // w23
  int32_t intValue; // w21
  QuestTree_o *v28; // x21
  const MethodInfo *v29; // x2
  int32_t v30; // w1
  int v31; // w8
  bool v32; // w21
  int32_t v33; // w2
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v35; // x8
  bool v36; // w21
  System_Action_object__o *v37; // x19
  System_Action_object__o *v38; // x19
  System_Action_object__o *v39; // x19
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB2EF5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestAfterAction_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C6BA08(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C6BA08(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C6BA08(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4CB2EF5 = 1;
  }
  commandParam = 0;
  errorMessage = 0;
  v10 = sub_1C6BC54(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_106;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v15 = (System_Action_o **)(v10 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v16, v17);
  LOBYTE(IsOtherObjHideCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v18) )
    {
LABEL_64:
      ActionExtensions__Call(*v15, 0);
LABEL_65:
      LOBYTE(IsOtherObjHideCommand) = 1;
      return (char)IsOtherObjHideCommand;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = IsOtherObjHideCommand[1].fields.questReleaseEntList->klass;
    if ( !klass )
      goto LABEL_106;
    v21 = *(_QWORD *)&klass->_2.element_size;
    if ( !v21 || !command )
      goto LABEL_106;
    id = command->fields.id;
    v23 = *(BlankEarth_o **)(v21 + 432);
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_20:
          if ( commandParam && v23 )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              v23,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v15,
              0);
            goto LABEL_91;
          }
LABEL_106:
          sub_1C6BC60(IsOtherObjHideCommand, allQuestInfoList_high);
        }
        if ( (id & 0xFFFFFFFE) != 0x3F2 )
        {
          if ( id != 1012 )
          {
LABEL_91:
            LOBYTE(IsOtherObjHideCommand) = 0;
            return (char)IsOtherObjHideCommand;
          }
          goto LABEL_20;
        }
LABEL_68:
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v36 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( commandParam && v23 )
        {
          BlankEarth__RevealOtherObject(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            ((unsigned __int8)IsOtherObjHideCommand & 1) == 0,
            v36,
            *v15,
            0);
          goto LABEL_91;
        }
        goto LABEL_106;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 0x3E8 )
          goto LABEL_91;
        goto LABEL_68;
      }
      if ( !commandParam )
        goto LABEL_106;
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        IsOtherObjHideCommand = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        IsOtherObjHideCommand = (QuestTree_o *)QuestTree__mfGetWarEntityByWarID(IsOtherObjHideCommand, intValue, 0);
        if ( IsOtherObjHideCommand )
        {
          allQuestInfoList_high = HIDWORD(IsOtherObjHideCommand[1].fields.allQuestInfoList);
          v28 = IsOtherObjHideCommand;
          if ( (int)allQuestInfoList_high >= 1 )
          {
            if ( !v23 )
              goto LABEL_106;
            IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v23, allQuestInfoList_high, 0, 0);
            if ( !IsOtherObjHideCommand )
              goto LABEL_106;
            BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
            v30 = HIDWORD(v28[1].fields.allQuestInfoList);
LABEL_63:
            BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
              (BlankEarthQuestAfterAction_o *)IsOtherObjHideCommand,
              v30,
              v29);
            goto LABEL_64;
          }
        }
      }
      goto LABEL_66;
    }
    if ( id > 303 )
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        if ( !commandParam )
          goto LABEL_106;
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity || !v23 )
          goto LABEL_106;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(v23, blankEarthGimmickEntity->fields.id, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
          goto LABEL_91;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          allQuestInfoList_high = 3;
        else
          allQuestInfoList_high = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            goto LABEL_106;
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            (unsigned __int8)IsOtherObjHideCommand & 1,
            0);
        }
        else
        {
          if ( !commandParam )
            goto LABEL_106;
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_106;
            BlankEarthGimmickComponent__SetState(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              allQuestInfoList_high,
              *v15,
              0);
            goto LABEL_65;
          }
          if ( !EarthGimmick )
            goto LABEL_106;
          BlankEarthGimmickComponent__SetState(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            allQuestInfoList_high,
            0,
            0);
        }
        LOBYTE(IsOtherObjHideCommand) = 1;
        *isQuickUpdate = 1;
        return (char)IsOtherObjHideCommand;
      }
      if ( id != 500 )
        goto LABEL_91;
      if ( !commandParam )
        goto LABEL_106;
      blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
      if ( blankEarthSpotEntity )
      {
        if ( !v23 )
          goto LABEL_106;
        IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v23, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_106;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        if ( !commandParam )
          goto LABEL_106;
        v35 = commandParam->fields.blankEarthSpotEntity;
        if ( !v35 )
          goto LABEL_106;
        v30 = v35->fields.id;
        goto LABEL_63;
      }
LABEL_66:
      ActionExtensions__Call(*v15, 0);
      goto LABEL_91;
    }
    IsOtherObjHideCommand = 0;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v38 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsSpot(
            v23,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
            0,
            0);
          break;
        case 302:
          v39 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v39,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthTowardsGimmick(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v39,
            0);
          break;
        case 303:
          v37 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v37,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_106;
          BlankEarth__RotateEarthByLatLong(
            v23,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
            0,
            0);
          break;
        default:
          return (char)IsOtherObjHideCommand;
      }
      goto LABEL_65;
    }
    if ( (unsigned int)(id - 100) > 0xE )
      return (char)IsOtherObjHideCommand;
    v31 = 1 << (id - 100);
    if ( (v31 & 0x1C07) != 0 )
    {
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      v32 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
      IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotHideCommand(id, 0);
      if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
      {
        v33 = 0;
      }
      else
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotGrayCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          v33 = 2;
        else
          v33 = 1;
      }
      if ( !commandParam || !v23 )
        goto LABEL_106;
      BlankEarth__RevealEarthPoint(v23, commandParam->fields.blankEarthSpotEntity, v33, v32, *v15, 0);
      goto LABEL_65;
    }
    if ( (v31 & 0x4010) != 0 )
    {
      if ( commandParam && v23 )
      {
        BlankEarth__PlaySpotUniqueAnim(
          v23,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v15,
          0);
        goto LABEL_91;
      }
      goto LABEL_106;
    }
  }
  return (char)IsOtherObjHideCommand;
}


void BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}