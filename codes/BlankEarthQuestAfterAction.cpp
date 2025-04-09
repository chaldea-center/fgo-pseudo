void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickEntity_o *__fastcall BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_49B7BBE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&gimmickId);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v5);
    byte_49B7BBE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v7);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_49B7BBD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_49B7BBD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v7);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_319D99C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntityByQuestId(
        BlankEarthQuestAfterAction_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthQuestAfterAction_o *SpotID; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49B7BBF & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, *(_QWORD *)&questId);
    byte_49B7BBF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0LL);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  ScrTerminalListTop_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *mTerminalList; // x20

  if ( (byte_49B7BC0 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v2);
    byte_49B7BC0 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
    return 0;
  v5 = mInstance->fields.mTerminalList;
  if ( !v5 )
LABEL_19:
    sub_1B4D1EC(v5, v6);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mTerminalList; // x20
  ScrTerminalListTop_o *v9; // x19
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = spotId;
  if ( (byte_49B7BC1 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&spotId);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v3);
    byte_49B7BC1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, *(_QWORD *)&spotId);
    byte_49B5933 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !mInstance )
      goto LABEL_19;
    mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
    {
      v9 = mInstance->fields.mTerminalList;
      v6 = System_Int32__ToString((int32_t)&v10, 0LL);
      if ( v9 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v9, 4, v6, 0LL);
        return;
      }
