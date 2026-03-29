// local variable allocation has failed, the output may be wrong!
void ScriptConnectData___ctor(
        ScriptConnectData_o *this,
        System_String_o *connectPath,
        System_String_o *objectPath,
        System_Action_o *endCallback,
        System_Action_o *errorCallback,
        int32_t jumpLine,
        bool isView,
        const MethodInfo *method)
{
  ScriptConnectData_o *v12; // x23
  bool v13; // w24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  v12 = this;
  v13 = isView;
  this->fields.ConnectPath = connectPath;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)this,
    (int32_t)connectPath,
    (int32_t)objectPath,
    (int32_t)endCallback,
    (System_String_o *)errorCallback,
    jumpLine,
    isView,
    (System_String_o *)method);
  v12->fields.ObjectPath = objectPath;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12->fields.ObjectPath, (int32_t)objectPath, v14, v15, v16, v17, v18, v19);
  v12->fields.EndCallback = endCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v12->fields.EndCallback,
    (int32_t)endCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v12->fields.ErrorCallback = errorCallback;
  v12 = (ScriptConnectData_o *)((char *)v12 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v12, (int32_t)errorCallback, v26, v27, v28, v29, v30, v31);
  LODWORD(v12->fields.ObjectPath) = jumpLine;
  BYTE4(v12->fields.ObjectPath) = v13;
  BYTE5(v12->fields.ObjectPath) = 0;
}