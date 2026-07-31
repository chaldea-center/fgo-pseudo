void BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionAlloutComponent__SetIcon(BoardOptionAlloutComponent_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *v10; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v12; // x22
  ServantFaceIconComponent_o *v13; // x23
  unsigned __int64 max_length_low; // x8
  int32_t *v15; // x21
  IconLabelInfo_o *v16; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w25
  __int64 v20; // x1
  __int64 v21; // x2
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v24; // w25
  int32_t LimitCountByImageLimit_47362432; // w2
  int32_t v26; // w28
  int32_t v27; // w29
  ServantOverwriteStatus_o *v28; // x27
  ServantLimitImageMaster_o *v29; // [xsp+60h] [xbp-70h]

  if ( (byte_5934D10 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    byte_5934D10 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0);
    if ( !ClearDeckInfo )
      goto LABEL_31;
    v10 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v29 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_21FFECC(ClearDeckInfo, v7);
    v12 = 0;
    while ( v12 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v12,
                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v13 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v10 && (max_length_low = LODWORD(v10->max_length), v12 < (int)max_length_low) )
      {
        if ( v12 >= max_length_low )
          sub_21FFED4(ClearDeckInfo);
        v15 = (int32_t *)v10->m_Items[v12];
        v16 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v16, 0);
        if ( !v15 || !v16 )
          goto LABEL_31;
        IconLabelInfo__Set_47932852(v16, 2, v15[6], v15[6], 0, 0, 1, 0, 0, 0);
        v19 = v15[8];
        if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17, v18);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v19, 0);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v24 = v15[7];
          if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v20, v21);
          LimitCountByImageLimit_47362432 = ImageLimitCount__GetLimitCountByImageLimit_47362432(
                                              ServantLimitCountSealAfter,
                                              v24,
                                              0);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v29;
          if ( !v29 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v29,
                                         v15[5],
                                         LimitCountByImageLimit_47362432,
                                         0);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v15[5], ServantLimitCountSealAfter, 1, 0, 0);
        }
        else
        {
          CardImageLimitCount = v15[8];
        }
        v26 = v15[5];
        v27 = v15[7];
        v28 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_40387980(v28, v26, v27, ServantLimitCountSealAfter, 0);
        if ( !v28 || !v13 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v13,
          v15[5],
          v28->fields._Rarity_k__BackingField,
          v15[7],
          CardImageLimitCount,
          v15[9],
          v16,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v28->fields._ActualRarity_k__BackingField,
          0,
          0,
          0);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_31;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v12;
      if ( !servantFaceIconList )
        goto LABEL_31;
    }
  }
}