LABEL_19:
      sub_1B4D1EC(v6, v7);
    }
  }
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  BlankEarthQuestAfterAction_CommandParam_o *v8; // x22
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

  if ( (byte_49B7BBC & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, command);
    byte_49B7BBC = 1;
  }
  *errorMessage = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)errorMessage, 0, (int32_t)commandParam, (const MethodInfo *)errorMessage);
  v8 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_1B4D1DC(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  BlankEarthQuestAfterAction_CommandParam___ctor(v8, 0LL);
  *commandParam = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1B4D1EC(v11, v12);
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
              sub_1B4D1EC(0LL, v12);
            v109 = System_String__Split(param, 0x2Cu, 0, 0LL);
            v111 = v109;
            if ( !v109 )
              sub_1B4D1EC(0LL, v110);
            max_length = v109->max_length;
            if ( max_length > 0 )
            {
              v113 = *commandParam;
              v114 = 0.5;
              if ( max_length >= 3 )
                v114 = System_Single__Parse(v109->m_Items[2], 0LL) * 0.001;
              if ( !v113 )
                sub_1B4D1EC(v109, v110);
              v113->fields.time = v114;
              v115 = *commandParam;
              if ( (int)v111->max_length >= 2 )
                v116 = System_Int32__Parse(v111->m_Items[1], 0LL);
              else
                v116 = 15LL;
              if ( !v115 )
                sub_1B4D1EC(v116, v110);
              v115->fields.easeType = v116;
              if ( !v111->max_length )
                sub_1B4D1F4(v116, v110);
              v58 = *commandParam;
              v119 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v111->m_Items[0], 0LL);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v119, (int32_t)v119, v120);
              v64 = (int)GimmickEntity;
              if ( !v58 )
                sub_1B4D1EC(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v65 = command->fields.param;
            if ( !v65 )
              sub_1B4D1EC(0LL, v12);
            v66 = System_String__Split(v65, 0x2Cu, 0, 0LL);
            v68 = v66;
            if ( !v66 )
              sub_1B4D1EC(0LL, v67);
            if ( (int)v66->max_length > 3 )
            {
              v69 = *commandParam;
              v72 = System_Single__Parse(v66->m_Items[2], 0LL);
              if ( !v69 )
                sub_1B4D1EC(v70, v71);
              v69->fields.time = v72 * 0.001;
              v73 = *commandParam;
              if ( !*commandParam )
                sub_1B4D1EC(v70, v71);
              if ( v73->fields.time < 0.0 )
                v73->fields.time = 0.5;
              if ( !v68->max_length )
                sub_1B4D1F4(v70, v71);
              v76 = System_Single__Parse(v68->m_Items[0], 0LL);
              if ( v68->max_length <= 1 )
                sub_1B4D1F4(v74, v75);
              v77 = v76;
              v80 = System_Single__Parse(v68->m_Items[1], 0LL);
              v73->fields.latLongVector.fields.x = v77;
              v73->fields.latLongVector.fields.y = v80;
              if ( v68->max_length <= 3 )
                sub_1B4D1F4(v78, v79);
              v81 = *commandParam;
              v82 = System_Int32__Parse(v68->m_Items[3], 0LL);
              if ( !v81 )
                sub_1B4D1EC(v82, v83);
              v81->fields.easeType = v82;
              return 1;
            }
          }
          return 0;
        }
        v99 = command->fields.param;
        if ( !v99 )
          sub_1B4D1EC(0LL, v12);
        v100 = System_String__Split(v99, 0x2Cu, 0, 0LL);
        v102 = v100;
        if ( !v100 )
          sub_1B4D1EC(0LL, v101);
        v103 = v100->max_length;
        if ( v103 <= 0 )
          return 0;
        v104 = *commandParam;
        v105 = 0.5;
        if ( v103 >= 3 )
          v105 = System_Single__Parse(v100->m_Items[2], 0LL) * 0.001;
        if ( !v104 )
          sub_1B4D1EC(v100, v101);
        v104->fields.time = v105;
        v106 = *commandParam;
        if ( (int)v102->max_length >= 2 )
          v107 = System_Int32__Parse(v102->m_Items[1], 0LL);
        else
          v107 = 15LL;
        if ( !v106 )
          sub_1B4D1EC(v107, v101);
        v106->fields.easeType = v107;
        if ( !v102->max_length )
          sub_1B4D1F4(v107, v101);
        v49 = *commandParam;
        v117 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v102->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v117, (int32_t)v117, v118);
        v55 = (int)SpotEntity;
        if ( !v49 )
          sub_1B4D1EC(SpotEntity, SpotEntity);
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
            sub_1B4D1EC(0LL, v12);
          v85 = System_String__Split(v84, 0x2Cu, 0, 0LL);
          v87 = v85;
          if ( !v85 )
            sub_1B4D1EC(0LL, v86);
          if ( !v85->max_length )
            sub_1B4D1F4(v85, v86);
          v88 = *commandParam;
          v89 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v85->m_Items[0], 0LL);
          v91 = BlankEarthQuestAfterAction__GetSpotEntity(v89, (int32_t)v89, v90);
          if ( !v88 )
            sub_1B4D1EC(v91, v91);
          v88->fields.blankEarthSpotEntity = v91;
          sub_1B4CF34((CGThumbnailListItem_o *)&v88->fields, (int32_t)v91, v92, v93);
          if ( v87->max_length <= 1 )
            sub_1B4D1F4(v94, v95);
          v26 = *commandParam;
          v27 = System_Int32__Parse(v87->m_Items[1], 0LL);
          if ( !v26 )
            sub_1B4D1EC(v27, v96);
          goto LABEL_65;
        }
        v49 = *commandParam;
        v50 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v50, (int32_t)v50, v51);
        v55 = (int)SpotEntity;
        if ( !v49 )
          sub_1B4D1EC(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 400 )
      {
        v29 = command->fields.param;
        if ( !v29 )
          sub_1B4D1EC(0LL, v12);
        v30 = System_String__Split(v29, 0x2Cu, 0, 0LL);
        v32 = v30;
        if ( !v30 )
          sub_1B4D1EC(0LL, v31);
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
            v30 = (System_String_array *)System_Int32__Parse(v30->m_Items[1], 0LL);
            v35 = (int)v30 > 0;
          }
          if ( !v34 )
            sub_1B4D1EC(v30, v31);
          v34->fields.noWait = v35;
          if ( !v32->max_length )
            sub_1B4D1F4(v30, v31);
          v58 = *commandParam;
          v97 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v32->m_Items[0], 0LL);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v97, (int32_t)v97, v98);
          v64 = (int)GimmickEntity;
          if ( !v58 )
            sub_1B4D1EC(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v49 = *commandParam;
      v56 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v56, (int32_t)v56, v57);
      v55 = (int)SpotEntity;
      if ( !v49 )
        sub_1B4D1EC(SpotEntity, SpotEntity);
    }
    v49->fields.blankEarthSpotEntity = SpotEntity;
    sub_1B4CF34((CGThumbnailListItem_o *)&v49->fields, v55, v53, v54);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v14 = command->fields.param;
      if ( !v14 )
        sub_1B4D1EC(0LL, v12);
      v15 = System_String__Split(v14, 0x2Cu, 0, 0LL);
      v17 = v15;
      if ( !v15 )
        sub_1B4D1EC(0LL, v16);
      if ( !v15->max_length )
        sub_1B4D1F4(v15, v16);
      v18 = *commandParam;
      v19 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v15->m_Items[0], 0LL);
      v21 = BlankEarthQuestAfterAction__GetGimmickEntity(v19, (int32_t)v19, v20);
      if ( !v18 )
        sub_1B4D1EC(v21, v21);
      v18->fields.blankEarthGimmickEntity = v21;
      sub_1B4CF34((CGThumbnailListItem_o *)&v18->fields.blankEarthGimmickEntity, (int32_t)v21, v22, v23);
      if ( v17->max_length <= 1 )
        sub_1B4D1F4(v24, v25);
      v26 = *commandParam;
      v27 = System_Int32__Parse(v17->m_Items[1], 0LL);
      if ( !v26 )
        sub_1B4D1EC(v27, v28);
