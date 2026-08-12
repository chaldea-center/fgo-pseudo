void StopSeOnDisableComponent___ctor(StopSeOnDisableComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596FD8C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596FD8C = 1;
  }
  v9 = *(struct System_String_o ***)(qword_5984390 + 184);
  v10 = *v9;
  this->fields.fileName = *v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fileName, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.channelIdList = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.channelIdList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void StopSeOnDisableComponent__OnDisable(StopSeOnDisableComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *channelIdList; // x8
  System_Reflection_MethodBase_o *v7; // x20
  int32_t i; // w21
  int32_t Item; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *fileName; // x19

  if ( (byte_596FD8B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&Method_StopSeOnDisableComponent_OnDisable__);
    byte_596FD8B = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.fileName, 0) )
  {
    v3 = Method_StopSeOnDisableComponent_OnDisable__;
    if ( (*((_BYTE *)Method_StopSeOnDisableComponent_OnDisable__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_StopSeOnDisableComponent_OnDisable__);
    v4 = sub_2213A44(v3, v3[4]);
    channelIdList = this->fields.channelIdList;
    v7 = (System_Reflection_MethodBase_o *)v4;
    if ( channelIdList && channelIdList->fields._size >= 1 )
    {
      for ( i = 0; i < channelIdList->fields._size; ++i )
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 channelIdList,
                 i,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        OverwriteAssetSoundName__StopSeByChannel(v7, this->fields.fileName, Item, 0.0, 0);
        channelIdList = this->fields.channelIdList;
        if ( !channelIdList )
          sub_2213CDC(v10, v11);
      }
    }
    else
    {
      fileName = this->fields.fileName;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v5);
      SeManager__StopSeByName(fileName, 0.0, v7, 0);
    }
  }
}