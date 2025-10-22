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

  if ( (byte_4C539A8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4C539A8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4C539A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4C539A7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
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

  if ( (byte_4C539A9 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C539A9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
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

  if ( (byte_4C539AA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C539AA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
    sub_1C3E7C0(v4, v5);
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
  if ( (byte_4C539AB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C539AB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
      sub_1C3E7C0(v5, v6);
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
  __int64 v25; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x0
  System_String_array *v30; // x0
  __int64 v31; // x1
  System_String_array *v32; // x21
  int v33; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v34; // x22
  bool v35; // w8
  System_String_o *v36; // x0
  System_String_array *v37; // x0
  __int64 v38; // x1
  System_String_array *v39; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v43; // x20
  __int64 v44; // x0
  __int64 v45; // x1
  bool result; // w0
  unsigned int v47; // w8
  int v48; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v49; // x20
  BlankEarthQuestAfterAction_o *v50; // x0
  const MethodInfo *v51; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  BlankEarthQuestAfterAction_o *v56; // x0
  const MethodInfo *v57; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v58; // x20
  BlankEarthQuestAfterAction_o *v59; // x0
  const MethodInfo *v60; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  System_String_o *v65; // x0
  System_String_array *v66; // x0
  __int64 v67; // x1
  System_String_array *v68; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v69; // x22
  __int64 v70; // x0
  __int64 v71; // x1
  float v72; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v73; // x22
  __int64 v74; // x0
  __int64 v75; // x1
  float v76; // s0
  float v77; // s8
  __int64 v78; // x0
  __int64 v79; // x1
  float v80; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v81; // x20
  __int64 v82; // x0
  __int64 v83; // x1
  System_String_o *v84; // x0
  System_String_array *v85; // x0
  __int64 v86; // x1
  System_String_array *v87; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v88; // x22
  BlankEarthQuestAfterAction_o *v89; // x0
  const MethodInfo *v90; // x2
  BlankEarthSpotEntity_o *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x1
  BlankEarthQuestAfterAction_o *v97; // x0
  const MethodInfo *v98; // x2
  System_String_o *v99; // x0
  System_String_array *v100; // x0
  __int64 v101; // x1
  System_String_array *v102; // x21
  int v103; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v104; // x22
  float v105; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v106; // x22
  __int64 v107; // x0
  System_String_o *param; // x0
  System_String_array *v109; // x0
  __int64 v110; // x1
  System_String_array *v111; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v113; // x22
  float v114; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v115; // x22
  __int64 v116; // x0
  BlankEarthQuestAfterAction_o *v117; // x0
  const MethodInfo *v118; // x2
  BlankEarthQuestAfterAction_o *v119; // x0
  const MethodInfo *v120; // x2

  if ( (byte_4C539A6 & 1) == 0 )
  {
    sub_1C3E564(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4C539A6 = 1;
  }
  *errorMessage = 0;
  sub_1C3E508((CGThumbnailListItem_o *)errorMessage, 0, (int32_t)commandParam, (const MethodInfo *)errorMessage);
  v8 = (Il2CppObject *)sub_1C3E7B0(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1C3E7C0(v11, v12);
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
              sub_1C3E7C0(0, v12);
            v109 = System_String__Split(param, 0x2Cu, 0, 0);
            v111 = v109;
            if ( !v109 )
              sub_1C3E7C0(0, v110);
            max_length = v109->max_length;
            if ( max_length > 0 )
            {
              v113 = *commandParam;
              v114 = 0.5;
              if ( max_length >= 3 )
                v114 = System_Single__Parse(v109->m_Items[2], 0) * 0.001;
              if ( !v113 )
                sub_1C3E7C0(v109, v110);
              v113->fields.time = v114;
              v115 = *commandParam;
              if ( SLODWORD(v111->max_length) >= 2 )
                v116 = System_Int32__Parse(v111->m_Items[1], 0);
              else
                v116 = 15;
              if ( !v115 )
                sub_1C3E7C0(v116, v110);
              v115->fields.easeType = v116;
              if ( !LODWORD(v111->max_length) )
                sub_1C3E7C8(v116, v110);
              v58 = *commandParam;
              v119 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v111->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v119, (int32_t)v119, v120);
              v64 = (int)GimmickEntity;
              if ( !v58 )
                sub_1C3E7C0(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v65 = command->fields.param;
            if ( !v65 )
              sub_1C3E7C0(0, v12);
            v66 = System_String__Split(v65, 0x2Cu, 0, 0);
            v68 = v66;
            if ( !v66 )
              sub_1C3E7C0(0, v67);
            if ( SLODWORD(v66->max_length) > 3 )
            {
              v69 = *commandParam;
              v72 = System_Single__Parse(v66->m_Items[2], 0);
              if ( !v69 )
                sub_1C3E7C0(v70, v71);
              v69->fields.time = v72 * 0.001;
              v73 = *commandParam;
              if ( !*commandParam )
                sub_1C3E7C0(v70, v71);
              if ( v73->fields.time < 0.0 )
                v73->fields.time = 0.5;
              if ( !LODWORD(v68->max_length) )
                sub_1C3E7C8(v70, v71);
              v76 = System_Single__Parse(v68->m_Items[0], 0);
              if ( LODWORD(v68->max_length) <= 1 )
                sub_1C3E7C8(v74, v75);
              v77 = v76;
              v80 = System_Single__Parse(v68->m_Items[1], 0);
              v73->fields.latLongVector.fields.x = v77;
              v73->fields.latLongVector.fields.y = v80;
              if ( LODWORD(v68->max_length) <= 3 )
                sub_1C3E7C8(v78, v79);
              v81 = *commandParam;
              v82 = System_Int32__Parse(v68->m_Items[3], 0);
              if ( !v81 )
                sub_1C3E7C0(v82, v83);
              v81->fields.easeType = v82;
              return 1;
            }
          }
          return 0;
        }
        v99 = command->fields.param;
        if ( !v99 )
          sub_1C3E7C0(0, v12);
        v100 = System_String__Split(v99, 0x2Cu, 0, 0);
        v102 = v100;
        if ( !v100 )
          sub_1C3E7C0(0, v101);
        v103 = v100->max_length;
        if ( v103 <= 0 )
          return 0;
        v104 = *commandParam;
        v105 = 0.5;
        if ( v103 >= 3 )
          v105 = System_Single__Parse(v100->m_Items[2], 0) * 0.001;
        if ( !v104 )
          sub_1C3E7C0(v100, v101);
        v104->fields.time = v105;
        v106 = *commandParam;
        if ( SLODWORD(v102->max_length) >= 2 )
          v107 = System_Int32__Parse(v102->m_Items[1], 0);
        else
          v107 = 15;
        if ( !v106 )
          sub_1C3E7C0(v107, v101);
        v106->fields.easeType = v107;
        if ( !LODWORD(v102->max_length) )
          sub_1C3E7C8(v107, v101);
        v49 = *commandParam;
        v117 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v102->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v117, (int32_t)v117, v118);
        v55 = (int)SpotEntity;
        if ( !v49 )
          sub_1C3E7C0(SpotEntity, SpotEntity);
      }
      else
      {
        v47 = id - 100;
        if ( v47 > 0xE )
          return result;
        v48 = 1 << v47;
        if ( (v48 & 0x1C07) == 0 )
        {
          if ( (v48 & 0x4010) == 0 )
            return result;
          v84 = command->fields.param;
          if ( !v84 )
            sub_1C3E7C0(0, v12);
          v85 = System_String__Split(v84, 0x2Cu, 0, 0);
          v87 = v85;
          if ( !v85 )
            sub_1C3E7C0(0, v86);
          if ( !LODWORD(v85->max_length) )
            sub_1C3E7C8(v85, v86);
          v88 = *commandParam;
          v89 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v85->m_Items[0], 0);
          v91 = BlankEarthQuestAfterAction__GetSpotEntity(v89, (int32_t)v89, v90);
          if ( !v88 )
            sub_1C3E7C0(v91, v91);
          v88->fields.blankEarthSpotEntity = v91;
          sub_1C3E508((CGThumbnailListItem_o *)&v88->fields, (int32_t)v91, v92, v93);
          if ( LODWORD(v87->max_length) <= 1 )
            sub_1C3E7C8(v94, v95);
          v26 = *commandParam;
          v27 = System_Int32__Parse(v87->m_Items[1], 0);
          if ( !v26 )
            sub_1C3E7C0(v27, v96);
          goto LABEL_65;
        }
        v49 = *commandParam;
        v50 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v50, (int32_t)v50, v51);
        v55 = (int)SpotEntity;
        if ( !v49 )
          sub_1C3E7C0(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v29 = command->fields.param;
        if ( !v29 )
          sub_1C3E7C0(0, v12);
        v30 = System_String__Split(v29, 0x2Cu, 0, 0);
        v32 = v30;
        if ( !v30 )
          sub_1C3E7C0(0, v31);
        v33 = v30->max_length;
        if ( v33 > 0 )
        {
          v34 = *commandParam;
          if ( v33 == 1 )
          {
            v35 = 0;
          }
          else
          {
            v30 = (System_String_array *)System_Int32__Parse(v30->m_Items[1], 0);
            v35 = (int)v30 > 0;
          }
          if ( !v34 )
            sub_1C3E7C0(v30, v31);
          v34->fields.noWait = v35;
          if ( !LODWORD(v32->max_length) )
            sub_1C3E7C8(v30, v31);
          v58 = *commandParam;
          v97 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v32->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v97, (int32_t)v97, v98);
          v64 = (int)GimmickEntity;
          if ( !v58 )
            sub_1C3E7C0(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v49 = *commandParam;
      v56 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v56, (int32_t)v56, v57);
      v55 = (int)SpotEntity;
      if ( !v49 )
        sub_1C3E7C0(SpotEntity, SpotEntity);
    }
    v49->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C3E508((CGThumbnailListItem_o *)&v49->fields, v55, v53, v54);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v14 = command->fields.param;
      if ( !v14 )
        sub_1C3E7C0(0, v12);
      v15 = System_String__Split(v14, 0x2Cu, 0, 0);
      v17 = v15;
      if ( !v15 )
        sub_1C3E7C0(0, v16);
      if ( !LODWORD(v15->max_length) )
        sub_1C3E7C8(v15, v16);
      v18 = *commandParam;
      v19 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v15->m_Items[0], 0);
      v21 = BlankEarthQuestAfterAction__GetGimmickEntity(v19, (int32_t)v19, v20);
      if ( !v18 )
        sub_1C3E7C0(v21, v21);
      v18->fields.blankEarthGimmickEntity = v21;
      sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.blankEarthGimmickEntity, (int32_t)v21, v22, v23);
      if ( LODWORD(v17->max_length) <= 1 )
        sub_1C3E7C8(v24, v25);
      v26 = *commandParam;
      v27 = System_Int32__Parse(v17->m_Items[1], 0);
      if ( !v26 )
        sub_1C3E7C0(v27, v28);
LABEL_65:
      v26->fields.intValue = v27;
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
    v36 = command->fields.param;
    if ( !v36 )
      sub_1C3E7C0(0, v12);
    v37 = System_String__Split(v36, 0x2Cu, 0, 0);
    v39 = v37;
    if ( !v37 )
      sub_1C3E7C0(0, v38);
    if ( LODWORD(v37->max_length) <= 1 )
      sub_1C3E7C8(v37, v38);
    v40 = *commandParam;
    v41 = System_Int32__Parse(v37->m_Items[1], 0);
    if ( !v40 )
      sub_1C3E7C0(v41, v42);
    v40->fields.intValue = v41;
    if ( !LODWORD(v39->max_length) )
      sub_1C3E7C8(v41, v42);
    v43 = *commandParam;
    v44 = System_Int32__Parse(v39->m_Items[0], 0);
    if ( !v43 )
      sub_1C3E7C0(v44, v45);
    v43->fields.onFade = (int)v44 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v58 = *commandParam;
    v59 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v59, (int32_t)v59, v60);
    v64 = (int)GimmickEntity;
    if ( !v58 )
      sub_1C3E7C0(GimmickEntity, GimmickEntity);
LABEL_70:
    v58->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C3E508((CGThumbnailListItem_o *)&v58->fields.blankEarthGimmickEntity, v64, v62, v63);
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

  if ( (byte_4C539A5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&QuestAfterAction_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    sub_1C3E564(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C3E564(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C3E564(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C3E564(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4C539A5 = 1;
  }
  commandParam = 0;
  errorMessage = 0;
  v10 = sub_1C3E7B0(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_106;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v15 = (System_Action_o **)(v10 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14);
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
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
          sub_1C3E7C0(IsOtherObjHideCommand, allQuestInfoList_high);
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
        IsOtherObjHideCommand = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
          v38 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
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
          v39 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
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
          v37 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
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