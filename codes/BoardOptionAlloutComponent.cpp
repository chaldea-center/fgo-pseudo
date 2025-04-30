void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
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
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v15; // x1
  System_Object_array *v16; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  signed __int64 v18; // x22
  ServantFaceIconComponent_o *v19; // x23
  unsigned __int64 max_length; // x8
  int32_t *v21; // x21
  IconLabelInfo_o *v22; // x24
  int32_t v23; // w25
  int ServantLimitCountSealAfter; // w26
  int32_t CardImageLimitCount; // w25
  int32_t v26; // w25
  int32_t LimitCountByImageLimit_38644548; // w2
  int32_t v28; // w28
  int32_t v29; // w29
  ServantOverwriteStatus_o *v30; // x27
  ServantLimitImageMaster_o *v31; // [xsp+50h] [xbp-70h]

  if ( (byte_4A4AE01 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&IconLabelInfo_TypeInfo, v7);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v11);
    sub_1B863B8(&ServantOverwriteStatus_TypeInfo, v12);
    byte_4A4AE01 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_31;
    v16 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    v31 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    if ( !servantFaceIconList )
LABEL_31:
      sub_1B86614(ClearDeckInfo, v15);
    v18 = 0LL;
    while ( v18 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v18,
                                                                     (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v19 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v16 && (max_length = v16->max_length, v18 < (int)max_length) )
      {
        if ( v18 >= max_length )
          sub_1B8661C(ClearDeckInfo, v15);
        v21 = (int32_t *)v16->m_Items[v18];
        v22 = (IconLabelInfo_o *)sub_1B86604(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v22, 0LL);
        if ( !v21 || !v22 )
          goto LABEL_31;
        IconLabelInfo__Set_39094644(v22, 2, v21[6], v21[6], 0, 0, 1, 0, 0, 0LL);
        v23 = v21[8];
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        ServantLimitCountSealAfter = ImageLimitCount__ConvertDispLimitCountForClient(v23, 0LL);
        if ( ServantLimitCountSealAfter <= 10 )
        {
          v26 = v21[7];
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimit_38644548 = ImageLimitCount__GetLimitCountByImageLimit_38644548(
                                              ServantLimitCountSealAfter,
                                              v26,
                                              0LL);
          ClearDeckInfo = (System_Collections_Generic_List_object__o *)v31;
          if ( !v31 )
            goto LABEL_31;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v31,
                                         v21[5],
                                         LimitCountByImageLimit_38644548,
                                         0LL);
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v21[5], ServantLimitCountSealAfter, 1, 0, 0LL);
        }
        else
        {
          CardImageLimitCount = v21[8];
        }
        v28 = v21[5];
        v29 = v21[7];
        v30 = (ServantOverwriteStatus_o *)sub_1B86604(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_32779780(v30, v28, v29, ServantLimitCountSealAfter, 0LL);
        if ( !v30 || !v19 )
          goto LABEL_31;
        ServantFaceIconComponent__SetIcon(
          v19,
          v21[5],
          v30->fields._Rarity_k__BackingField,
          v21[7],
          CardImageLimitCount,
          v21[9],
          v22,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0LL,
          v30->fields._ActualRarity_k__BackingField,
          0LL);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_31;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v18;
      if ( !servantFaceIconList )
        goto LABEL_31;
    }
  }
}