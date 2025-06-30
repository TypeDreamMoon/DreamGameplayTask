#pragma once

struct FDreamTaskManagerRowData;
struct FDreamTaskSpecHandle;
class UDreamTaskComponent;

typedef TSharedPtr<UDreamTaskComponent*> FSharedTaskComponent;
typedef TSharedPtr<FDreamTaskSpecHandle> FDreamTaskSpecHandlePtr;
typedef TSharedPtr<FDreamTaskManagerRowData> FDreamTaskManagerRowDataPtr;