LABEL_65:
      v26->fields.intValue = v27;
      return 1;
    }
    if ( (id & 0xFFFFFFFE) != 1010 )
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
      sub_1B4D1EC(0LL, v12);
    v37 = System_String__Split(v36, 0x2Cu, 0, 0LL);
    v39 = v37;
    if ( !v37 )
      sub_1B4D1EC(0LL, v38);
    if ( v37->max_length <= 1 )
      sub_1B4D1F4(v37, v38);
    v40 = *commandParam;
    v41 = System_Int32__Parse(v37->m_Items[1], 0LL);
    if ( !v40 )
      sub_1B4D1EC(v41, v42);
    v40->fields.intValue = v41;
    if ( !v39->max_length )
      sub_1B4D1F4(v41, v42);
    v43 = *commandParam;
    v44 = System_Int32__Parse(v39->m_Items[0], 0LL);
    if ( !v43 )
      sub_1B4D1EC(v44, v45);
    v43->fields.onFade = (int)v44 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 1000 )
  {
LABEL_41:
    v58 = *commandParam;
    v59 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v59, (int32_t)v59, v60);
    v64 = (int)GimmickEntity;
    if ( !v58 )
      sub_1B4D1EC(GimmickEntity, GimmickEntity);
LABEL_70:
    v58->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1B4CF34((CGThumbnailListItem_o *)&v58->fields.blankEarthGimmickEntity, v64, v62, v63);
  }
  return 1;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  QuestTree_o *Instance; // x0
  __int64 allQuestInfoList_high; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o **v22; // x19
  BlankEarthQuestAfterAction_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  bool IsBlankEarthActive; // w8
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  __int64 v28; // x8
  int32_t id; // w23
  BlankEarth_o *v30; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  int32_t intValue; // w21
  QuestTree_o *v34; // x21
  const MethodInfo *v35; // x2
  int32_t v36; // w1
  int v37; // w8
  int32_t v38; // w2
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v41; // x8
  System_Action_object__o *v42; // x19
  System_Action_object__o *v43; // x19
  System_Action_object__o *v44; // x19
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49B7BBB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, that);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B4CF90(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v13);
    sub_1B4CF90(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v14);
    sub_1B4CF90(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v15);
    sub_1B4CF90(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v16);
    byte_49B7BBB = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v17 = sub_1B4D1DC(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_101;
  *(_QWORD *)(v17 + 16) = endAnimCallback;
  v22 = (System_Action_o **)(v17 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 16), (int32_t)endAnimCallback, v20, v21);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v23, v24);
  LOBYTE(Instance) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v25) )
    {
LABEL_66:
      ActionExtensions__Call(*v22, 0LL);
LABEL_67:
      LOBYTE(Instance) = 1;
      return (char)Instance;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, allQuestInfoList_high);
      byte_49B5933 = 1;
    }
    Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.questReleaseEntList->klass;
    if ( !klass )
      goto LABEL_101;
    v28 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v28 || !command )
      goto LABEL_101;
    id = command->fields.id;
    v30 = *(BlankEarth_o **)(v28 + 392);
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_20:
          if ( commandParam && v30 )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              v30,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v22,
              0LL);
            goto LABEL_83;
          }
LABEL_101:
          sub_1B4D1EC(Instance, allQuestInfoList_high);
        }
        if ( (id & 0xFFFFFFFE) != 1010 )
        {
          if ( id != 1012 )
          {
LABEL_83:
            LOBYTE(Instance) = 0;
            return (char)Instance;
          }
          goto LABEL_20;
        }
LABEL_70:
        if ( commandParam && v30 )
        {
          BlankEarth__RevealOtherObject(
            v30,
            commandParam->fields.blankEarthGimmickEntity,
            id != 1000 && id != 1010,
            id > 1001,
            *v22,
            0LL);
          goto LABEL_83;
        }
        goto LABEL_101;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 1000 )
          goto LABEL_83;
        goto LABEL_70;
      }
      if ( !commandParam )
        goto LABEL_101;
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_101;
        Instance = (QuestTree_o *)QuestTree__mfGetWarEntityByWarID(Instance, intValue, 0LL);
        if ( Instance )
        {
          allQuestInfoList_high = HIDWORD(Instance[1].fields.allQuestInfoList);
          v34 = Instance;
          if ( (int)allQuestInfoList_high >= 1 )
          {
            if ( !v30 )
              goto LABEL_101;
            Instance = (QuestTree_o *)BlankEarth__GetPoint(v30, allQuestInfoList_high, 0, 0LL);
            if ( !Instance )
              goto LABEL_101;
            BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)Instance, 0LL);
            v36 = HIDWORD(v34[1].fields.allQuestInfoList);
LABEL_65:
            BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot((BlankEarthQuestAfterAction_o *)Instance, v36, v35);
            goto LABEL_66;
          }
        }
      }
      goto LABEL_68;
    }
    if ( id > 303 )
    {
      if ( (id & 0xFFFFFFFC) == 400 )
      {
        if ( !commandParam )
          goto LABEL_101;
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity || !v30 )
          goto LABEL_101;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(v30, blankEarthGimmickEntity->fields.id, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (QuestTree_o *)UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_83;
        if ( (id & 0xFFFFFFFE) == 402 )
        {
          if ( !EarthGimmick )
            goto LABEL_101;
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            (id & 0xFFFFFFFD) == 401,
            0LL);
        }
        else
        {
          if ( (id & 0xFFFFFFFD) == 401 )
            allQuestInfoList_high = 3LL;
          else
            allQuestInfoList_high = 2LL;
          if ( !commandParam )
            goto LABEL_101;
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_101;
            BlankEarthGimmickComponent__SetState(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              allQuestInfoList_high,
              *v22,
              0LL);
            goto LABEL_67;
          }
          if ( !EarthGimmick )
            goto LABEL_101;
          BlankEarthGimmickComponent__SetState(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            allQuestInfoList_high,
            0LL,
            0LL);
        }
        LOBYTE(Instance) = 1;
        *isQuickUpdate = 1;
        return (char)Instance;
      }
      if ( id != 500 )
        goto LABEL_83;
      if ( !commandParam )
        goto LABEL_101;
      blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
      if ( blankEarthSpotEntity )
      {
        if ( !v30 )
          goto LABEL_101;
        Instance = (QuestTree_o *)BlankEarth__GetPoint(v30, blankEarthSpotEntity->fields.id, 0, 0LL);
        if ( !Instance )
          goto LABEL_101;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)Instance, 0LL);
        if ( !commandParam )
          goto LABEL_101;
        v41 = commandParam->fields.blankEarthSpotEntity;
        if ( !v41 )
          goto LABEL_101;
        v36 = v41->fields.id;
        goto LABEL_65;
      }
LABEL_68:
      ActionExtensions__Call(*v22, 0LL);
      goto LABEL_83;
    }
    Instance = 0LL;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v43 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v43,
            (Il2CppObject *)v17,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0LL);
          if ( !commandParam || !v30 )
            goto LABEL_101;
          BlankEarth__RotateEarthTowardsSpot(
            v30,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v43,
            0LL,
            0LL);
          break;
        case 302:
          v44 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v44,
            (Il2CppObject *)v17,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0LL);
          if ( !commandParam || !v30 )
            goto LABEL_101;
          BlankEarth__RotateEarthTowardsGimmick(
            v30,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v44,
            0LL);
          break;
        case 303:
          v42 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v42,
            (Il2CppObject *)v17,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0LL);
          if ( !commandParam || !v30 )
            goto LABEL_101;
          BlankEarth__RotateEarthByLatLong(
            v30,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v42,
            0LL,
            0LL);
          break;
        default:
          return (char)Instance;
      }
      goto LABEL_67;
    }
    if ( (unsigned int)(id - 100) > 0xE )
      return (char)Instance;
    v37 = 1 << (id - 100);
    if ( (v37 & 0x1C07) != 0 )
    {
      v38 = 0;
      if ( id != 100 && id != 110 )
      {
        if ( id == 111 || id == 101 )
          v38 = 2;
        else
          v38 = 1;
      }
      if ( !commandParam || !v30 )
        goto LABEL_101;
      BlankEarth__RevealEarthPoint(
        v30,
        commandParam->fields.blankEarthSpotEntity,
        v38,
        (unsigned int)(id - 110) < 3,
        *v22,
        0LL);
      goto LABEL_67;
    }
    if ( (v37 & 0x4010) != 0 )
    {
      if ( commandParam && v30 )
      {
        BlankEarth__PlaySpotUniqueAnim(
          v30,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v22,
          0LL);
        goto LABEL_83;
      }
      goto LABEL_101;
    }
  }
  return (char)Instance;
}


void __fastcall BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}